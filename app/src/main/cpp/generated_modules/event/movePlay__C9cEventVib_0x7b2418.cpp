#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__C9cEventVib
// Address: 0x7b2418 - 0x7b24d0
void movePlay__C9cEventVib_0x7b2418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__C9cEventVib_0x7b2418");
#endif

    switch (ctx->pc) {
        case 0x7b2434u: goto label_7b2434;
        case 0x7b2444u: goto label_7b2444;
        case 0x7b2470u: goto label_7b2470;
        case 0x7b2480u: goto label_7b2480;
        case 0x7b248cu: goto label_7b248c;
        case 0x7b24a8u: goto label_7b24a8;
        case 0x7b24b8u: goto label_7b24b8;
        default: break;
    }

    ctx->pc = 0x7b2418u;

    // 0x7b2418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b2418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b241c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7b241cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b2420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b2420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b2424: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b2424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b2428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b242c: 0xc1ecb72  jal         func_7B2DC8
    ctx->pc = 0x7B242Cu;
    SET_GPR_U32(ctx, 31, 0x7B2434u);
    ctx->pc = 0x7B2430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B242Cu;
    // 0x7b2430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2DC8u, 0x7B242Cu, 0x7B2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2434u;
label_7b2434:
    // 0x7b2434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7b2434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7b2438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b243c: 0xc1ecb0e  jal         func_7B2C38
    ctx->pc = 0x7B243Cu;
    SET_GPR_U32(ctx, 31, 0x7B2444u);
    ctx->pc = 0x7B2440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B243Cu;
    // 0x7b2440: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2C38u, 0x7B243Cu, 0x7B2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2444u;
label_7b2444:
    // 0x7b2444: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7B2444u;
    {
        const bool branch_taken_0x7b2444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2444u;
        // 0x7b2448: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2444) {
            ctx->pc = 0x7B24B8u;
            goto label_7b24b8;
        }
    }
    ctx->pc = 0x7B244Cu;
    // 0x7b244c: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x7b244cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7b2450: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x7b2450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x7b2454: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7B2454u;
    {
        const bool branch_taken_0x7b2454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2454u;
        // 0x7b2458: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2454) {
            ctx->pc = 0x7B2494u;
            goto label_7b2494;
        }
    }
    ctx->pc = 0x7B245Cu;
    // 0x7b245c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x7b245cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x7b2460: 0x26108140  addiu       $s0, $s0, -0x7EC0
    ctx->pc = 0x7b2460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
    // 0x7b2464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7b2464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2468: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x7B2468u;
    SET_GPR_U32(ctx, 31, 0x7B2470u);
    ctx->pc = 0x7B246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2468u;
    // 0x7b246c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x7B2468u, 0x7B2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2470u;
label_7b2470:
    // 0x7b2470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2474: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x7b2474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x7b2478: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x7B2478u;
    SET_GPR_U32(ctx, 31, 0x7B2480u);
    ctx->pc = 0x7B247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2478u;
    // 0x7b247c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x7B2478u, 0x7B2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2480u;
label_7b2480:
    // 0x7b2480: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7b2480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x7b2484: 0xc0af7f6  jal         func_2BDFD8
    ctx->pc = 0x7B2484u;
    SET_GPR_U32(ctx, 31, 0x7B248Cu);
    ctx->pc = 0x7B2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2484u;
    // 0x7b2488: 0x248480e0  addiu       $a0, $a0, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDFD8u, 0x7B2484u, 0x7B248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B248Cu;
label_7b248c:
    // 0x7b248c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7B248Cu;
    {
        const bool branch_taken_0x7b248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B248Cu;
        // 0x7b2490: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b248c) {
            ctx->pc = 0x7B24BCu;
            goto label_7b24bc;
        }
    }
    ctx->pc = 0x7B2494u;
label_7b2494:
    // 0x7b2494: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x7b2494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x7b2498: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2498u;
    {
        const bool branch_taken_0x7b2498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2498u;
        // 0x7b249c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2498) {
            ctx->pc = 0x7B24B0u;
            goto label_7b24b0;
        }
    }
    ctx->pc = 0x7B24A0u;
    // 0x7b24a0: 0xc1ec950  jal         func_7B2540
    ctx->pc = 0x7B24A0u;
    SET_GPR_U32(ctx, 31, 0x7B24A8u);
    ctx->pc = 0x7B24A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B24A0u;
    // 0x7b24a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2540u, 0x7B24A0u, 0x7B24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B24A8u;
label_7b24a8:
    // 0x7b24a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B24A8u;
    {
        const bool branch_taken_0x7b24a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B24A8u;
        // 0x7b24ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b24a8) {
            ctx->pc = 0x7B24BCu;
            goto label_7b24bc;
        }
    }
    ctx->pc = 0x7B24B0u;
label_7b24b0:
    // 0x7b24b0: 0xc1ec934  jal         func_7B24D0
    ctx->pc = 0x7B24B0u;
    SET_GPR_U32(ctx, 31, 0x7B24B8u);
    ctx->pc = 0x7B24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B24B0u;
    // 0x7b24b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B24D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B24D0u, 0x7B24B0u, 0x7B24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B24B8u;
label_7b24b8:
    // 0x7b24b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b24b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7b24bc:
    // 0x7b24bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b24bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b24c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b24c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b24c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B24C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B24C4u;
        // 0x7b24c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B24C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B24CCu;
    // 0x7b24cc: 0x0  nop
    ctx->pc = 0x7b24ccu;
    // NOP
    ctx->pc = 0x7b24d0u;
}
} // namespace gh_event
