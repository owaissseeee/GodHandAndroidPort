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

// Function: func_001D5360
// Address: 0x1d5360 - 0x1d5430
void func_001D5360_0x1d5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5360_0x1d5360");
#endif

    switch (ctx->pc) {
        case 0x1d53c8u: goto label_1d53c8;
        case 0x1d53d8u: goto label_1d53d8;
        case 0x1d53e8u: goto label_1d53e8;
        case 0x1d53fcu: goto label_1d53fc;
        case 0x1d540cu: goto label_1d540c;
        case 0x1d541cu: goto label_1d541c;
        default: break;
    }

    ctx->pc = 0x1d5360u;

    // 0x1d5360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5364: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1d5364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d5368: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d536c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5374: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5374u;
    {
        const bool branch_taken_0x1d5374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5374u;
        // 0x1d5378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5374) {
            ctx->pc = 0x1D53B4u;
            goto label_1d53b4;
        }
    }
    ctx->pc = 0x1D537Cu;
    // 0x1d537c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d537cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5380: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5380u;
    {
        const bool branch_taken_0x1d5380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5380) {
            ctx->pc = 0x1D5384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5380u;
            // 0x1d5384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5398u;
            goto label_1d5398;
        }
    }
    ctx->pc = 0x1D5388u;
    // 0x1d5388: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5388u;
    {
        const bool branch_taken_0x1d5388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5388u;
        // 0x1d538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5388) {
            ctx->pc = 0x1D53A8u;
            goto label_1d53a8;
        }
    }
    ctx->pc = 0x1D5390u;
    // 0x1d5390: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D5390u;
    {
        const bool branch_taken_0x1d5390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5390u;
        // 0x1d5394: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5390) {
            ctx->pc = 0x1D5420u;
            goto label_1d5420;
        }
    }
    ctx->pc = 0x1D5398u;
label_1d5398:
    // 0x1d5398: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5398u;
    {
        const bool branch_taken_0x1d5398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5398u;
        // 0x1d539c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5398) {
            ctx->pc = 0x1D53F0u;
            goto label_1d53f0;
        }
    }
    ctx->pc = 0x1D53A0u;
    // 0x1d53a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D53A0u;
    {
        const bool branch_taken_0x1d53a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53A0u;
        // 0x1d53a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53a0) {
            ctx->pc = 0x1D5420u;
            goto label_1d5420;
        }
    }
    ctx->pc = 0x1D53A8u;
label_1d53a8:
    // 0x1d53a8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d53a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d53ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D53ACu;
    {
        const bool branch_taken_0x1d53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53ACu;
        // 0x1d53b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53ac) {
            ctx->pc = 0x1D53C0u;
            goto label_1d53c0;
        }
    }
    ctx->pc = 0x1D53B4u;
label_1d53b4:
    // 0x1d53b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d53bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d53bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d53c0:
    // 0x1d53c0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D53C0u;
    SET_GPR_U32(ctx, 31, 0x1D53C8u);
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D53C0u, 0x1D53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53C8u;
label_1d53c8:
    // 0x1d53c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d53ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d53d0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D53D0u;
    SET_GPR_U32(ctx, 31, 0x1D53D8u);
    ctx->pc = 0x1D53D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53D0u;
    // 0x1d53d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D53D0u, 0x1D53D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53D8u;
label_1d53d8:
    // 0x1d53d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53dc: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d53e0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D53E0u;
    SET_GPR_U32(ctx, 31, 0x1D53E8u);
    ctx->pc = 0x1D53E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53E0u;
    // 0x1d53e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D53E0u, 0x1D53E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53E8u;
label_1d53e8:
    // 0x1d53e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D53E8u;
    {
        const bool branch_taken_0x1d53e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53E8u;
        // 0x1d53ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53e8) {
            ctx->pc = 0x1D5420u;
            goto label_1d5420;
        }
    }
    ctx->pc = 0x1D53F0u;
label_1d53f0:
    // 0x1d53f0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d53f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d53f4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D53F4u;
    SET_GPR_U32(ctx, 31, 0x1D53FCu);
    ctx->pc = 0x1D53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53F4u;
    // 0x1d53f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D53F4u, 0x1D53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53FCu;
label_1d53fc:
    // 0x1d53fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5400: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d5400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d5404: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5404u;
    SET_GPR_U32(ctx, 31, 0x1D540Cu);
    ctx->pc = 0x1D5408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5404u;
    // 0x1d5408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5404u, 0x1D540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D540Cu;
label_1d540c:
    // 0x1d540c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5410: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d5414: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5414u;
    SET_GPR_U32(ctx, 31, 0x1D541Cu);
    ctx->pc = 0x1D5418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5414u;
    // 0x1d5418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5414u, 0x1D541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D541Cu;
label_1d541c:
    // 0x1d541c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d541cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5420:
    // 0x1d5420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5424: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5424u;
        // 0x1d5428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D542Cu;
    // 0x1d542c: 0x0  nop
    ctx->pc = 0x1d542cu;
    // NOP
    ctx->pc = 0x1d5430u;
}
