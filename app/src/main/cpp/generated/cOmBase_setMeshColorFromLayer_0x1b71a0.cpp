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

// Function: cOmBase_setMeshColorFromLayer
// Address: 0x1b71a0 - 0x1b7220
void cOmBase_setMeshColorFromLayer_0x1b71a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setMeshColorFromLayer_0x1b71a0");
#endif

    switch (ctx->pc) {
        case 0x1b71d0u: goto label_1b71d0;
        case 0x1b71e0u: goto label_1b71e0;
        default: break;
    }

    ctx->pc = 0x1b71a0u;

    // 0x1b71a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b71a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b71a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b71a8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1b71a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b71ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b71acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71b0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1b71b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1b71b4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1b71b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1b71b8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b71b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b71bc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1b71bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1b71c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b71c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b71c4: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1b71c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1b71c8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1B71C8u;
    SET_GPR_U32(ctx, 31, 0x1B71D0u);
    ctx->pc = 0x1B71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71C8u;
    // 0x1b71cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1B71C8u, 0x1B71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71D0u;
label_1b71d0:
    // 0x1b71d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b71d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71d4: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B71D4u;
    {
        const bool branch_taken_0x1b71d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71d4) {
            ctx->pc = 0x1B71D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71D4u;
            // 0x1b71d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7208u;
            goto label_1b7208;
        }
    }
    ctx->pc = 0x1B71DCu;
    // 0x1b71dc: 0x9062040c  lbu         $v0, 0x40C($v1)
    ctx->pc = 0x1b71dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
label_1b71e0:
    // 0x1b71e0: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B71E0u;
    {
        const bool branch_taken_0x1b71e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1b71e0) {
            ctx->pc = 0x1B71E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71E0u;
            // 0x1b71e4: 0x8c630404  lw          $v1, 0x404($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B71FCu;
            goto label_1b71fc;
        }
    }
    ctx->pc = 0x1B71E8u;
    // 0x1b71e8: 0x246203a0  addiu       $v0, $v1, 0x3A0
    ctx->pc = 0x1b71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1b71ec: 0xe47603a0  swc1        $f22, 0x3A0($v1)
    ctx->pc = 0x1b71ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 928), bits); }
    // 0x1b71f0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b71f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b71f4: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x1b71f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b71f8: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x1b71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
label_1b71fc:
    // 0x1b71fc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B71FCu;
    {
        const bool branch_taken_0x1b71fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b71fc) {
            ctx->pc = 0x1B7200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71FCu;
            // 0x1b7200: 0x9062040c  lbu         $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B71E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b71e0;
        }
    }
    ctx->pc = 0x1B7204u;
    // 0x1b7204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b7204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7208:
    // 0x1b7208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b720c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1b720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b7210: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1b7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b7214: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b7214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7218: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7218u;
        // 0x1b721c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7220u;
}
