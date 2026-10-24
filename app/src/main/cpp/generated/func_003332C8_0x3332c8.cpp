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

// Function: func_003332C8
// Address: 0x3332c8 - 0x333390
void func_003332C8_0x3332c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003332C8_0x3332c8");
#endif

    switch (ctx->pc) {
        case 0x333340u: goto label_333340;
        case 0x333350u: goto label_333350;
        case 0x333360u: goto label_333360;
        case 0x333370u: goto label_333370;
        default: break;
    }

    ctx->pc = 0x3332c8u;

    // 0x3332c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3332c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3332cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3332ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3332d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3332d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3332d4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3332D4u;
    {
        const bool branch_taken_0x3332d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3332D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332D4u;
        // 0x3332d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332d4) {
            ctx->pc = 0x333380u;
            goto label_333380;
        }
    }
    ctx->pc = 0x3332DCu;
    // 0x3332dc: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x3332dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x3332e0: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3332E0u;
    {
        const bool branch_taken_0x3332e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3332E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332E0u;
        // 0x3332e4: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332e0) {
            ctx->pc = 0x333368u;
            goto label_333368;
        }
    }
    ctx->pc = 0x3332E8u;
    // 0x3332e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3332E8u;
    {
        const bool branch_taken_0x3332e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3332ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332E8u;
        // 0x3332ec: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332e8) {
            ctx->pc = 0x333318u;
            goto label_333318;
        }
    }
    ctx->pc = 0x3332F0u;
    // 0x3332f0: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x3332f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x3332f4: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3332F4u;
    {
        const bool branch_taken_0x3332f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3332F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332F4u;
        // 0x3332f8: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332f4) {
            ctx->pc = 0x333348u;
            goto label_333348;
        }
    }
    ctx->pc = 0x3332FCu;
    // 0x3332fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3332FCu;
    {
        const bool branch_taken_0x3332fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332FCu;
        // 0x333300: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332fc) {
            ctx->pc = 0x333358u;
            goto label_333358;
        }
    }
    ctx->pc = 0x333304u;
    // 0x333304: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x333304u;
    {
        const bool branch_taken_0x333304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x333308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333304u;
        // 0x333308: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333304) {
            ctx->pc = 0x333338u;
            goto label_333338;
        }
    }
    ctx->pc = 0x33330Cu;
    // 0x33330c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x33330Cu;
    {
        const bool branch_taken_0x33330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33330Cu;
        // 0x333310: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33330c) {
            ctx->pc = 0x333384u;
            goto label_333384;
        }
    }
    ctx->pc = 0x333314u;
    // 0x333314: 0x0  nop
    ctx->pc = 0x333314u;
    // NOP
label_333318:
    // 0x333318: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x333318u;
    {
        const bool branch_taken_0x333318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333318u;
        // 0x33331c: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333318) {
            ctx->pc = 0x333368u;
            goto label_333368;
        }
    }
    ctx->pc = 0x333320u;
    // 0x333320: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x333320u;
    {
        const bool branch_taken_0x333320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333320u;
        // 0x333324: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333320) {
            ctx->pc = 0x333358u;
            goto label_333358;
        }
    }
    ctx->pc = 0x333328u;
    // 0x333328: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x333328u;
    {
        const bool branch_taken_0x333328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333328u;
        // 0x33332c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333328) {
            ctx->pc = 0x333378u;
            goto label_333378;
        }
    }
    ctx->pc = 0x333330u;
    // 0x333330: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x333330u;
    {
        const bool branch_taken_0x333330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333330u;
        // 0x333334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333330) {
            ctx->pc = 0x333384u;
            goto label_333384;
        }
    }
    ctx->pc = 0x333338u;
label_333338:
    // 0x333338: 0xc0ccc9e  jal         func_333278
    ctx->pc = 0x333338u;
    SET_GPR_U32(ctx, 31, 0x333340u);
    ctx->pc = 0x333278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333278u, 0x333338u, 0x333340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333340u;
label_333340:
    // 0x333340: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x333340u;
    {
        const bool branch_taken_0x333340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333340u;
        // 0x333344: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333340) {
            ctx->pc = 0x33337Cu;
            goto label_33337c;
        }
    }
    ctx->pc = 0x333348u;
label_333348:
    // 0x333348: 0xc0ccca2  jal         func_333288
    ctx->pc = 0x333348u;
    SET_GPR_U32(ctx, 31, 0x333350u);
    ctx->pc = 0x333288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333288u, 0x333348u, 0x333350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333350u;
label_333350:
    // 0x333350: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x333350u;
    {
        const bool branch_taken_0x333350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333350u;
        // 0x333354: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333350) {
            ctx->pc = 0x33337Cu;
            goto label_33337c;
        }
    }
    ctx->pc = 0x333358u;
label_333358:
    // 0x333358: 0xc0cccaa  jal         func_3332A8
    ctx->pc = 0x333358u;
    SET_GPR_U32(ctx, 31, 0x333360u);
    ctx->pc = 0x3332A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332A8u, 0x333358u, 0x333360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333360u;
label_333360:
    // 0x333360: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x333360u;
    {
        const bool branch_taken_0x333360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333360u;
        // 0x333364: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333360) {
            ctx->pc = 0x33337Cu;
            goto label_33337c;
        }
    }
    ctx->pc = 0x333368u;
label_333368:
    // 0x333368: 0xc0cccac  jal         func_3332B0
    ctx->pc = 0x333368u;
    SET_GPR_U32(ctx, 31, 0x333370u);
    ctx->pc = 0x3332B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332B0u, 0x333368u, 0x333370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333370u;
label_333370:
    // 0x333370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333370u;
    {
        const bool branch_taken_0x333370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333370u;
        // 0x333374: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333370) {
            ctx->pc = 0x33337Cu;
            goto label_33337c;
        }
    }
    ctx->pc = 0x333378u;
label_333378:
    // 0x333378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33337c:
    // 0x33337c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33337cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_333380:
    // 0x333380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_333384:
    // 0x333384: 0x3e00008  jr          $ra
    ctx->pc = 0x333384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333384u;
        // 0x333388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33338Cu;
    // 0x33338c: 0x0  nop
    ctx->pc = 0x33338cu;
    // NOP
    ctx->pc = 0x333390u;
}
