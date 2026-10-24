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

// Function: cIDBase_linkParents
// Address: 0x2aa480 - 0x2aa538
void cIDBase_linkParents_0x2aa480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_linkParents_0x2aa480");
#endif

    switch (ctx->pc) {
        case 0x2aa498u: goto label_2aa498;
        case 0x2aa4e0u: goto label_2aa4e0;
        default: break;
    }

    ctx->pc = 0x2aa480u;

    // 0x2aa480: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2aa480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2aa484: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2AA484u;
    {
        const bool branch_taken_0x2aa484 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA484u;
        // 0x2aa488: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa484) {
            ctx->pc = 0x2AA52Cu;
            goto label_2aa52c;
        }
    }
    ctx->pc = 0x2AA48Cu;
    // 0x2aa48c: 0x240d00ac  addiu       $t5, $zero, 0xAC
    ctx->pc = 0x2aa48cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2aa490: 0x240c00ac  addiu       $t4, $zero, 0xAC
    ctx->pc = 0x2aa490u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2aa494: 0x10d1818  mult        $v1, $t0, $t5
    ctx->pc = 0x2aa494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2aa498:
    // 0x2aa498: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aa498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aa49c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aa49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aa4a0: 0x80650029  lb          $a1, 0x29($v1)
    ctx->pc = 0x2aa4a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x2aa4a4: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA4A4u;
    {
        const bool branch_taken_0x2aa4a4 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2aa4a4) {
            ctx->pc = 0x2AA4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA4A4u;
            // 0x2aa4a8: 0x90620028  lbu         $v0, 0x28($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA4B8u;
            goto label_2aa4b8;
        }
    }
    ctx->pc = 0x2AA4ACu;
    // 0x2aa4ac: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2aa4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2aa4b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2AA4B0u;
    {
        const bool branch_taken_0x2aa4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4B0u;
        // 0x2aa4b4: 0x250b0001  addiu       $t3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4b0) {
            ctx->pc = 0x2AA518u;
            goto label_2aa518;
        }
    }
    ctx->pc = 0x2AA4B8u;
label_2aa4b8:
    // 0x2aa4b8: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA4B8u;
    {
        const bool branch_taken_0x2aa4b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aa4b8) {
            ctx->pc = 0x2AA4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA4B8u;
            // 0x2aa4bc: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA4C8u;
            goto label_2aa4c8;
        }
    }
    ctx->pc = 0x2AA4C0u;
    // 0x2aa4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4C0u;
        // 0x2aa4c4: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA4C8u;
label_2aa4c8:
    // 0x2aa4c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa4c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4cc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA4CCu;
    {
        const bool branch_taken_0x2aa4cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4CCu;
        // 0x2aa4d0: 0x250b0001  addiu       $t3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4cc) {
            ctx->pc = 0x2AA518u;
            goto label_2aa518;
        }
    }
    ctx->pc = 0x2AA4D4u;
    // 0x2aa4d4: 0x10c5018  mult        $t2, $t0, $t4
    ctx->pc = 0x2aa4d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2aa4d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2aa4d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4dc: 0x0  nop
    ctx->pc = 0x2aa4dcu;
    // NOP
label_2aa4e0:
    // 0x2aa4e0: 0x51070009  beql        $t0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA4E0u;
    {
        const bool branch_taken_0x2aa4e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x2aa4e0) {
            ctx->pc = 0x2AA4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA4E0u;
            // 0x2aa4e4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA508u;
            goto label_2aa508;
        }
    }
    ctx->pc = 0x2AA4E8u;
    // 0x2aa4e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aa4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aa4ec: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x2aa4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2aa4f0: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2aa4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2aa4f4: 0x80a30029  lb          $v1, 0x29($a1)
    ctx->pc = 0x2aa4f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
    // 0x2aa4f8: 0x90c20028  lbu         $v0, 0x28($a2)
    ctx->pc = 0x2aa4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2aa4fc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AA4FCu;
    {
        const bool branch_taken_0x2aa4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aa4fc) {
            ctx->pc = 0x2AA500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA4FCu;
            // 0x2aa500: 0xaca60020  sw          $a2, 0x20($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA504u;
            goto label_2aa504;
        }
    }
    ctx->pc = 0x2AA504u;
label_2aa504:
    // 0x2aa504: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2aa504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2aa508:
    // 0x2aa508: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2aa508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2aa50c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2aa50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aa510: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AA510u;
    {
        const bool branch_taken_0x2aa510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA510u;
        // 0x2aa514: 0x252900ac  addiu       $t1, $t1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa510) {
            ctx->pc = 0x2AA4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa4e0;
        }
    }
    ctx->pc = 0x2AA518u;
label_2aa518:
    // 0x2aa518: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2aa518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2aa51c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x2aa51cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa520: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2aa520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aa524: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2AA524u;
    {
        const bool branch_taken_0x2aa524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA524u;
        // 0x2aa528: 0x10d1818  mult        $v1, $t0, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa524) {
            ctx->pc = 0x2AA498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa498;
        }
    }
    ctx->pc = 0x2AA52Cu;
label_2aa52c:
    // 0x2aa52c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA534u;
    // 0x2aa534: 0x0  nop
    ctx->pc = 0x2aa534u;
    // NOP
    ctx->pc = 0x2aa538u;
}
