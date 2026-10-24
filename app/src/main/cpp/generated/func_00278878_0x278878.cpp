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

// Function: func_00278878
// Address: 0x278878 - 0x278940
void func_00278878_0x278878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278878_0x278878");
#endif

    switch (ctx->pc) {
        case 0x2788e0u: goto label_2788e0;
        case 0x2788f4u: goto label_2788f4;
        case 0x278920u: goto label_278920;
        case 0x27892cu: goto label_27892c;
        default: break;
    }

    ctx->pc = 0x278878u;

    // 0x278878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27887c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x278880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278884: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x278884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x278888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27888c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27888cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278890: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x278890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x278894: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x278894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x278898: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x278898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27889c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27889Cu;
    {
        const bool branch_taken_0x27889c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27889Cu;
        // 0x2788a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27889c) {
            ctx->pc = 0x2788B4u;
            goto label_2788b4;
        }
    }
    ctx->pc = 0x2788A4u;
    // 0x2788a4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2788A4u;
    {
        const bool branch_taken_0x2788a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2788a4) {
            ctx->pc = 0x2788ECu;
            goto label_2788ec;
        }
    }
    ctx->pc = 0x2788ACu;
    // 0x2788ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2788ACu;
    {
        const bool branch_taken_0x2788ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788ACu;
        // 0x2788b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788ac) {
            ctx->pc = 0x278930u;
            goto label_278930;
        }
    }
    ctx->pc = 0x2788B4u;
label_2788b4:
    // 0x2788b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2788b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2788b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2788b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2788bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2788c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2788c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2788c4: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x2788c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2788c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2788c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788cc: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x2788ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2788d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2788d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2788d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2788d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2788D8u;
    SET_GPR_U32(ctx, 31, 0x2788E0u);
    ctx->pc = 0x2788DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788D8u;
    // 0x2788dc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2788D8u, 0x2788E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788E0u;
label_2788e0:
    // 0x2788e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2788e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2788e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2788e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2788e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2788e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2788ec:
    // 0x2788ec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2788ECu;
    SET_GPR_U32(ctx, 31, 0x2788F4u);
    ctx->pc = 0x2788F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788ECu;
    // 0x2788f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2788ECu, 0x2788F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788F4u;
label_2788f4:
    // 0x2788f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2788F4u;
    {
        const bool branch_taken_0x2788f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788F4u;
        // 0x2788f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788f4) {
            ctx->pc = 0x27890Cu;
            goto label_27890c;
        }
    }
    ctx->pc = 0x2788FCu;
    // 0x2788fc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2788fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x278900: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x278900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x278904: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x278904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x278908: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x278908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_27890c:
    // 0x27890c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278910: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278918: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x278918u;
    SET_GPR_U32(ctx, 31, 0x278920u);
    ctx->pc = 0x27891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278918u;
    // 0x27891c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x278918u, 0x278920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278920u;
label_278920:
    // 0x278920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278924: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x278924u;
    SET_GPR_U32(ctx, 31, 0x27892Cu);
    ctx->pc = 0x278928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278924u;
    // 0x278928: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x278924u, 0x27892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27892Cu;
label_27892c:
    // 0x27892c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27892cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_278930:
    // 0x278930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278934: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x278934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x278938: 0x3e00008  jr          $ra
    ctx->pc = 0x278938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278938u;
        // 0x27893c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278940u;
}
