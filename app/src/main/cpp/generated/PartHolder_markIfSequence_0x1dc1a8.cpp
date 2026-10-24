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

// Function: PartHolder_markIfSequence
// Address: 0x1dc1a8 - 0x1dc2b8
void PartHolder_markIfSequence_0x1dc1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartHolder_markIfSequence_0x1dc1a8");
#endif

    switch (ctx->pc) {
        case 0x1dc1ccu: goto label_1dc1cc;
        case 0x1dc230u: goto label_1dc230;
        case 0x1dc288u: goto label_1dc288;
        default: break;
    }

    ctx->pc = 0x1dc1a8u;

    // 0x1dc1a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc1ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dc1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dc1b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dc1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc1b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dc1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dc1bc: 0x27a60022  addiu       $a2, $sp, 0x22
    ctx->pc = 0x1dc1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dc1c0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x1dc1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dc1c4: 0xc076fc6  jal         func_1DBF18
    ctx->pc = 0x1DC1C4u;
    SET_GPR_U32(ctx, 31, 0x1DC1CCu);
    ctx->pc = 0x1DC1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC1C4u;
    // 0x1dc1c8: 0x27a80026  addiu       $t0, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBF18u, 0x1DC1C4u, 0x1DC1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC1CCu;
label_1dc1cc:
    // 0x1dc1cc: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x1dc1ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc1d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dc1d4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC1D4u;
    {
        const bool branch_taken_0x1dc1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1D4u;
        // 0x1dc1d8: 0x97a20022  lhu         $v0, 0x22($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1d4) {
            ctx->pc = 0x1DC1F4u;
            goto label_1dc1f4;
        }
    }
    ctx->pc = 0x1DC1DCu;
    // 0x1dc1dc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC1DCu;
    {
        const bool branch_taken_0x1dc1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1DCu;
        // 0x1dc1e0: 0x97a20024  lhu         $v0, 0x24($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1dc) {
            ctx->pc = 0x1DC1F4u;
            goto label_1dc1f4;
        }
    }
    ctx->pc = 0x1DC1E4u;
    // 0x1dc1e4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC1E4u;
    {
        const bool branch_taken_0x1dc1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1E4u;
        // 0x1dc1e8: 0x97a20026  lhu         $v0, 0x26($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 38)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1e4) {
            ctx->pc = 0x1DC1F4u;
            goto label_1dc1f4;
        }
    }
    ctx->pc = 0x1DC1ECu;
    // 0x1dc1ec: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DC1ECu;
    {
        const bool branch_taken_0x1dc1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1ECu;
        // 0x1dc1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1ec) {
            ctx->pc = 0x1DC2A8u;
            goto label_1dc2a8;
        }
    }
    ctx->pc = 0x1DC1F4u;
label_1dc1f4:
    // 0x1dc1f4: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1dc1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1dc1f8: 0x27a20046  addiu       $v0, $sp, 0x46
    ctx->pc = 0x1dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
    // 0x1dc1fc: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x1dc1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dc200: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dc200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dc204: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc20c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dc20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dc210: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1dc210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc214: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1dc214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dc218: 0x27a70032  addiu       $a3, $sp, 0x32
    ctx->pc = 0x1dc218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dc21c: 0x27a80042  addiu       $t0, $sp, 0x42
    ctx->pc = 0x1dc21cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x1dc220: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dc224: 0x27aa0044  addiu       $t2, $sp, 0x44
    ctx->pc = 0x1dc224u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1dc228: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DC228u;
    SET_GPR_U32(ctx, 31, 0x1DC230u);
    ctx->pc = 0x1DC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC228u;
    // 0x1dc22c: 0x27ab0036  addiu       $t3, $sp, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DC228u, 0x1DC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC230u;
label_1dc230:
    // 0x1dc230: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1dc230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc234: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC234u;
    {
        const bool branch_taken_0x1dc234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC234u;
        // 0x1dc238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc234) {
            ctx->pc = 0x1DC2A8u;
            goto label_1dc2a8;
        }
    }
    ctx->pc = 0x1DC23Cu;
    // 0x1dc23c: 0x97a30032  lhu         $v1, 0x32($sp)
    ctx->pc = 0x1dc23cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x1dc240: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dc244: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DC244u;
    {
        const bool branch_taken_0x1dc244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC244u;
        // 0x1dc248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc244) {
            ctx->pc = 0x1DC2A8u;
            goto label_1dc2a8;
        }
    }
    ctx->pc = 0x1DC24Cu;
    // 0x1dc24c: 0x97a30034  lhu         $v1, 0x34($sp)
    ctx->pc = 0x1dc24cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1dc250: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dc250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dc254: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DC254u;
    {
        const bool branch_taken_0x1dc254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC254u;
        // 0x1dc258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc254) {
            ctx->pc = 0x1DC2A8u;
            goto label_1dc2a8;
        }
    }
    ctx->pc = 0x1DC25Cu;
    // 0x1dc25c: 0x97a30036  lhu         $v1, 0x36($sp)
    ctx->pc = 0x1dc25cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 54)));
    // 0x1dc260: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1dc264: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DC264u;
    {
        const bool branch_taken_0x1dc264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC264u;
        // 0x1dc268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc264) {
            ctx->pc = 0x1DC2A8u;
            goto label_1dc2a8;
        }
    }
    ctx->pc = 0x1DC26Cu;
    // 0x1dc26c: 0x97a30038  lhu         $v1, 0x38($sp)
    ctx->pc = 0x1dc26cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dc270: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dc274: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC274u;
    {
        const bool branch_taken_0x1dc274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC274u;
        // 0x1dc278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc274) {
            ctx->pc = 0x1DC2A8u;
            goto label_1dc2a8;
        }
    }
    ctx->pc = 0x1DC27Cu;
    // 0x1dc27c: 0x26043004  addiu       $a0, $s0, 0x3004
    ctx->pc = 0x1dc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1dc280: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dc280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc284: 0x0  nop
    ctx->pc = 0x1dc284u;
    // NOP
label_1dc288:
    // 0x1dc288: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc28c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dc28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dc290: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dc290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dc294: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dc294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dc298: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dc298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dc29c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC29Cu;
    {
        const bool branch_taken_0x1dc29c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC29Cu;
        // 0x1dc2a0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc29c) {
            ctx->pc = 0x1DC288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc288;
        }
    }
    ctx->pc = 0x1DC2A4u;
    // 0x1dc2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc2a8:
    // 0x1dc2a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dc2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc2ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dc2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2B0u;
        // 0x1dc2b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC2B8u;
}
