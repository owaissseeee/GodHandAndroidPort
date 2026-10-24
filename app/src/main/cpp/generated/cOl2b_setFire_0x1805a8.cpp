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

// Function: cOl2b_setFire
// Address: 0x1805a8 - 0x180648
void cOl2b_setFire_0x1805a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_setFire_0x1805a8");
#endif

    switch (ctx->pc) {
        case 0x1805e4u: goto label_1805e4;
        case 0x18062cu: goto label_18062c;
        default: break;
    }

    ctx->pc = 0x1805a8u;

    // 0x1805a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1805ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1805acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1805b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1805b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1805b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1805b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805b8: 0x92020a29  lbu         $v0, 0xA29($s0)
    ctx->pc = 0x1805b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2601)));
    // 0x1805bc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1805BCu;
    {
        const bool branch_taken_0x1805bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1805bc) {
            ctx->pc = 0x1805C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1805BCu;
            // 0x1805c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180638u;
            goto label_180638;
        }
    }
    ctx->pc = 0x1805C4u;
    // 0x1805c4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1805c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1805cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1805ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1805d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1805d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1805d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1805dc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1805DCu;
    SET_GPR_U32(ctx, 31, 0x1805E4u);
    ctx->pc = 0x1805E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1805DCu;
    // 0x1805e0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1805DCu, 0x1805E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1805E4u;
label_1805e4:
    // 0x1805e4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1805e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1805e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1805ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1805ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1805f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1805F0u;
    {
        const bool branch_taken_0x1805f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1805F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805F0u;
        // 0x1805f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805f0) {
            ctx->pc = 0x180604u;
            goto label_180604;
        }
    }
    ctx->pc = 0x1805F8u;
    // 0x1805f8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1805f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1805fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1805FCu;
    {
        const bool branch_taken_0x1805fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805FCu;
        // 0x180600: 0x8c490008  lw          $t1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805fc) {
            ctx->pc = 0x180608u;
            goto label_180608;
        }
    }
    ctx->pc = 0x180604u;
label_180604:
    // 0x180604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180608:
    // 0x180608: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x18060c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180610: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x180614: 0x240600dd  addiu       $a2, $zero, 0xDD
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x180618: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x180618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18061c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18061cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180620: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x180620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180624: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x180624u;
    SET_GPR_U32(ctx, 31, 0x18062Cu);
    ctx->pc = 0x180628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180624u;
    // 0x180628: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x180624u, 0x18062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18062Cu;
label_18062c:
    // 0x18062c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180630: 0xa2030a29  sb          $v1, 0xA29($s0)
    ctx->pc = 0x180630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2601), (uint8_t)GPR_U32(ctx, 3));
    // 0x180634: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_180638:
    // 0x180638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18063c: 0x3e00008  jr          $ra
    ctx->pc = 0x18063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18063Cu;
        // 0x180640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180644u;
    // 0x180644: 0x0  nop
    ctx->pc = 0x180644u;
    // NOP
    ctx->pc = 0x180648u;
}
