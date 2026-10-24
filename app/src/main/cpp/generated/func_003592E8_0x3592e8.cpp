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

// Function: func_003592E8
// Address: 0x3592e8 - 0x359370
void func_003592E8_0x3592e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003592E8_0x3592e8");
#endif

    switch (ctx->pc) {
        case 0x35931cu: goto label_35931c;
        case 0x359354u: goto label_359354;
        default: break;
    }

    ctx->pc = 0x3592e8u;

    // 0x3592e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3592e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3592ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3592ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3592f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3592f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3592f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3592f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3592f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3592f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3592fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3592fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359300: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x359300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359304: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x359304u;
    {
        const bool branch_taken_0x359304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x359308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359304u;
        // 0x359308: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359304) {
            ctx->pc = 0x359354u;
            goto label_359354;
        }
    }
    ctx->pc = 0x35930Cu;
    // 0x35930c: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35930Cu;
    {
        const bool branch_taken_0x35930c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x359310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35930Cu;
        // 0x359310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35930c) {
            ctx->pc = 0x359358u;
            goto label_359358;
        }
    }
    ctx->pc = 0x359314u;
    // 0x359314: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359314u;
    SET_GPR_U32(ctx, 31, 0x35931Cu);
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359314u, 0x35931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35931Cu;
label_35931c:
    // 0x35931c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35931cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x359320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359324: 0x34a50165  ori         $a1, $a1, 0x165
    ctx->pc = 0x359324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)357);
    // 0x359328: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359328u;
    {
        const bool branch_taken_0x359328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359328u;
        // 0x35932c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359328) {
            ctx->pc = 0x359348u;
            goto label_359348;
        }
    }
    ctx->pc = 0x359330u;
    // 0x359330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35933c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359340: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359340u;
    ctx->pc = 0x359344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359340u;
    // 0x359344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359340u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359348u;
label_359348:
    // 0x359348: 0x264413bc  addiu       $a0, $s2, 0x13BC
    ctx->pc = 0x359348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5052));
    // 0x35934c: 0xc0d64dc  jal         func_359370
    ctx->pc = 0x35934Cu;
    SET_GPR_U32(ctx, 31, 0x359354u);
    ctx->pc = 0x359350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35934Cu;
    // 0x359350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359370u, 0x35934Cu, 0x359354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359354u;
label_359354:
    // 0x359354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359358:
    // 0x359358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35935c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35935cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359364: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359368: 0x3e00008  jr          $ra
    ctx->pc = 0x359368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359368u;
        // 0x35936c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359370u;
}
