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

// Function: cEmSetParam_updateSetDataRot
// Address: 0x295400 - 0x295458
void cEmSetParam_updateSetDataRot_0x295400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_updateSetDataRot_0x295400");
#endif

    switch (ctx->pc) {
        case 0x29541cu: goto label_29541c;
        default: break;
    }

    ctx->pc = 0x295400u;

    // 0x295400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295404: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x295404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x295408: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x295408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29540c: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x29540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x295410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295414: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x295414u;
    SET_GPR_U32(ctx, 31, 0x29541Cu);
    ctx->pc = 0x295418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295414u;
    // 0x295418: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x295414u, 0x29541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29541Cu;
label_29541c:
    // 0x29541c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29541cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295420: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x295420u;
    {
        const bool branch_taken_0x295420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295420u;
        // 0x295424: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295420) {
            ctx->pc = 0x295448u;
            goto label_295448;
        }
    }
    ctx->pc = 0x295428u;
    // 0x295428: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x295428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x29542c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x29542cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x295430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295434: 0x0  nop
    ctx->pc = 0x295434u;
    // NOP
    // 0x295438: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x295438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29543c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29543cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295440: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x295440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x295444: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x295444u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_295448:
    // 0x295448: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x295448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29544c: 0x3e00008  jr          $ra
    ctx->pc = 0x29544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29544Cu;
        // 0x295450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29544Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295454u;
    // 0x295454: 0x0  nop
    ctx->pc = 0x295454u;
    // NOP
    ctx->pc = 0x295458u;
}
