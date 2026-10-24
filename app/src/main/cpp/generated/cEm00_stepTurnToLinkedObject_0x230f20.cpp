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

// Function: cEm00_stepTurnToLinkedObject
// Address: 0x230f20 - 0x2311a8
void cEm00_stepTurnToLinkedObject_0x230f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepTurnToLinkedObject_0x230f20");
#endif

    switch (ctx->pc) {
        case 0x230f58u: goto label_230f58;
        case 0x230f80u: goto label_230f80;
        case 0x230fd4u: goto label_230fd4;
        case 0x230ff4u: goto label_230ff4;
        case 0x231060u: goto label_231060;
        case 0x23107cu: goto label_23107c;
        case 0x23109cu: goto label_23109c;
        case 0x2310a4u: goto label_2310a4;
        case 0x2310b4u: goto label_2310b4;
        case 0x2310c8u: goto label_2310c8;
        case 0x2310d4u: goto label_2310d4;
        case 0x231100u: goto label_231100;
        case 0x231124u: goto label_231124;
        case 0x23114cu: goto label_23114c;
        case 0x231154u: goto label_231154;
        default: break;
    }

    ctx->pc = 0x230f20u;

    // 0x230f20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x230f24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230f28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x230f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x230f2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x230f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x230f30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x230f38: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x230f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x230f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230f40: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x230f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x230f44: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x230f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x230f48: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x230f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x230f4c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x230f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x230f50: 0xc098a84  jal         func_262A10
    ctx->pc = 0x230F50u;
    SET_GPR_U32(ctx, 31, 0x230F58u);
    ctx->pc = 0x230F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F50u;
    // 0x230f54: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x230F50u, 0x230F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F58u;
label_230f58:
    // 0x230f58: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x230f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x230f5c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230F5Cu;
    {
        const bool branch_taken_0x230f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F5Cu;
        // 0x230f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f5c) {
            ctx->pc = 0x230F74u;
            goto label_230f74;
        }
    }
    ctx->pc = 0x230F64u;
    // 0x230f64: 0x5062002d  beql        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x230F64u;
    {
        const bool branch_taken_0x230f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x230f64) {
            ctx->pc = 0x230F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F64u;
            // 0x230f68: 0x8e0205f8  lw          $v0, 0x5F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23101Cu;
            goto label_23101c;
        }
    }
    ctx->pc = 0x230F6Cu;
    // 0x230f6c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x230F6Cu;
    {
        const bool branch_taken_0x230f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F6Cu;
        // 0x230f70: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f6c) {
            ctx->pc = 0x2310D8u;
            goto label_2310d8;
        }
    }
    ctx->pc = 0x230F74u;
label_230f74:
    // 0x230f74: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x230f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x230f78: 0xc09d91a  jal         func_276468
    ctx->pc = 0x230F78u;
    SET_GPR_U32(ctx, 31, 0x230F80u);
    ctx->pc = 0x230F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F78u;
    // 0x230f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x230F78u, 0x230F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F80u;
label_230f80:
    // 0x230f80: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x230f80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x230f84: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x230f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x230f88: 0x24020213  addiu       $v0, $zero, 0x213
    ctx->pc = 0x230f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
    // 0x230f8c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230F8Cu;
    {
        const bool branch_taken_0x230f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F8Cu;
        // 0x230f90: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f8c) {
            ctx->pc = 0x230FB0u;
            goto label_230fb0;
        }
    }
    ctx->pc = 0x230F94u;
    // 0x230f94: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230F94u;
    {
        const bool branch_taken_0x230f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F94u;
        // 0x230f98: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f94) {
            ctx->pc = 0x230FB4u;
            goto label_230fb4;
        }
    }
    ctx->pc = 0x230F9Cu;
    // 0x230f9c: 0x8c4301b8  lw          $v1, 0x1B8($v0)
    ctx->pc = 0x230f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x230fa0: 0x8c4401bc  lw          $a0, 0x1BC($v0)
    ctx->pc = 0x230fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x230fa4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x230fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230fa8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x230FA8u;
    {
        const bool branch_taken_0x230fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FA8u;
        // 0x230fac: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fa8) {
            ctx->pc = 0x230FD4u;
            goto label_230fd4;
        }
    }
    ctx->pc = 0x230FB0u;
label_230fb0:
    // 0x230fb0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x230fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_230fb4:
    // 0x230fb4: 0x8e070708  lw          $a3, 0x708($s0)
    ctx->pc = 0x230fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x230fb8: 0x8c432f6c  lw          $v1, 0x2F6C($v0)
    ctx->pc = 0x230fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12140)));
    // 0x230fbc: 0x8c442f70  lw          $a0, 0x2F70($v0)
    ctx->pc = 0x230fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12144)));
    // 0x230fc0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x230fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230fc4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x230FC4u;
    {
        const bool branch_taken_0x230fc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FC4u;
        // 0x230fc8: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fc4) {
            ctx->pc = 0x230FD4u;
            goto label_230fd4;
        }
    }
    ctx->pc = 0x230FCCu;
    // 0x230fcc: 0xc0741c6  jal         func_1D0718
    ctx->pc = 0x230FCCu;
    SET_GPR_U32(ctx, 31, 0x230FD4u);
    ctx->pc = 0x230FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FCCu;
    // 0x230fd0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0718u, 0x230FCCu, 0x230FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FD4u;
label_230fd4:
    // 0x230fd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x230fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x230fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fe4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x230fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fe8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x230fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230fec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x230FECu;
    SET_GPR_U32(ctx, 31, 0x230FF4u);
    ctx->pc = 0x230FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FECu;
    // 0x230ff0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x230FECu, 0x230FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FF4u;
label_230ff4:
    // 0x230ff4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x230ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x230ff8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x230ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x230ffc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x230ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x231000: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x231000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x231004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x231008: 0xae0405f8  sw          $a0, 0x5F8($s0)
    ctx->pc = 0x231008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 4));
    // 0x23100c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23100cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x231010: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x231010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x231014: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x231014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x231018: 0x8e0205f8  lw          $v0, 0x5F8($s0)
    ctx->pc = 0x231018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1528)));
label_23101c:
    // 0x23101c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23101Cu;
    {
        const bool branch_taken_0x23101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23101Cu;
        // 0x231020: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23101c) {
            ctx->pc = 0x231028u;
            goto label_231028;
        }
    }
    ctx->pc = 0x231024u;
    // 0x231024: 0xae0205f8  sw          $v0, 0x5F8($s0)
    ctx->pc = 0x231024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 2));
label_231028:
    // 0x231028: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x231028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x23102c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23102Cu;
    {
        const bool branch_taken_0x23102c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23102Cu;
        // 0x231030: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23102c) {
            ctx->pc = 0x23109Cu;
            goto label_23109c;
        }
    }
    ctx->pc = 0x231034u;
    // 0x231034: 0x8e0317a0  lw          $v1, 0x17A0($s0)
    ctx->pc = 0x231034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6048)));
    // 0x231038: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x231038u;
    {
        const bool branch_taken_0x231038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231038u;
        // 0x23103c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231038) {
            ctx->pc = 0x231068u;
            goto label_231068;
        }
    }
    ctx->pc = 0x231040u;
    // 0x231040: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x231040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231048: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x231048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x23104c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23104cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231050: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231054: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x231054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x231058: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x231058u;
    SET_GPR_U32(ctx, 31, 0x231060u);
    ctx->pc = 0x23105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231058u;
    // 0x23105c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x231058u, 0x231060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231060u;
label_231060:
    // 0x231060: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x231060u;
    {
        const bool branch_taken_0x231060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231060) {
            ctx->pc = 0x23109Cu;
            goto label_23109c;
        }
    }
    ctx->pc = 0x231068u;
label_231068:
    // 0x231068: 0x8e0205f8  lw          $v0, 0x5F8($s0)
    ctx->pc = 0x231068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1528)));
    // 0x23106c: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23106Cu;
    {
        const bool branch_taken_0x23106c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x23106c) {
            ctx->pc = 0x23109Cu;
            goto label_23109c;
        }
    }
    ctx->pc = 0x231074u;
    // 0x231074: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x231074u;
    SET_GPR_U32(ctx, 31, 0x23107Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x231074u, 0x23107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23107Cu;
label_23107c:
    // 0x23107c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x23107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231084: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x231084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x231088: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23108c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23108cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231090: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x231090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x231094: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x231094u;
    SET_GPR_U32(ctx, 31, 0x23109Cu);
    ctx->pc = 0x231098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231094u;
    // 0x231098: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x231094u, 0x23109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23109Cu;
label_23109c:
    // 0x23109c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23109Cu;
    SET_GPR_U32(ctx, 31, 0x2310A4u);
    ctx->pc = 0x2310A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23109Cu;
    // 0x2310a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23109Cu, 0x2310A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310A4u;
label_2310a4:
    // 0x2310a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2310A4u;
    {
        const bool branch_taken_0x2310a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310a4) {
            ctx->pc = 0x2310B4u;
            goto label_2310b4;
        }
    }
    ctx->pc = 0x2310ACu;
    // 0x2310ac: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2310ACu;
    SET_GPR_U32(ctx, 31, 0x2310B4u);
    ctx->pc = 0x2310B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310ACu;
    // 0x2310b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2310ACu, 0x2310B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310B4u;
label_2310b4:
    // 0x2310b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2310b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2310b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2310b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2310bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2310bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2310C0u;
    SET_GPR_U32(ctx, 31, 0x2310C8u);
    ctx->pc = 0x2310C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310C0u;
    // 0x2310c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2310C0u, 0x2310C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310C8u;
label_2310c8:
    // 0x2310c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2310c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2310cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2310CCu;
    SET_GPR_U32(ctx, 31, 0x2310D4u);
    ctx->pc = 0x2310D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310CCu;
    // 0x2310d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2310CCu, 0x2310D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310D4u;
label_2310d4:
    // 0x2310d4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2310d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2310d8:
    // 0x2310d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2310d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2310dc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2310DCu;
    {
        const bool branch_taken_0x2310dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310dc) {
            ctx->pc = 0x2310E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310DCu;
            // 0x2310e0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231108u;
            goto label_231108;
        }
    }
    ctx->pc = 0x2310E4u;
    // 0x2310e4: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x2310e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x2310e8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2310E8u;
    {
        const bool branch_taken_0x2310e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310e8) {
            ctx->pc = 0x2310ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310E8u;
            // 0x2310ec: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231108u;
            goto label_231108;
        }
    }
    ctx->pc = 0x2310F0u;
    // 0x2310f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2310f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2310f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2310f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310f8: 0xc09bb18  jal         func_26EC60
    ctx->pc = 0x2310F8u;
    SET_GPR_U32(ctx, 31, 0x231100u);
    ctx->pc = 0x2310FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310F8u;
    // 0x2310fc: 0xae0205f4  sw          $v0, 0x5F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC60u, 0x2310F8u, 0x231100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231100u;
label_231100:
    // 0x231100: 0xae0017a0  sw          $zero, 0x17A0($s0)
    ctx->pc = 0x231100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6048), GPR_U32(ctx, 0));
    // 0x231104: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x231104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_231108:
    // 0x231108: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x231108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x23110c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23110Cu;
    {
        const bool branch_taken_0x23110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23110Cu;
        // 0x231110: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23110c) {
            ctx->pc = 0x231124u;
            goto label_231124;
        }
    }
    ctx->pc = 0x231114u;
    // 0x231114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231118: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x231118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x23111c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x23111Cu;
    SET_GPR_U32(ctx, 31, 0x231124u);
    ctx->pc = 0x231120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23111Cu;
    // 0x231120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23111Cu, 0x231124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231124u;
label_231124:
    // 0x231124: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x231124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x231128: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23112c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23112Cu;
    {
        const bool branch_taken_0x23112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23112Cu;
        // 0x231130: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23112c) {
            ctx->pc = 0x231154u;
            goto label_231154;
        }
    }
    ctx->pc = 0x231134u;
    // 0x231134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231138: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x231138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23113c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x23113cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231140: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231144: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231144u;
    SET_GPR_U32(ctx, 31, 0x23114Cu);
    ctx->pc = 0x231148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231144u;
    // 0x231148: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231144u, 0x23114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23114Cu;
label_23114c:
    // 0x23114c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x23114Cu;
    SET_GPR_U32(ctx, 31, 0x231154u);
    ctx->pc = 0x231150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23114Cu;
    // 0x231150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x23114Cu, 0x231154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231154u;
label_231154:
    // 0x231154: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x231154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x231158: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x231158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23115c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23115Cu;
    {
        const bool branch_taken_0x23115c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23115Cu;
        // 0x231160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23115c) {
            ctx->pc = 0x231168u;
            goto label_231168;
        }
    }
    ctx->pc = 0x231164u;
    // 0x231164: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x231164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_231168:
    // 0x231168: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x231168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x23116c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23116Cu;
    {
        const bool branch_taken_0x23116c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23116c) {
            ctx->pc = 0x231170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23116Cu;
            // 0x231170: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23118Cu;
            goto label_23118c;
        }
    }
    ctx->pc = 0x231174u;
    // 0x231174: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x231174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x231178: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x231178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23117c: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x23117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x231180: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x231180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x231184: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x231184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x231188: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x231188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23118c:
    // 0x23118c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23118cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x231190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231194: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x231194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23119c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2311a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2311A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2311A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311A0u;
        // 0x2311a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2311A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2311A8u;
}
