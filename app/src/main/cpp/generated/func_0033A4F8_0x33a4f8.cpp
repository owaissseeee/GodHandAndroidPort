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

// Function: func_0033A4F8
// Address: 0x33a4f8 - 0x33a5d0
void func_0033A4F8_0x33a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A4F8_0x33a4f8");
#endif

    switch (ctx->pc) {
        case 0x33a560u: goto label_33a560;
        case 0x33a5a8u: goto label_33a5a8;
        default: break;
    }

    ctx->pc = 0x33a4f8u;

    // 0x33a4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a4fc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A4FCu;
    {
        const bool branch_taken_0x33a4fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4FCu;
        // 0x33a500: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4fc) {
            ctx->pc = 0x33A520u;
            goto label_33a520;
        }
    }
    ctx->pc = 0x33A504u;
    // 0x33a504: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a508: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a510: 0x24845c68  addiu       $a0, $a0, 0x5C68
    ctx->pc = 0x33a510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23656));
    // 0x33a514: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8
    ctx->pc = 0x33a514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
    // 0x33a518: 0x80ce812  j           func_33A048
    ctx->pc = 0x33A518u;
    ctx->pc = 0x33A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A518u;
    // 0x33a51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A518u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A520u;
label_33a520:
    // 0x33a520: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x33a520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a524: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A524u;
    {
        const bool branch_taken_0x33a524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a524) {
            ctx->pc = 0x33A528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A524u;
            // 0x33a528: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A548u;
            goto label_33a548;
        }
    }
    ctx->pc = 0x33A52Cu;
    // 0x33a52c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a530: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a538: 0x24845c78  addiu       $a0, $a0, 0x5C78
    ctx->pc = 0x33a538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23672));
    // 0x33a53c: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33a53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
    // 0x33a540: 0x80ce812  j           func_33A048
    ctx->pc = 0x33A540u;
    ctx->pc = 0x33A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A540u;
    // 0x33a544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A540u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A548u;
label_33a548:
    // 0x33a548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33a548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a54c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x33a54cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33a550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33a554: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33A554u;
    {
        const bool branch_taken_0x33a554 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x33A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A554u;
        // 0x33a558: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a554) {
            ctx->pc = 0x33A588u;
            goto label_33a588;
        }
    }
    ctx->pc = 0x33A55Cu;
    // 0x33a55c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x33a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33a560:
    // 0x33a560: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x33a560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x33a564: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33a568: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x33a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33a56c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x33a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x33a570: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x33a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33a574: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x33a574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x33a578: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33a57c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x33a57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33a580: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x33A580u;
    {
        const bool branch_taken_0x33a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A580u;
        // 0x33a584: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a580) {
            ctx->pc = 0x33A560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a560;
        }
    }
    ctx->pc = 0x33A588u;
label_33a588:
    // 0x33a588: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x33a588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x33a58c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33a58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a590: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x33a594: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x33a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x33a598: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x33a598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x33a59c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x33a5a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x33a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x33a5a4: 0x0  nop
    ctx->pc = 0x33a5a4u;
    // NOP
label_33a5a8:
    // 0x33a5a8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33a5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33a5ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x33a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x33a5b0: 0x0  nop
    ctx->pc = 0x33a5b0u;
    // NOP
    // 0x33a5b4: 0x0  nop
    ctx->pc = 0x33a5b4u;
    // NOP
    // 0x33a5b8: 0x0  nop
    ctx->pc = 0x33a5b8u;
    // NOP
    // 0x33a5bc: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A5BCu;
    {
        const bool branch_taken_0x33a5bc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x33A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5BCu;
        // 0x33a5c0: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5bc) {
            ctx->pc = 0x33A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a5a8;
        }
    }
    ctx->pc = 0x33A5C4u;
    // 0x33a5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x33A5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5C8u;
        // 0x33a5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A5D0u;
}
