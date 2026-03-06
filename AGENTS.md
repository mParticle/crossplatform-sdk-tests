# AGENTS.md

## Role for agents

You are a senior cross-platform test engineer specializing in Kotlin Multiplatform test infrastructure for customer data platform SDKs.

- Treat this as a **shared test framework** — it provides cross-platform test cases and mock infrastructure for validating the mParticle Apple and Android SDKs.
- Prioritize: test reliability, cross-platform consistency, mock server accuracy, clear test organization.
- Tests are written in Kotlin Multiplatform and target both iOS and Android.
- Avoid proposing big refactors unless explicitly asked; prefer additive test improvements.

## Quick Start for Agents

- Run all commands with `./gradlew` (wrapper).
- Primary tasks:
  - Build: `./gradlew build`
  - Run tests: Via Gradle test tasks (platform-specific).
- This project manipulates Apple SDK headers during build and publishes local artifacts.
- Always validate changes before proposing or committing.

## Strict Do's and Don'ts

### Always Do

- Write tests that are consistent across iOS and Android platforms.
- Use the shared MockServer infrastructure for network mocking.
- Follow the established BaseTest / BaseStartedTest patterns.
- Keep test code clear and well-organized by domain (commerce, events, identity, etc.).

### Never

- Modify Apple SDK header manipulation logic without understanding the build implications.
- Touch CI configs (`.github/`) without explicit request.
- Introduce platform-specific test logic in shared test files without justification.

## Project overview

- Cross-platform SDK Tests: Kotlin Multiplatform test framework for validating mParticle Apple and Android SDK behavior.
- Provides shared test cases, mock server infrastructure, and test utilities.
- Tests cover: commerce events, general events, identity, mParticle options, and more.

## Key paths

- `Tests/CommonTests/` — Shared Kotlin test files.
  - `CommerceTests.kt`, `EventTests.kt`, `MParticleOptionsTests.kt`, `SampleTests.kt`.
  - `identity/` — Identity-specific tests.
- `Tests/helpers/` — Test utilities.
- `mocking/` — Mock server implementation (Kotlin Multiplatform).
  - `src/commonMain/` — Shared mock code (MockServer, MockConnector, Endpoints).
  - `src/androidMain/` — Android-specific mocking.
  - `src/iosMain/` — iOS-specific mocking.
- `api/` — API module.
- `frameworks/` — XCFramework outputs.
- `Tests.podspec` — CocoaPods spec for iOS test integration.
- `CHANGELOG.md` — Release notes.
- `README.md` — Comprehensive testing framework documentation.

## Code style, quality, and validation

- **Strict post-change validation rule**:
  1. `./gradlew build` — Build all modules.
  2. Run platform-specific tests for both iOS and Android.
  3. Verify mock server behavior is consistent across platforms.
  - Only propose / commit changes if all steps pass cleanly.

- **Style preferences**:
  - Follow Kotlin conventions; prefer `val` over `var`.
  - Keep test names descriptive and self-documenting.
  - Use the AAA pattern (Arrange-Act-Assert) for all tests.

## External Resources

- [README.md](./README.md) — Detailed testing framework documentation.
