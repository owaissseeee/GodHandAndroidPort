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

// Function: func_002349F8
// Address: 0x2349f8 - 0x234d30
void func_002349F8_0x2349f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002349F8_0x2349f8");
#endif

    switch (ctx->pc) {
        case 0x234a34u: goto label_234a34;
        case 0x234a5cu: goto label_234a5c;
        case 0x234a84u: goto label_234a84;
        case 0x234abcu: goto label_234abc;
        case 0x234ae0u: goto label_234ae0;
        case 0x234ae8u: goto label_234ae8;
        case 0x234b94u: goto label_234b94;
        case 0x234bb4u: goto label_234bb4;
        case 0x234bbcu: goto label_234bbc;
        case 0x234bd4u: goto label_234bd4;
        case 0x234be0u: goto label_234be0;
        case 0x234be8u: goto label_234be8;
        case 0x234c00u: goto label_234c00;
        case 0x234c0cu: goto label_234c0c;
        case 0x234c3cu: goto label_234c3c;
        case 0x234c50u: goto label_234c50;
        case 0x234c64u: goto label_234c64;
        case 0x234c84u: goto label_234c84;
        case 0x234c90u: goto label_234c90;
        case 0x234ca4u: goto label_234ca4;
        case 0x234cccu: goto label_234ccc;
        default: break;
    }

    ctx->pc = 0x2349f8u;

    // 0x2349f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2349f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2349fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234a00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x234a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x234a04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x234a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x234a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x234a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x234a10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x234a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x234a14: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x234a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x234a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234a1c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x234a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x234a20: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x234a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x234a24: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x234a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x234a28: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x234a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x234a2c: 0xc098a84  jal         func_262A10
    ctx->pc = 0x234A2Cu;
    SET_GPR_U32(ctx, 31, 0x234A34u);
    ctx->pc = 0x234A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A2Cu;
    // 0x234a30: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x234A2Cu, 0x234A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A34u;
label_234a34:
    // 0x234a34: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x234a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x234a38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234A38u;
    {
        const bool branch_taken_0x234a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A38u;
        // 0x234a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a38) {
            ctx->pc = 0x234A50u;
            goto label_234a50;
        }
    }
    ctx->pc = 0x234A40u;
    // 0x234a40: 0x50620050  beql        $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x234A40u;
    {
        const bool branch_taken_0x234a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x234a40) {
            ctx->pc = 0x234A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A40u;
            // 0x234a44: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234B84u;
            goto label_234b84;
        }
    }
    ctx->pc = 0x234A48u;
    // 0x234a48: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x234A48u;
    {
        const bool branch_taken_0x234a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A48u;
        // 0x234a4c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a48) {
            ctx->pc = 0x234C10u;
            goto label_234c10;
        }
    }
    ctx->pc = 0x234A50u;
label_234a50:
    // 0x234a50: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x234a50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x234a54: 0xc09d91a  jal         func_276468
    ctx->pc = 0x234A54u;
    SET_GPR_U32(ctx, 31, 0x234A5Cu);
    ctx->pc = 0x234A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A54u;
    // 0x234a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x234A54u, 0x234A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A5Cu;
label_234a5c:
    // 0x234a5c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x234a5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234a60: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234a64: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x234a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x234a68: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x234a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x234a6c: 0x8c652030  lw          $a1, 0x2030($v1)
    ctx->pc = 0x234a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8240)));
    // 0x234a70: 0x8c622034  lw          $v0, 0x2034($v1)
    ctx->pc = 0x234a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8244)));
    // 0x234a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x234a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a78: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x234a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x234a7c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234A7Cu;
    SET_GPR_U32(ctx, 31, 0x234A84u);
    ctx->pc = 0x234A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A7Cu;
    // 0x234a80: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234A7Cu, 0x234A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A84u;
label_234a84:
    // 0x234a84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234a88: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234A88u;
    {
        const bool branch_taken_0x234a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x234a88) {
            ctx->pc = 0x234A9Cu;
            goto label_234a9c;
        }
    }
    ctx->pc = 0x234A90u;
    // 0x234a90: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234a94: 0x8c622038  lw          $v0, 0x2038($v1)
    ctx->pc = 0x234a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8248)));
    // 0x234a98: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x234a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234a9c:
    // 0x234a9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234aa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234aa4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x234aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234aa8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x234aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ab0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x234ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234ab4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x234AB4u;
    SET_GPR_U32(ctx, 31, 0x234ABCu);
    ctx->pc = 0x234AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AB4u;
    // 0x234ab8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x234AB4u, 0x234ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ABCu;
label_234abc:
    // 0x234abc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x234abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ac4: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x234ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x234ac8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x234ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x234acc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x234accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x234ad0: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x234ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x234ad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ad8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x234AD8u;
    SET_GPR_U32(ctx, 31, 0x234AE0u);
    ctx->pc = 0x234ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AD8u;
    // 0x234adc: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x234AD8u, 0x234AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AE0u;
label_234ae0:
    // 0x234ae0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234AE0u;
    SET_GPR_U32(ctx, 31, 0x234AE8u);
    ctx->pc = 0x234AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AE0u;
    // 0x234ae4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234AE0u, 0x234AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AE8u;
label_234ae8:
    // 0x234ae8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x234ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234aec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x234aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x234af0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x234AF0u;
    {
        const bool branch_taken_0x234af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AF0u;
        // 0x234af4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234af0) {
            ctx->pc = 0x234B10u;
            goto label_234b10;
        }
    }
    ctx->pc = 0x234AF8u;
    // 0x234af8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x234af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x234afc: 0x24429da0  addiu       $v0, $v0, -0x6260
    ctx->pc = 0x234afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942112));
    // 0x234b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234b04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x234b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234b08: 0x800008  jr          $a0
    ctx->pc = 0x234B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234B10u: goto label_234b10;
            case 0x234B28u: goto label_234b28;
            case 0x234B44u: goto label_234b44;
            case 0x234B68u: goto label_234b68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x234B10u;
label_234b10:
    // 0x234b10: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x234b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234b18: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x234b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x234b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234b20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x234B20u;
    {
        const bool branch_taken_0x234b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B20u;
        // 0x234b24: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b20) {
            ctx->pc = 0x234B60u;
            goto label_234b60;
        }
    }
    ctx->pc = 0x234B28u;
label_234b28:
    // 0x234b28: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x234b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234b30: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x234b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x234b34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x234b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x234b38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x234B3Cu;
    {
        const bool branch_taken_0x234b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B3Cu;
        // 0x234b40: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b3c) {
            ctx->pc = 0x234B60u;
            goto label_234b60;
        }
    }
    ctx->pc = 0x234B44u;
label_234b44:
    // 0x234b44: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x234b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234b4c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x234b50: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x234b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x234b54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234b58: 0x0  nop
    ctx->pc = 0x234b58u;
    // NOP
    // 0x234b5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x234b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_234b60:
    // 0x234b60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x234b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x234b64: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x234b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_234b68:
    // 0x234b68: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x234b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x234b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234b70: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x234b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
    // 0x234b74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x234b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x234b78: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x234b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x234b7c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x234b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x234b80: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x234b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_234b84:
    // 0x234b84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x234B84u;
    {
        const bool branch_taken_0x234b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B84u;
        // 0x234b88: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b84) {
            ctx->pc = 0x234BB4u;
            goto label_234bb4;
        }
    }
    ctx->pc = 0x234B8Cu;
    // 0x234b8c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x234B8Cu;
    SET_GPR_U32(ctx, 31, 0x234B94u);
    ctx->pc = 0x234B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B8Cu;
    // 0x234b90: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x234B8Cu, 0x234B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B94u;
label_234b94:
    // 0x234b94: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x234b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b9c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x234b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x234ba0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x234ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x234ba4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x234ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234ba8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x234ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x234bac: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x234BACu;
    SET_GPR_U32(ctx, 31, 0x234BB4u);
    ctx->pc = 0x234BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BACu;
    // 0x234bb0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x234BACu, 0x234BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BB4u;
label_234bb4:
    // 0x234bb4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x234BB4u;
    SET_GPR_U32(ctx, 31, 0x234BBCu);
    ctx->pc = 0x234BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BB4u;
    // 0x234bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x234BB4u, 0x234BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BBCu;
label_234bbc:
    // 0x234bbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x234BBCu;
    {
        const bool branch_taken_0x234bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BBCu;
        // 0x234bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bbc) {
            ctx->pc = 0x234BF0u;
            goto label_234bf0;
        }
    }
    ctx->pc = 0x234BC4u;
    // 0x234bc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234bc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x234bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234bcc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x234BCCu;
    SET_GPR_U32(ctx, 31, 0x234BD4u);
    ctx->pc = 0x234BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BCCu;
    // 0x234bd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x234BCCu, 0x234BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BD4u;
label_234bd4:
    // 0x234bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bd8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x234BD8u;
    SET_GPR_U32(ctx, 31, 0x234BE0u);
    ctx->pc = 0x234BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BD8u;
    // 0x234bdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x234BD8u, 0x234BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BE0u;
label_234be0:
    // 0x234be0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x234BE0u;
    SET_GPR_U32(ctx, 31, 0x234BE8u);
    ctx->pc = 0x234BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BE0u;
    // 0x234be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x234BE0u, 0x234BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BE8u;
label_234be8:
    // 0x234be8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x234BE8u;
    {
        const bool branch_taken_0x234be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BE8u;
        // 0x234bec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234be8) {
            ctx->pc = 0x234D0Cu;
            goto label_234d0c;
        }
    }
    ctx->pc = 0x234BF0u;
label_234bf0:
    // 0x234bf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234bf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x234bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234bf8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x234BF8u;
    SET_GPR_U32(ctx, 31, 0x234C00u);
    ctx->pc = 0x234BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BF8u;
    // 0x234bfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x234BF8u, 0x234C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C00u;
label_234c00:
    // 0x234c00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x234c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x234c04: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x234C04u;
    SET_GPR_U32(ctx, 31, 0x234C0Cu);
    ctx->pc = 0x234C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C04u;
    // 0x234c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x234C04u, 0x234C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C0Cu;
label_234c0c:
    // 0x234c0c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x234c0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_234c10:
    // 0x234c10: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x234c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x234c14: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x234C14u;
    {
        const bool branch_taken_0x234c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C14u;
        // 0x234c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c14) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234C1Cu;
    // 0x234c1c: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x234c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x234c20: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x234C20u;
    {
        const bool branch_taken_0x234c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c20) {
            ctx->pc = 0x234C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234C20u;
            // 0x234c24: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234C74u;
            goto label_234c74;
        }
    }
    ctx->pc = 0x234C28u;
    // 0x234c28: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x234c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x234c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234C2Cu;
    {
        const bool branch_taken_0x234c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C2Cu;
        // 0x234c30: 0xae0005f4  sw          $zero, 0x5F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c2c) {
            ctx->pc = 0x234C44u;
            goto label_234c44;
        }
    }
    ctx->pc = 0x234C34u;
    // 0x234c34: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x234C34u;
    SET_GPR_U32(ctx, 31, 0x234C3Cu);
    ctx->pc = 0x234C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C34u;
    // 0x234c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x234C34u, 0x234C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C3Cu;
label_234c3c:
    // 0x234c3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x234C3Cu;
    {
        const bool branch_taken_0x234c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C3Cu;
        // 0x234c40: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c3c) {
            ctx->pc = 0x234C74u;
            goto label_234c74;
        }
    }
    ctx->pc = 0x234C44u;
label_234c44:
    // 0x234c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c48: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x234C48u;
    SET_GPR_U32(ctx, 31, 0x234C50u);
    ctx->pc = 0x234C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C48u;
    // 0x234c4c: 0x24050362  addiu       $a1, $zero, 0x362 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 866));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x234C48u, 0x234C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C50u;
label_234c50:
    // 0x234c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c58: 0xae0206ec  sw          $v0, 0x6EC($s0)
    ctx->pc = 0x234c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 2));
    // 0x234c5c: 0xc09aac8  jal         func_26AB20
    ctx->pc = 0x234C5Cu;
    SET_GPR_U32(ctx, 31, 0x234C64u);
    ctx->pc = 0x234C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C5Cu;
    // 0x234c60: 0x24060362  addiu       $a2, $zero, 0x362 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 866));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AB20u, 0x234C5Cu, 0x234C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C64u;
label_234c64:
    // 0x234c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x234C64u;
    {
        const bool branch_taken_0x234c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C64u;
        // 0x234c68: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c64) {
            ctx->pc = 0x234C74u;
            goto label_234c74;
        }
    }
    ctx->pc = 0x234C6Cu;
label_234c6c:
    // 0x234c6c: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x234c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
    // 0x234c70: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x234c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_234c74:
    // 0x234c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c78: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x234c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x234c7c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x234C7Cu;
    SET_GPR_U32(ctx, 31, 0x234C84u);
    ctx->pc = 0x234C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C7Cu;
    // 0x234c80: 0xa60203ac  sh          $v0, 0x3AC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x234C7Cu, 0x234C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C84u;
label_234c84:
    // 0x234c84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x234c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x234c88: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234C88u;
    SET_GPR_U32(ctx, 31, 0x234C90u);
    ctx->pc = 0x234C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C88u;
    // 0x234c8c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234C88u, 0x234C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C90u;
label_234c90:
    // 0x234c90: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x234c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x234c94: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x234C94u;
    {
        const bool branch_taken_0x234c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234c94) {
            ctx->pc = 0x234C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234C94u;
            // 0x234c98: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234CD8u;
            goto label_234cd8;
        }
    }
    ctx->pc = 0x234C9Cu;
    // 0x234c9c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x234C9Cu;
    SET_GPR_U32(ctx, 31, 0x234CA4u);
    ctx->pc = 0x234CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C9Cu;
    // 0x234ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x234C9Cu, 0x234CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CA4u;
label_234ca4:
    // 0x234ca4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x234CA4u;
    {
        const bool branch_taken_0x234ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CA4u;
        // 0x234ca8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ca4) {
            ctx->pc = 0x234CD8u;
            goto label_234cd8;
        }
    }
    ctx->pc = 0x234CACu;
    // 0x234cac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x234cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x234cb0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x234CB0u;
    {
        const bool branch_taken_0x234cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234cb0) {
            ctx->pc = 0x234CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234CB0u;
            // 0x234cb4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234CD8u;
            goto label_234cd8;
        }
    }
    ctx->pc = 0x234CB8u;
    // 0x234cb8: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x234cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
    // 0x234cbc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x234CBCu;
    {
        const bool branch_taken_0x234cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234cbc) {
            ctx->pc = 0x234CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234CBCu;
            // 0x234cc0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234CD8u;
            goto label_234cd8;
        }
    }
    ctx->pc = 0x234CC4u;
    // 0x234cc4: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x234CC4u;
    SET_GPR_U32(ctx, 31, 0x234CCCu);
    ctx->pc = 0x234CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CC4u;
    // 0x234cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x234CC4u, 0x234CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CCCu;
label_234ccc:
    // 0x234ccc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x234CCCu;
    {
        const bool branch_taken_0x234ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234ccc) {
            ctx->pc = 0x234CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234CCCu;
            // 0x234cd0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D0Cu;
            goto label_234d0c;
        }
    }
    ctx->pc = 0x234CD4u;
    // 0x234cd4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x234cd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_234cd8:
    // 0x234cd8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x234cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x234cdc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234CDCu;
    {
        const bool branch_taken_0x234cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CDCu;
        // 0x234ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cdc) {
            ctx->pc = 0x234CE8u;
            goto label_234ce8;
        }
    }
    ctx->pc = 0x234CE4u;
    // 0x234ce4: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x234ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_234ce8:
    // 0x234ce8: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x234ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x234cec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x234CECu;
    {
        const bool branch_taken_0x234cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234cec) {
            ctx->pc = 0x234CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234CECu;
            // 0x234cf0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D0Cu;
            goto label_234d0c;
        }
    }
    ctx->pc = 0x234CF4u;
    // 0x234cf4: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x234cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x234cf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x234cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x234cfc: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x234cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x234d00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x234d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x234d04: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x234d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x234d08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x234d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_234d0c:
    // 0x234d0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x234d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234d10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x234d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234d14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x234d14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234d18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x234d18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d20: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x234d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x234d24: 0x3e00008  jr          $ra
    ctx->pc = 0x234D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D24u;
        // 0x234d28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234D2Cu;
    // 0x234d2c: 0x0  nop
    ctx->pc = 0x234d2cu;
    // NOP
    ctx->pc = 0x234d30u;
}
