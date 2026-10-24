#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00276F18
// Address: 0x276f18 - 0x277238
void func_00276F18_0x276f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276F18_0x276f18");
#endif

    switch (ctx->pc) {
        case 0x276f8cu: goto label_276f8c;
        case 0x276ff4u: goto label_276ff4;
        case 0x277048u: goto label_277048;
        case 0x277094u: goto label_277094;
        case 0x2770e0u: goto label_2770e0;
        case 0x27712cu: goto label_27712c;
        case 0x27717cu: goto label_27717c;
        case 0x2771c8u: goto label_2771c8;
        default: break;
    }

    ctx->pc = 0x276f18u;

    // 0x276f18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x276f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x276f1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x276f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x276f20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x276f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x276f24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x276f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x276f28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x276f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x276f2c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x276f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x276f30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x276f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x276f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276f38: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x276f38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x276f3c: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x276f3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x276f40: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x276f40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x276f44: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x276f44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x276f48: 0x14a200ae  bne         $a1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x276F48u;
    {
        const bool branch_taken_0x276f48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x276F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F48u;
        // 0x276f4c: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f48) {
            ctx->pc = 0x277204u;
            goto label_277204;
        }
    }
    ctx->pc = 0x276F50u;
    // 0x276f50: 0x108000ac  beqz        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x276F50u;
    {
        const bool branch_taken_0x276f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F50u;
        // 0x276f54: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f50) {
            ctx->pc = 0x277204u;
            goto label_277204;
        }
    }
    ctx->pc = 0x276F58u;
    // 0x276f58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x276f5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x276f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x276f60: 0x261050c0  addiu       $s0, $s0, 0x50C0
    ctx->pc = 0x276f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20672));
    // 0x276f64: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x276f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x276f68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x276f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x276f6c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x276f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x276f70: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x276f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x276f74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x276f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x276f78: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x276f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x276f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x276F84u;
    SET_GPR_U32(ctx, 31, 0x276F8Cu);
    ctx->pc = 0x276F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F84u;
    // 0x276f88: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x276F84u, 0x276F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F8Cu;
label_276f8c:
    // 0x276f8c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x276f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276f90: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x276f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x276f94: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x276f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x276f98: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x276f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x276f9c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x276f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x276fa0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x276fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x276fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fa8: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x276fa8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x276fac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x276facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x276fb0: 0xe6170010  swc1        $f23, 0x10($s0)
    ctx->pc = 0x276fb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x276fb4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x276fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276fb8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x276fb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x276fbc: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x276fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x276fc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x276fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x276fc4: 0x24140016  addiu       $s4, $zero, 0x16
    ctx->pc = 0x276fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x276fc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x276fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x276fcc: 0xe6170020  swc1        $f23, 0x20($s0)
    ctx->pc = 0x276fccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x276fd0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x276fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x276fd4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x276fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x276fd8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x276fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x276fdc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x276fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x276fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fe4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x276fe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x276fe8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x276fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x276fec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x276FECu;
    SET_GPR_U32(ctx, 31, 0x276FF4u);
    ctx->pc = 0x276FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276FECu;
    // 0x276ff0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x276FECu, 0x276FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FF4u;
label_276ff4:
    // 0x276ff4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x276ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x276ff8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x276ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x276ffc: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x276ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x277000: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x277000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x277004: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x277004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x277008: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27700c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27700cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277014: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x277014u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277018: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x277018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27701c: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x27701cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x277020: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x277020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x277024: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x277024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x277028: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x277028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27702c: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x27702cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x277030: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x277030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x277034: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x277034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x277038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27703c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27703cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x277040: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x277040u;
    SET_GPR_U32(ctx, 31, 0x277048u);
    ctx->pc = 0x277044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277040u;
    // 0x277044: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x277040u, 0x277048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277048u;
label_277048:
    // 0x277048: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x277048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x27704c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x277050: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x277050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x277054: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x277054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x277058: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x277058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27705c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27705cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277060: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x277060u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277064: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x277064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x277068: 0xe6170010  swc1        $f23, 0x10($s0)
    ctx->pc = 0x277068u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x27706c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27706cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x277070: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x277070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x277074: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x277074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x277078: 0xe6170020  swc1        $f23, 0x20($s0)
    ctx->pc = 0x277078u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27707c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27707cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x277080: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x277080u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x277084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277088: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x277088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27708c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27708Cu;
    SET_GPR_U32(ctx, 31, 0x277094u);
    ctx->pc = 0x277090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27708Cu;
    // 0x277090: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27708Cu, 0x277094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277094u;
label_277094:
    // 0x277094: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x277094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x277098: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x277098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27709c: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x27709cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x2770a0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2770a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2770a4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2770a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2770a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2770a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770ac: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2770acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2770b0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2770b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2770b4: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x2770b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2770b8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2770b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2770bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2770bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2770c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2770c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2770c4: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x2770c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2770c8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2770c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2770cc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2770ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2770d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2770d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2770d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2770d8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2770D8u;
    SET_GPR_U32(ctx, 31, 0x2770E0u);
    ctx->pc = 0x2770DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770D8u;
    // 0x2770dc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2770D8u, 0x2770E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770E0u;
label_2770e0:
    // 0x2770e0: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2770e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2770e4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2770e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2770e8: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2770e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2770ec: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2770ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2770f0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2770f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2770f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2770f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770f8: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2770f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2770fc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2770fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x277100: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x277100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x277104: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x277104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x277108: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x277108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27710c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27710cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x277110: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x277110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x277114: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x277114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x277118: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x277118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27711c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277120: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x277120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x277124: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x277124u;
    SET_GPR_U32(ctx, 31, 0x27712Cu);
    ctx->pc = 0x277128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277124u;
    // 0x277128: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x277124u, 0x27712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27712Cu;
label_27712c:
    // 0x27712c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x27712cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x277130: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x277130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x277134: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x277134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x277138: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x277138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27713c: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x27713cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277140: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x277140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x277144: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x277144u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27714c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x277150: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x277150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x277154: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x277154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x277158: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x277158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27715c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27715cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x277160: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x277160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x277164: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x277164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x277168: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x277168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27716c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277170: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x277170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x277174: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x277174u;
    SET_GPR_U32(ctx, 31, 0x27717Cu);
    ctx->pc = 0x277178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277174u;
    // 0x277178: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x277174u, 0x27717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27717Cu;
label_27717c:
    // 0x27717c: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x27717cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x277180: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x277180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x277184: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x277184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x277188: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x277188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27718c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27718cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277194: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x277194u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277198: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x277198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27719c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27719cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2771a0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2771a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2771a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2771a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2771a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2771a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2771ac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2771acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2771b0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2771b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2771b4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2771b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2771b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2771b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2771bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2771bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2771C0u;
    SET_GPR_U32(ctx, 31, 0x2771C8u);
    ctx->pc = 0x2771C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2771C0u;
    // 0x2771c4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2771C0u, 0x2771C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771C8u;
label_2771c8:
    // 0x2771c8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2771c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2771cc: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x2771ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x2771d0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2771d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2771d4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2771d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2771d8: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x2771d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2771dc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2771dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2771e0: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2771e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2771e4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2771e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2771e8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2771e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2771ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2771ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2771f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2771f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2771f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2771f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2771f8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2771f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2771fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2771fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x277200: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x277200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_277204:
    // 0x277204: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x277204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277208: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x277208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27720c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27720cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277210: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x277210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277214: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x277214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27721c: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x27721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x277220: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x277220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x277224: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x277224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x277228: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x277228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27722c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277230: 0x3e00008  jr          $ra
    ctx->pc = 0x277230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277230u;
        // 0x277234: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277238u;
}
