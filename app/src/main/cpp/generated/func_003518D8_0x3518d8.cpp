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

// Function: func_003518D8
// Address: 0x3518d8 - 0x3519a8
void func_003518D8_0x3518d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003518D8_0x3518d8");
#endif

    switch (ctx->pc) {
        case 0x351900u: goto label_351900;
        case 0x351910u: goto label_351910;
        case 0x351920u: goto label_351920;
        case 0x35193cu: goto label_35193c;
        case 0x351950u: goto label_351950;
        case 0x351960u: goto label_351960;
        case 0x351978u: goto label_351978;
        case 0x351984u: goto label_351984;
        default: break;
    }

    ctx->pc = 0x3518d8u;

    // 0x3518d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3518d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3518dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3518dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3518e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3518e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3518e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3518e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3518e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3518e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3518ec: 0x26110d30  addiu       $s1, $s0, 0xD30
    ctx->pc = 0x3518ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x3518f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3518f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3518f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3518f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3518f8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x3518F8u;
    SET_GPR_U32(ctx, 31, 0x351900u);
    ctx->pc = 0x3518FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3518F8u;
    // 0x3518fc: 0x8e121fc0  lw          $s2, 0x1FC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x3518F8u, 0x351900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351900u;
label_351900:
    // 0x351900: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351900u;
    {
        const bool branch_taken_0x351900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351900u;
        // 0x351904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351900) {
            ctx->pc = 0x351918u;
            goto label_351918;
        }
    }
    ctx->pc = 0x351908u;
    // 0x351908: 0xc0d466a  jal         func_3519A8
    ctx->pc = 0x351908u;
    SET_GPR_U32(ctx, 31, 0x351910u);
    ctx->pc = 0x3519A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3519A8u, 0x351908u, 0x351910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351910u;
label_351910:
    // 0x351910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x351910u;
    {
        const bool branch_taken_0x351910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351910u;
        // 0x351914: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351910) {
            ctx->pc = 0x35192Cu;
            goto label_35192c;
        }
    }
    ctx->pc = 0x351918u;
label_351918:
    // 0x351918: 0xc0d4682  jal         func_351A08
    ctx->pc = 0x351918u;
    SET_GPR_U32(ctx, 31, 0x351920u);
    ctx->pc = 0x351A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351A08u, 0x351918u, 0x351920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351920u;
label_351920:
    // 0x351920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x351920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351924: 0x4a0001a  bltz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x351924u;
    {
        const bool branch_taken_0x351924 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x351928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351924u;
        // 0x351928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351924) {
            ctx->pc = 0x351990u;
            goto label_351990;
        }
    }
    ctx->pc = 0x35192Cu;
label_35192c:
    // 0x35192c: 0x58a0000f  blezl       $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x35192Cu;
    {
        const bool branch_taken_0x35192c = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x35192c) {
            ctx->pc = 0x351930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35192Cu;
            // 0x351930: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35196Cu;
            goto label_35196c;
        }
    }
    ctx->pc = 0x351934u;
    // 0x351934: 0xc0d337e  jal         func_34CDF8
    ctx->pc = 0x351934u;
    SET_GPR_U32(ctx, 31, 0x35193Cu);
    ctx->pc = 0x351938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351934u;
    // 0x351938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CDF8u, 0x351934u, 0x35193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35193Cu;
label_35193c:
    // 0x35193c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351940: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x351940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x351944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x351944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x351948: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x351948u;
    SET_GPR_U32(ctx, 31, 0x351950u);
    ctx->pc = 0x35194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351948u;
    // 0x35194c: 0xae420088  sw          $v0, 0x88($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x351948u, 0x351950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351950u;
label_351950:
    // 0x351950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351950u;
    {
        const bool branch_taken_0x351950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351950u;
        // 0x351954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351950) {
            ctx->pc = 0x351968u;
            goto label_351968;
        }
    }
    ctx->pc = 0x351958u;
    // 0x351958: 0xc0d5b16  jal         func_356C58
    ctx->pc = 0x351958u;
    SET_GPR_U32(ctx, 31, 0x351960u);
    ctx->pc = 0x356C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356C58u, 0x351958u, 0x351960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351960u;
label_351960:
    // 0x351960: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x351960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x351964: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x351964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_351968:
    // 0x351968: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x351968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_35196c:
    // 0x35196c: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x35196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x351970: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x351970u;
    SET_GPR_U32(ctx, 31, 0x351978u);
    ctx->pc = 0x351974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351970u;
    // 0x351974: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x351970u, 0x351978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351978u;
label_351978:
    // 0x351978: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x351978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x35197c: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x35197Cu;
    SET_GPR_U32(ctx, 31, 0x351984u);
    ctx->pc = 0x351980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35197Cu;
    // 0x351980: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x35197Cu, 0x351984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351984u;
label_351984:
    // 0x351984: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x351984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x351988: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x351988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x35198c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35198cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351990:
    // 0x351990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x351990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x351994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x351998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x351998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35199c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3519a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3519A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3519A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519A0u;
        // 0x3519a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3519A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3519A8u;
}
