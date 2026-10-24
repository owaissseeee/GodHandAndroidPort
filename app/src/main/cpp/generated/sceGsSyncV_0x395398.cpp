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

// Function: sceGsSyncV
// Address: 0x395398 - 0x395430
void sceGsSyncV_0x395398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSyncV_0x395398");
#endif

    switch (ctx->pc) {
        case 0x3953acu: goto label_3953ac;
        case 0x3953c4u: goto label_3953c4;
        case 0x395400u: goto label_395400;
        default: break;
    }

    ctx->pc = 0x395398u;

    // 0x395398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39539c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3953a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3953a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3953a4: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x3953A4u;
    SET_GPR_U32(ctx, 31, 0x3953ACu);
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x3953A4u, 0x3953ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3953ACu;
label_3953ac:
    // 0x3953ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3953acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3953b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3953b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3953b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3953B4u;
    {
        const bool branch_taken_0x3953b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3953b4) {
            ctx->pc = 0x3953F8u;
            goto label_3953f8;
        }
    }
    ctx->pc = 0x3953BCu;
    // 0x3953bc: 0xc0ec04c  jal         func_3B0130
    ctx->pc = 0x3953BCu;
    SET_GPR_U32(ctx, 31, 0x3953C4u);
    ctx->pc = 0x3B0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0130u, 0x3953BCu, 0x3953C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3953C4u;
label_3953c4:
    // 0x3953c4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x3953c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3953c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3953c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3953cc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3953CCu;
    {
        const bool branch_taken_0x3953cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3953D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953CCu;
        // 0x3953d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3953cc) {
            ctx->pc = 0x395420u;
            goto label_395420;
        }
    }
    ctx->pc = 0x3953D4u;
    // 0x3953d4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x3953d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x3953d8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3953d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3953dc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3953dcu;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x3953e0: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x3953e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x3953e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3953e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3953e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3953e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3953ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3953ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3953f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3953F0u;
    {
        const bool branch_taken_0x3953f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3953F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953F0u;
        // 0x3953f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3953f0) {
            ctx->pc = 0x395424u;
            goto label_395424;
        }
    }
    ctx->pc = 0x3953F8u;
label_3953f8:
    // 0x3953f8: 0xc0ec070  jal         func_3B01C0
    ctx->pc = 0x3953F8u;
    SET_GPR_U32(ctx, 31, 0x395400u);
    ctx->pc = 0x3B01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B01C0u, 0x3953F8u, 0x395400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395400u;
label_395400:
    // 0x395400: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x395400u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x395404: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x395404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x395408: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x395408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39540c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395410: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395410u;
    {
        const bool branch_taken_0x395410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x395414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395410u;
        // 0x395414: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395410) {
            ctx->pc = 0x395420u;
            goto label_395420;
        }
    }
    ctx->pc = 0x395418u;
    // 0x395418: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x395418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39541c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39541cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_395420:
    // 0x395420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395424:
    // 0x395424: 0x3e00008  jr          $ra
    ctx->pc = 0x395424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395424u;
        // 0x395428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39542Cu;
    // 0x39542c: 0x0  nop
    ctx->pc = 0x39542cu;
    // NOP
    ctx->pc = 0x395430u;
}
