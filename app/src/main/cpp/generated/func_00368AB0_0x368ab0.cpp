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

// Function: func_00368AB0
// Address: 0x368ab0 - 0x368b18
void func_00368AB0_0x368ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368AB0_0x368ab0");
#endif

    switch (ctx->pc) {
        case 0x368accu: goto label_368acc;
        default: break;
    }

    ctx->pc = 0x368ab0u;

    // 0x368ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368ac4: 0xc0da3f0  jal         func_368FC0
    ctx->pc = 0x368AC4u;
    SET_GPR_U32(ctx, 31, 0x368ACCu);
    ctx->pc = 0x368AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AC4u;
    // 0x368ac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x368AC4u, 0x368ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368ACCu;
label_368acc:
    // 0x368acc: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x368accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x368ad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x368AD0u;
    {
        const bool branch_taken_0x368ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368AD0u;
        // 0x368ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ad0) {
            ctx->pc = 0x368AF0u;
            goto label_368af0;
        }
    }
    ctx->pc = 0x368AD8u;
    // 0x368ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368adc: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x368adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x368ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368ae8: 0x80da3a4  j           func_368E90
    ctx->pc = 0x368AE8u;
    ctx->pc = 0x368AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AE8u;
    // 0x368aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E90u, 0x368AE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x368AF0u;
label_368af0:
    // 0x368af0: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x368af0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x368af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368af8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x368af8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x368afc: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x368afcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x368b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368b04: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x368b04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x368b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x368B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368B0Cu;
        // 0x368b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368B14u;
    // 0x368b14: 0x0  nop
    ctx->pc = 0x368b14u;
    // NOP
    ctx->pc = 0x368b18u;
}
