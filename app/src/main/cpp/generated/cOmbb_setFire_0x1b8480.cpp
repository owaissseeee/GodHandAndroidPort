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

// Function: cOmbb_setFire
// Address: 0x1b8480 - 0x1b8518
void cOmbb_setFire_0x1b8480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmbb_setFire_0x1b8480");
#endif

    switch (ctx->pc) {
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84d4u: goto label_1b84d4;
        case 0x1b84fcu: goto label_1b84fc;
        default: break;
    }

    ctx->pc = 0x1b8480u;

    // 0x1b8480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b848c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b848cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8490: 0x92020600  lbu         $v0, 0x600($s0)
    ctx->pc = 0x1b8490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b8494: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B8494u;
    {
        const bool branch_taken_0x1b8494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8494) {
            ctx->pc = 0x1B8498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8494u;
            // 0x1b8498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B850Cu;
            goto label_1b850c;
        }
    }
    ctx->pc = 0x1B849Cu;
    // 0x1b849c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b84a0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1b84a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b84a4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1b84a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b84a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b84a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84ac: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B84ACu;
    SET_GPR_U32(ctx, 31, 0x1B84B4u);
    ctx->pc = 0x1B84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84ACu;
    // 0x1b84b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B84ACu, 0x1B84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84B4u;
label_1b84b4:
    // 0x1b84b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1b84b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1b84b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b84bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b84bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b84c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b84c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b84c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b84c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84cc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1B84CCu;
    SET_GPR_U32(ctx, 31, 0x1B84D4u);
    ctx->pc = 0x1B84D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84CCu;
    // 0x1b84d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1B84CCu, 0x1B84D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84D4u;
label_1b84d4:
    // 0x1b84d4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b84d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b84dc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b84dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b84e0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b84e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b84e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b84e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b84ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b84f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B84F4u;
    SET_GPR_U32(ctx, 31, 0x1B84FCu);
    ctx->pc = 0x1B84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84F4u;
    // 0x1b84f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B84F4u, 0x1B84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84FCu;
label_1b84fc:
    // 0x1b84fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8500: 0xae020608  sw          $v0, 0x608($s0)
    ctx->pc = 0x1b8500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
    // 0x1b8504: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x1b8504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b8508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b850c:
    // 0x1b850c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b850cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8510: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8510u;
        // 0x1b8514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8518u;
}
