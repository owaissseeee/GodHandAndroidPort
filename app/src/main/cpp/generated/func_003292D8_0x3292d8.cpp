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

// Function: func_003292D8
// Address: 0x3292d8 - 0x329438
void func_003292D8_0x3292d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003292D8_0x3292d8");
#endif

    switch (ctx->pc) {
        case 0x329300u: goto label_329300;
        case 0x329318u: goto label_329318;
        case 0x329328u: goto label_329328;
        case 0x329340u: goto label_329340;
        case 0x329348u: goto label_329348;
        case 0x329358u: goto label_329358;
        case 0x329360u: goto label_329360;
        case 0x329374u: goto label_329374;
        case 0x329388u: goto label_329388;
        case 0x3293c8u: goto label_3293c8;
        case 0x3293d0u: goto label_3293d0;
        case 0x3293d8u: goto label_3293d8;
        default: break;
    }

    ctx->pc = 0x3292d8u;

    // 0x3292d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3292d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3292dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3292dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3292e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3292e4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x3292e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x3292e8: 0x261092c0  addiu       $s0, $s0, -0x6D40
    ctx->pc = 0x3292e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939328));
    // 0x3292ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3292ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3292f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3292f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3292f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3292f8: 0xc0cc39c  jal         func_330E70
    ctx->pc = 0x3292F8u;
    SET_GPR_U32(ctx, 31, 0x329300u);
    ctx->pc = 0x3292FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292F8u;
    // 0x3292fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330E70u, 0x3292F8u, 0x329300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329300u;
label_329300:
    // 0x329300: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x329300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x329304: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x329304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x329308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32930c: 0x24841f50  addiu       $a0, $a0, 0x1F50
    ctx->pc = 0x32930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8016));
    // 0x329310: 0xc0cc0c6  jal         func_330318
    ctx->pc = 0x329310u;
    SET_GPR_U32(ctx, 31, 0x329318u);
    ctx->pc = 0x329314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329310u;
    // 0x329314: 0x24a56318  addiu       $a1, $a1, 0x6318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330318u, 0x329310u, 0x329318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329318u;
label_329318:
    // 0x329318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32931c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329320: 0xc0cc39c  jal         func_330E70
    ctx->pc = 0x329320u;
    SET_GPR_U32(ctx, 31, 0x329328u);
    ctx->pc = 0x329324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329320u;
    // 0x329324: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330E70u, 0x329320u, 0x329328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329328u;
label_329328:
    // 0x329328: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x329328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32932c: 0x26101f58  addiu       $s0, $s0, 0x1F58
    ctx->pc = 0x32932cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8024));
    // 0x329330: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x329330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
    // 0x329334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329338: 0xc0cc0c6  jal         func_330318
    ctx->pc = 0x329338u;
    SET_GPR_U32(ctx, 31, 0x329340u);
    ctx->pc = 0x32933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329338u;
    // 0x32933c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330318u, 0x329338u, 0x329340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329340u;
label_329340:
    // 0x329340: 0xc0cc160  jal         func_330580
    ctx->pc = 0x329340u;
    SET_GPR_U32(ctx, 31, 0x329348u);
    ctx->pc = 0x329344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329340u;
    // 0x329344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330580u, 0x329340u, 0x329348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329348u;
label_329348:
    // 0x329348: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x329348u;
    {
        const bool branch_taken_0x329348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329348u;
        // 0x32934c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329348) {
            ctx->pc = 0x3293C0u;
            goto label_3293c0;
        }
    }
    ctx->pc = 0x329350u;
    // 0x329350: 0xc0cd486  jal         func_335218
    ctx->pc = 0x329350u;
    SET_GPR_U32(ctx, 31, 0x329358u);
    ctx->pc = 0x329354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329350u;
    // 0x329354: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335218u, 0x329350u, 0x329358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329358u;
label_329358:
    // 0x329358: 0xc0cd492  jal         func_335248
    ctx->pc = 0x329358u;
    SET_GPR_U32(ctx, 31, 0x329360u);
    ctx->pc = 0x32935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329358u;
    // 0x32935c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335248u, 0x329358u, 0x329360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329360u;
label_329360:
    // 0x329360: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x329360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x329364: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329364u;
    {
        const bool branch_taken_0x329364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329364u;
        // 0x329368: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329364) {
            ctx->pc = 0x329380u;
            goto label_329380;
        }
    }
    ctx->pc = 0x32936Cu;
    // 0x32936c: 0xc0ccfd8  jal         func_333F60
    ctx->pc = 0x32936Cu;
    SET_GPR_U32(ctx, 31, 0x329374u);
    ctx->pc = 0x329370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32936Cu;
    // 0x329370: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F60u, 0x32936Cu, 0x329374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329374u;
label_329374:
    // 0x329374: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x329374u;
    {
        const bool branch_taken_0x329374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329374u;
        // 0x329378: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329374) {
            ctx->pc = 0x32938Cu;
            goto label_32938c;
        }
    }
    ctx->pc = 0x32937Cu;
    // 0x32937c: 0x0  nop
    ctx->pc = 0x32937cu;
    // NOP
label_329380:
    // 0x329380: 0xc0ccfd8  jal         func_333F60
    ctx->pc = 0x329380u;
    SET_GPR_U32(ctx, 31, 0x329388u);
    ctx->pc = 0x333F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F60u, 0x329380u, 0x329388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329388u;
label_329388:
    // 0x329388: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x329388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32938c:
    // 0x32938c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32938Cu;
    {
        const bool branch_taken_0x32938c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32938Cu;
        // 0x329390: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32938c) {
            ctx->pc = 0x3293A8u;
            goto label_3293a8;
        }
    }
    ctx->pc = 0x329394u;
    // 0x329394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32939c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3293a0: 0x80ccfe0  j           func_333F80
    ctx->pc = 0x3293A0u;
    ctx->pc = 0x3293A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293A0u;
    // 0x3293a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F80u, 0x3293A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3293A8u;
label_3293a8:
    // 0x3293a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3293a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3293ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3293acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3293b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3293b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3293b4: 0x80ccfe0  j           func_333F80
    ctx->pc = 0x3293B4u;
    ctx->pc = 0x3293B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293B4u;
    // 0x3293b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F80u, 0x3293B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3293BCu;
    // 0x3293bc: 0x0  nop
    ctx->pc = 0x3293bcu;
    // NOP
label_3293c0:
    // 0x3293c0: 0xc0cd486  jal         func_335218
    ctx->pc = 0x3293C0u;
    SET_GPR_U32(ctx, 31, 0x3293C8u);
    ctx->pc = 0x335218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335218u, 0x3293C0u, 0x3293C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293C8u;
label_3293c8:
    // 0x3293c8: 0xc0cd492  jal         func_335248
    ctx->pc = 0x3293C8u;
    SET_GPR_U32(ctx, 31, 0x3293D0u);
    ctx->pc = 0x3293CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293C8u;
    // 0x3293cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335248u, 0x3293C8u, 0x3293D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293D0u;
label_3293d0:
    // 0x3293d0: 0xc0ccfd8  jal         func_333F60
    ctx->pc = 0x3293D0u;
    SET_GPR_U32(ctx, 31, 0x3293D8u);
    ctx->pc = 0x3293D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293D0u;
    // 0x3293d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F60u, 0x3293D0u, 0x3293D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293D8u;
label_3293d8:
    // 0x3293d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3293d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3293dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3293dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3293e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3293e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3293e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3293e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3293e8: 0x80ccfe0  j           func_333F80
    ctx->pc = 0x3293E8u;
    ctx->pc = 0x3293ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293E8u;
    // 0x3293ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F80u, 0x3293E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3293F0u;
    // 0x3293f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3293f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3293f4: 0x0  nop
    ctx->pc = 0x3293f4u;
    // NOP
    // 0x3293f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3293f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3293fc: 0x0  nop
    ctx->pc = 0x3293fcu;
    // NOP
    // 0x329400: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329404: 0x0  nop
    ctx->pc = 0x329404u;
    // NOP
    // 0x329408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x329408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32940c: 0x0  nop
    ctx->pc = 0x32940cu;
    // NOP
    // 0x329410: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x329410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x329414: 0x0  nop
    ctx->pc = 0x329414u;
    // NOP
    // 0x329418: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32941c: 0x0  nop
    ctx->pc = 0x32941cu;
    // NOP
    // 0x329420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329424: 0x0  nop
    ctx->pc = 0x329424u;
    // NOP
    // 0x329428: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32942c: 0x0  nop
    ctx->pc = 0x32942cu;
    // NOP
    // 0x329430: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x329430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x329434: 0x0  nop
    ctx->pc = 0x329434u;
    // NOP
    ctx->pc = 0x329438u;
}
