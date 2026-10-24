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

// Function: func_00129578
// Address: 0x129578 - 0x129630
void func_00129578_0x129578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00129578_0x129578");
#endif

    switch (ctx->pc) {
        case 0x1295acu: goto label_1295ac;
        case 0x1295f4u: goto label_1295f4;
        case 0x12961cu: goto label_12961c;
        default: break;
    }

    ctx->pc = 0x129578u;

    // 0x129578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12957c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x129580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129588: 0x8e0315f4  lw          $v1, 0x15F4($s0)
    ctx->pc = 0x129588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x12958c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x12958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x129590: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x129590u;
    {
        const bool branch_taken_0x129590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129590u;
        // 0x129594: 0x2402ffdf  addiu       $v0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129590) {
            ctx->pc = 0x12961Cu;
            goto label_12961c;
        }
    }
    ctx->pc = 0x129598u;
    // 0x129598: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x129598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x12959c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1295a0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1295a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1295a4: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x1295A4u;
    SET_GPR_U32(ctx, 31, 0x1295ACu);
    ctx->pc = 0x1295A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1295A4u;
    // 0x1295a8: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x1295A4u, 0x1295ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295ACu;
label_1295ac:
    // 0x1295ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1295acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295b0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1295b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1295b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1295B4u;
    {
        const bool branch_taken_0x1295b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295B4u;
        // 0x1295b8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295b4) {
            ctx->pc = 0x1295D4u;
            goto label_1295d4;
        }
    }
    ctx->pc = 0x1295BCu;
    // 0x1295bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1295bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1295c0: 0x2442cd50  addiu       $v0, $v0, -0x32B0
    ctx->pc = 0x1295c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954320));
    // 0x1295c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1295c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1295c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1295c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1295cc: 0x800008  jr          $a0
    ctx->pc = 0x1295CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1295D4u: goto label_1295d4;
            case 0x1295FCu: goto label_1295fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1295CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1295D4u;
label_1295d4:
    // 0x1295d4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1295d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1295d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1295d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295dc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1295dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1295e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1295e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1295e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1295e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1295ec: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1295ECu;
    SET_GPR_U32(ctx, 31, 0x1295F4u);
    ctx->pc = 0x1295F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1295ECu;
    // 0x1295f0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1295ECu, 0x1295F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295F4u;
label_1295f4:
    // 0x1295f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1295F4u;
    {
        const bool branch_taken_0x1295f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F4u;
        // 0x1295f8: 0xa2000649  sb          $zero, 0x649($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1609), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295f4) {
            ctx->pc = 0x129620u;
            goto label_129620;
        }
    }
    ctx->pc = 0x1295FCu;
label_1295fc:
    // 0x1295fc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1295fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x129600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x129600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129604: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x129604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x129608: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12960c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12960cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129610: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x129610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129614: 0xc0c194a  jal         func_306528
    ctx->pc = 0x129614u;
    SET_GPR_U32(ctx, 31, 0x12961Cu);
    ctx->pc = 0x129618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129614u;
    // 0x129618: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x129614u, 0x12961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12961Cu;
label_12961c:
    // 0x12961c: 0xa2000649  sb          $zero, 0x649($s0)
    ctx->pc = 0x12961cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1609), (uint8_t)GPR_U32(ctx, 0));
label_129620:
    // 0x129620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x129620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129628: 0x3e00008  jr          $ra
    ctx->pc = 0x129628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129628u;
        // 0x12962c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129630u;
}
