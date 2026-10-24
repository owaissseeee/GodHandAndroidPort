#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: saveMenu__7cMcSave
// Address: 0x7c51a0 - 0x7c55b8
void saveMenu__7cMcSave_0x7c51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("saveMenu__7cMcSave_0x7c51a0");
#endif

    switch (ctx->pc) {
        case 0x7c51f4u: goto label_7c51f4;
        case 0x7c5208u: goto label_7c5208;
        case 0x7c5224u: goto label_7c5224;
        case 0x7c5234u: goto label_7c5234;
        case 0x7c5254u: goto label_7c5254;
        case 0x7c5270u: goto label_7c5270;
        case 0x7c5298u: goto label_7c5298;
        case 0x7c52ccu: goto label_7c52cc;
        case 0x7c5304u: goto label_7c5304;
        case 0x7c5358u: goto label_7c5358;
        case 0x7c5438u: goto label_7c5438;
        case 0x7c5474u: goto label_7c5474;
        case 0x7c54c0u: goto label_7c54c0;
        case 0x7c552cu: goto label_7c552c;
        case 0x7c5574u: goto label_7c5574;
        case 0x7c5584u: goto label_7c5584;
        case 0x7c5594u: goto label_7c5594;
        default: break;
    }

    ctx->pc = 0x7c51a0u;

    // 0x7c51a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c51a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7c51a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7c51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7c51a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7c51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7c51ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c51acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c51b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7c51b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7c51b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7c51b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7c51b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7c51b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7c51bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c51c0: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x7c51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x7c51c4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c51c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c51c8: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x7C51C8u;
    {
        const bool branch_taken_0x7c51c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C51C8u;
        // 0x7c51cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c51c8) {
            ctx->pc = 0x7C53FCu;
            goto label_7c53fc;
        }
    }
    ctx->pc = 0x7C51D0u;
    // 0x7c51d0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c51d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c51d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c51d8: 0x24420c40  addiu       $v0, $v0, 0xC40
    ctx->pc = 0x7c51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3136));
    // 0x7c51dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c51e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c51e4: 0x800008  jr          $a0
    ctx->pc = 0x7C51E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C51E4u;
        // 0x7c51e8: 0x3c14007d  lui         $s4, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C51ECu: goto label_7c51ec;
            case 0x7C5210u: goto label_7c5210;
            case 0x7C5248u: goto label_7c5248;
            case 0x7C5288u: goto label_7c5288;
            case 0x7C52B4u: goto label_7c52b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C51E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C51ECu;
label_7c51ec:
    // 0x7c51ec: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C51ECu;
    SET_GPR_U32(ctx, 31, 0x7C51F4u);
    ctx->pc = 0x7C51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C51ECu;
    // 0x7c51f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C51ECu, 0x7C51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C51F4u;
label_7c51f4:
    // 0x7c51f4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x7c51f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x7c51f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c51f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c51fc: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x7c51fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x7c5200: 0xc1f1fec  jal         func_7C7FB0
    ctx->pc = 0x7C5200u;
    SET_GPR_U32(ctx, 31, 0x7C5208u);
    ctx->pc = 0x7C5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5200u;
    // 0x7c5204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7FB0u, 0x7C5200u, 0x7C5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5208u;
label_7c5208:
    // 0x7c5208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c520c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x7c520cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_7c5210:
    // 0x7c5210: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c5210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c5214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c5214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5218: 0x24441740  addiu       $a0, $v0, 0x1740
    ctx->pc = 0x7c5218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c521c: 0xc1f0e34  jal         func_7C38D0
    ctx->pc = 0x7C521Cu;
    SET_GPR_U32(ctx, 31, 0x7C5224u);
    ctx->pc = 0x7C5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C521Cu;
    // 0x7c5220: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C38D0u, 0x7C521Cu, 0x7C5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5224u;
label_7c5224:
    // 0x7c5224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5228: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c5228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c522c: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C522Cu;
    SET_GPR_U32(ctx, 31, 0x7C5234u);
    ctx->pc = 0x7C5230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C522Cu;
    // 0x7c5230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C522Cu, 0x7C5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5234u;
label_7c5234:
    // 0x7c5234: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C5234u;
    {
        const bool branch_taken_0x7c5234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5234u;
        // 0x7c5238: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5234) {
            ctx->pc = 0x7C5244u;
            goto label_7c5244;
        }
    }
    ctx->pc = 0x7C523Cu;
    // 0x7c523c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x7C523Cu;
    {
        const bool branch_taken_0x7c523c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C523Cu;
        // 0x7c5240: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c523c) {
            ctx->pc = 0x7C53D4u;
            goto label_7c53d4;
        }
    }
    ctx->pc = 0x7C5244u;
label_7c5244:
    // 0x7c5244: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x7c5244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_7c5248:
    // 0x7c5248: 0x26841740  addiu       $a0, $s4, 0x1740
    ctx->pc = 0x7c5248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5952));
    // 0x7c524c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C524Cu;
    SET_GPR_U32(ctx, 31, 0x7C5254u);
    ctx->pc = 0x7C5250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C524Cu;
    // 0x7c5250: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C524Cu, 0x7C5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5254u;
label_7c5254:
    // 0x7c5254: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c5254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c525c: 0x16220068  bne         $s1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x7C525Cu;
    {
        const bool branch_taken_0x7c525c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C525Cu;
        // 0x7c5260: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c525c) {
            ctx->pc = 0x7C5400u;
            goto label_7c5400;
        }
    }
    ctx->pc = 0x7C5264u;
    // 0x7c5264: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5268: 0xc1f1b8e  jal         func_7C6E38
    ctx->pc = 0x7C5268u;
    SET_GPR_U32(ctx, 31, 0x7C5270u);
    ctx->pc = 0x7C526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5268u;
    // 0x7c526c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E38u, 0x7C5268u, 0x7C5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5270u;
label_7c5270:
    // 0x7c5270: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C5270u;
    {
        const bool branch_taken_0x7c5270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x7c5270) {
            ctx->pc = 0x7C5274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C5270u;
            // 0x7c5274: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C5280u;
            goto label_7c5280;
        }
    }
    ctx->pc = 0x7C5278u;
    // 0x7c5278: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x7C5278u;
    {
        const bool branch_taken_0x7c5278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5278u;
        // 0x7c527c: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5278) {
            ctx->pc = 0x7C53FCu;
            goto label_7c53fc;
        }
    }
    ctx->pc = 0x7C5280u;
label_7c5280:
    // 0x7c5280: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x7C5280u;
    {
        const bool branch_taken_0x7c5280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5280u;
        // 0x7c5284: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5280) {
            ctx->pc = 0x7C5594u;
            goto label_7c5594;
        }
    }
    ctx->pc = 0x7C5288u;
label_7c5288:
    // 0x7c5288: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c528c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c528cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5290: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5290u;
    SET_GPR_U32(ctx, 31, 0x7C5298u);
    ctx->pc = 0x7C5294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5290u;
    // 0x7c5294: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5290u, 0x7C5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5298u;
label_7c5298:
    // 0x7c5298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c5298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c529c: 0x544300be  bnel        $v0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x7C529Cu;
    {
        const bool branch_taken_0x7c529c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7c529c) {
            ctx->pc = 0x7C52A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C529Cu;
            // 0x7c52a0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C5598u;
            goto label_7c5598;
        }
    }
    ctx->pc = 0x7C52A4u;
    // 0x7c52a4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c52a8: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x7c52a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x7c52ac: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x7C52ACu;
    {
        const bool branch_taken_0x7c52ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C52ACu;
        // 0x7c52b0: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c52ac) {
            ctx->pc = 0x7C5594u;
            goto label_7c5594;
        }
    }
    ctx->pc = 0x7C52B4u;
label_7c52b4:
    // 0x7c52b4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c52b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c52b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c52bc: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c52bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c52c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7c52c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c52c4: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C52C4u;
    SET_GPR_U32(ctx, 31, 0x7C52CCu);
    ctx->pc = 0x7C52C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C52C4u;
    // 0x7c52c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C52C4u, 0x7C52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C52CCu;
label_7c52cc:
    // 0x7c52cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x7c52ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c52d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c52d4: 0x566200b0  bnel        $s3, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x7C52D4u;
    {
        const bool branch_taken_0x7c52d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c52d4) {
            ctx->pc = 0x7C52D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C52D4u;
            // 0x7c52d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C5598u;
            goto label_7c5598;
        }
    }
    ctx->pc = 0x7C52DCu;
    // 0x7c52dc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x7c52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x7c52e0: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x7c52e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c52e4: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x7c52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c52e8: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C52E8u;
    {
        const bool branch_taken_0x7c52e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c52e8) {
            ctx->pc = 0x7C52ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C52E8u;
            // 0x7c52ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C52F0u;
            goto label_7c52f0;
        }
    }
    ctx->pc = 0x7C52F0u;
label_7c52f0:
    // 0x7c52f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7c52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7c52f4: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x7c52f4u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c52f8: 0x2810  mfhi        $a1
    ctx->pc = 0x7c52f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c52fc: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C52FCu;
    SET_GPR_U32(ctx, 31, 0x7C5304u);
    ctx->pc = 0x7C5300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C52FCu;
    // 0x7c5300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C52FCu, 0x7C5304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5304u;
label_7c5304:
    // 0x7c5304: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x7c5304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x7c5308: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x7c5308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c530c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C530Cu;
    {
        const bool branch_taken_0x7c530c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c530c) {
            ctx->pc = 0x7C5310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C530Cu;
            // 0x7c5310: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C531Cu;
            goto label_7c531c;
        }
    }
    ctx->pc = 0x7C5314u;
    // 0x7c5314: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x7C5314u;
    {
        const bool branch_taken_0x7c5314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5314u;
        // 0x7c5318: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5314) {
            ctx->pc = 0x7C53D4u;
            goto label_7c53d4;
        }
    }
    ctx->pc = 0x7C531Cu;
label_7c531c:
    // 0x7c531c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x7c531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c5320: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x7c5320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x7c5324: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C5324u;
    {
        const bool branch_taken_0x7c5324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c5324) {
            ctx->pc = 0x7C5328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C5324u;
            // 0x7c5328: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C532Cu;
            goto label_7c532c;
        }
    }
    ctx->pc = 0x7C532Cu;
label_7c532c:
    // 0x7c532c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x7c532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c5330: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x7c5330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x7c5334: 0x71001a  div         $zero, $v1, $s1
    ctx->pc = 0x7c5334u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c5338: 0x1010  mfhi        $v0
    ctx->pc = 0x7c5338u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x7c533c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x7c533cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c5340: 0x2810  mfhi        $a1
    ctx->pc = 0x7c5340u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c5344: 0x4a1000e  bgez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C5344u;
    {
        const bool branch_taken_0x7c5344 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7C5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5344u;
        // 0x7c5348: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5344) {
            ctx->pc = 0x7C5380u;
            goto label_7c5380;
        }
    }
    ctx->pc = 0x7C534Cu;
    // 0x7c534c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5350: 0x26030088  addiu       $v1, $s0, 0x88
    ctx->pc = 0x7c5350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x7c5354: 0x0  nop
    ctx->pc = 0x7c5354u;
    // NOP
label_7c5358:
    // 0x7c5358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c535c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C535Cu;
    {
        const bool branch_taken_0x7c535c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C535Cu;
        // 0x7c5360: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c535c) {
            ctx->pc = 0x7C5378u;
            goto label_7c5378;
        }
    }
    ctx->pc = 0x7C5364u;
    // 0x7c5364: 0x0  nop
    ctx->pc = 0x7c5364u;
    // NOP
    // 0x7c5368: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C5368u;
    {
        const bool branch_taken_0x7c5368 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5368u;
        // 0x7c536c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5368) {
            ctx->pc = 0x7C5358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c5358;
        }
    }
    ctx->pc = 0x7C5370u;
    // 0x7c5370: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C5370u;
    {
        const bool branch_taken_0x7c5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5370u;
        // 0x7c5374: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5370) {
            ctx->pc = 0x7C53ACu;
            goto label_7c53ac;
        }
    }
    ctx->pc = 0x7C5378u;
label_7c5378:
    // 0x7c5378: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C5378u;
    {
        const bool branch_taken_0x7c5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5378u;
        // 0x7c537c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5378) {
            ctx->pc = 0x7C53ACu;
            goto label_7c53ac;
        }
    }
    ctx->pc = 0x7C5380u;
label_7c5380:
    // 0x7c5380: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x7c5380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x7c5384: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x7c5384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x7c5388: 0xb32004  sllv        $a0, $s3, $a1
    ctx->pc = 0x7c5388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
    // 0x7c538c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x7c538cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x7c5390: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c5390u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c5394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c5394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c5398: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x7c5398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x7c539c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x7c539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x7c53a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c53a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c53a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c53a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7c53a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c53a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7c53ac:
    // 0x7c53ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c53acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c53b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C53B0u;
    {
        const bool branch_taken_0x7c53b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C53B0u;
        // 0x7c53b4: 0x26831740  addiu       $v1, $s4, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c53b0) {
            ctx->pc = 0x7C53C0u;
            goto label_7c53c0;
        }
    }
    ctx->pc = 0x7C53B8u;
    // 0x7c53b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C53B8u;
    {
        const bool branch_taken_0x7c53b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C53B8u;
        // 0x7c53bc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c53b8) {
            ctx->pc = 0x7C53D4u;
            goto label_7c53d4;
        }
    }
    ctx->pc = 0x7C53C0u;
label_7c53c0:
    // 0x7c53c0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x7c53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x7c53c4: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x7c53c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x7c53c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C53C8u;
    {
        const bool branch_taken_0x7c53c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C53C8u;
        // 0x7c53cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c53c8) {
            ctx->pc = 0x7C53E4u;
            goto label_7c53e4;
        }
    }
    ctx->pc = 0x7C53D0u;
    // 0x7c53d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_7c53d4:
    // 0x7c53d4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c53d8: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x7c53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x7c53dc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x7C53DCu;
    {
        const bool branch_taken_0x7c53dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C53DCu;
        // 0x7c53e0: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c53dc) {
            ctx->pc = 0x7C5594u;
            goto label_7c5594;
        }
    }
    ctx->pc = 0x7C53E4u;
label_7c53e4:
    // 0x7c53e4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x7c53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c53e8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x7c53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x7c53ec: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x7c53ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x7c53f0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c53f4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x7C53F4u;
    {
        const bool branch_taken_0x7c53f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C53F4u;
        // 0x7c53f8: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c53f4) {
            ctx->pc = 0x7C5594u;
            goto label_7c5594;
        }
    }
    ctx->pc = 0x7C53FCu;
label_7c53fc:
    // 0x7c53fc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7c53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7c5400:
    // 0x7c5400: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x7c5400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x7c5404: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x7c5404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x7c5408: 0xdc6401a0  ld          $a0, 0x1A0($v1)
    ctx->pc = 0x7c5408u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x7c540c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7c540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7c5410: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C5410u;
    {
        const bool branch_taken_0x7c5410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5410u;
        // 0x7c5414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5410) {
            ctx->pc = 0x7C5444u;
            goto label_7c5444;
        }
    }
    ctx->pc = 0x7C5418u;
    // 0x7c5418: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7c5418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7c541c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c541cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5420: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c5420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c5424: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c5424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5428: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c5428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c542c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c542cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5430: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C5430u;
    SET_GPR_U32(ctx, 31, 0x7C5438u);
    ctx->pc = 0x7C5434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5430u;
    // 0x7c5434: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C5430u, 0x7C5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5438u;
label_7c5438:
    // 0x7c5438: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7c5438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c543c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x7C543Cu;
    {
        const bool branch_taken_0x7c543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C543Cu;
        // 0x7c5440: 0xae0300f4  sw          $v1, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c543c) {
            ctx->pc = 0x7C5564u;
            goto label_7c5564;
        }
    }
    ctx->pc = 0x7C5444u;
label_7c5444:
    // 0x7c5444: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7c5444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7c5448: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7c5448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7c544c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C544Cu;
    {
        const bool branch_taken_0x7c544c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C544Cu;
        // 0x7c5450: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c544c) {
            ctx->pc = 0x7C5490u;
            goto label_7c5490;
        }
    }
    ctx->pc = 0x7C5454u;
    // 0x7c5454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c5454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5458: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c5458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c545c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c5460: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c5460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5464: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c5464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5468: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c5468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c546c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C546Cu;
    SET_GPR_U32(ctx, 31, 0x7C5474u);
    ctx->pc = 0x7C5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C546Cu;
    // 0x7c5470: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C546Cu, 0x7C5474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5474u;
label_7c5474:
    // 0x7c5474: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5478: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c547c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x7c547cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x7c5480: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x7c5480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x7c5484: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x7c5484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x7c5488: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x7C5488u;
    {
        const bool branch_taken_0x7c5488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5488u;
        // 0x7c548c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5488) {
            ctx->pc = 0x7C5564u;
            goto label_7c5564;
        }
    }
    ctx->pc = 0x7C5490u;
label_7c5490:
    // 0x7c5490: 0xdc6301b0  ld          $v1, 0x1B0($v1)
    ctx->pc = 0x7c5490u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x7c5494: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x7c5494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x7c5498: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c5498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c549c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C549Cu;
    {
        const bool branch_taken_0x7c549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C549Cu;
        // 0x7c54a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c549c) {
            ctx->pc = 0x7C54FCu;
            goto label_7c54fc;
        }
    }
    ctx->pc = 0x7C54A4u;
    // 0x7c54a4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c54a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c54a8: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c54a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c54ac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c54acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c54b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c54b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c54b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c54b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c54b8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C54B8u;
    SET_GPR_U32(ctx, 31, 0x7C54C0u);
    ctx->pc = 0x7C54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C54B8u;
    // 0x7c54bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C54B8u, 0x7C54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C54C0u;
label_7c54c0:
    // 0x7c54c0: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x7c54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c54c4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C54C4u;
    {
        const bool branch_taken_0x7c54c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7C54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C54C4u;
        // 0x7c54c8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c54c4) {
            ctx->pc = 0x7C54D4u;
            goto label_7c54d4;
        }
    }
    ctx->pc = 0x7C54CCu;
    // 0x7c54cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x7C54CCu;
    {
        const bool branch_taken_0x7c54cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C54CCu;
        // 0x7c54d0: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c54cc) {
            ctx->pc = 0x7C5564u;
            goto label_7c5564;
        }
    }
    ctx->pc = 0x7C54D4u;
label_7c54d4:
    // 0x7c54d4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x7c54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x7c54d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7c54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7c54dc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C54DCu;
    {
        const bool branch_taken_0x7c54dc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7C54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C54DCu;
        // 0x7c54e0: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c54dc) {
            ctx->pc = 0x7C54F4u;
            goto label_7c54f4;
        }
    }
    ctx->pc = 0x7C54E4u;
    // 0x7c54e4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x7c54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7c54e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c54ec: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x7c54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x7c54f0: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x7c54f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_7c54f4:
    // 0x7c54f4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x7C54F4u;
    {
        const bool branch_taken_0x7c54f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C54F4u;
        // 0x7c54f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c54f4) {
            ctx->pc = 0x7C5564u;
            goto label_7c5564;
        }
    }
    ctx->pc = 0x7C54FCu;
label_7c54fc:
    // 0x7c54fc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x7c54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x7c5500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c5500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c5504: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C5504u;
    {
        const bool branch_taken_0x7c5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5504u;
        // 0x7c5508: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5504) {
            ctx->pc = 0x7C5564u;
            goto label_7c5564;
        }
    }
    ctx->pc = 0x7C550Cu;
    // 0x7c550c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5510: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c5510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5514: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c5514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c5518: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c5518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c551c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c551cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5520: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c5520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5524: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C5524u;
    SET_GPR_U32(ctx, 31, 0x7C552Cu);
    ctx->pc = 0x7C5528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5524u;
    // 0x7c5528: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C5524u, 0x7C552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C552Cu;
label_7c552c:
    // 0x7c552c: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x7c552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c5530: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x7c5530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7c5534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C5534u;
    {
        const bool branch_taken_0x7c5534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5534u;
        // 0x7c5538: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5534) {
            ctx->pc = 0x7C5544u;
            goto label_7c5544;
        }
    }
    ctx->pc = 0x7C553Cu;
    // 0x7c553c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C553Cu;
    {
        const bool branch_taken_0x7c553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C553Cu;
        // 0x7c5540: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c553c) {
            ctx->pc = 0x7C5564u;
            goto label_7c5564;
        }
    }
    ctx->pc = 0x7C5544u;
label_7c5544:
    // 0x7c5544: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x7c5544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x7c5548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c5548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c554c: 0x28430012  slti        $v1, $v0, 0x12
    ctx->pc = 0x7c554cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x7c5550: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C5550u;
    {
        const bool branch_taken_0x7c5550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5550u;
        // 0x7c5554: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5550) {
            ctx->pc = 0x7C5560u;
            goto label_7c5560;
        }
    }
    ctx->pc = 0x7C5558u;
    // 0x7c5558: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x7c5558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x7c555c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x7c555cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_7c5560:
    // 0x7c5560: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x7c5560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7c5564:
    // 0x7c5564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c5564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5568: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c5568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c556c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C556Cu;
    SET_GPR_U32(ctx, 31, 0x7C5574u);
    ctx->pc = 0x7C5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C556Cu;
    // 0x7c5570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C556Cu, 0x7C5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5574u;
label_7c5574:
    // 0x7c5574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c5574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5578: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c5578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c557c: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C557Cu;
    SET_GPR_U32(ctx, 31, 0x7C5584u);
    ctx->pc = 0x7C5580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C557Cu;
    // 0x7c5580: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C557Cu, 0x7C5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5584u;
label_7c5584:
    // 0x7c5584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c5584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5588: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7c5588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c558c: 0xc1f1fec  jal         func_7C7FB0
    ctx->pc = 0x7C558Cu;
    SET_GPR_U32(ctx, 31, 0x7C5594u);
    ctx->pc = 0x7C5590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C558Cu;
    // 0x7c5590: 0x8c8500d4  lw          $a1, 0xD4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7FB0u, 0x7C558Cu, 0x7C5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5594u;
label_7c5594:
    // 0x7c5594: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7c5594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7c5598:
    // 0x7c5598: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7c5598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c559c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7c559cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c55a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7c55a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c55a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7c55a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c55a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c55a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c55ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7C55ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C55ACu;
        // 0x7c55b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C55ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C55B4u;
    // 0x7c55b4: 0x0  nop
    ctx->pc = 0x7c55b4u;
    // NOP
    ctx->pc = 0x7c55b8u;
}
} // namespace gh_mcport
