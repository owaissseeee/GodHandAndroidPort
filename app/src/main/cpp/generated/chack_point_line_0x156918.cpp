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

// Function: chack_point_line
// Address: 0x156918 - 0x1569a0
void chack_point_line_0x156918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chack_point_line_0x156918");
#endif

    ctx->pc = 0x156918u;

    // 0x156918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15691c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x15691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156920: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x156920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156924: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x156924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x156928: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x156928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15692c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x15692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156930: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x156930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x156934: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x156934u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x156938: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x156938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15693c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x15693cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x156940: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x156940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156944: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x156944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x156948: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x156948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15694c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x15694cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x156950: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x156950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x156954: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x156954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x156958: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x156958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15695c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15695cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x156960: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x156960u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x156964: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x156964u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x156968: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x156968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15696c: 0x0  nop
    ctx->pc = 0x15696cu;
    // NOP
    // 0x156970: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x156970u;
    {
        const bool branch_taken_0x156970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156970u;
        // 0x156974: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156970) {
            ctx->pc = 0x156980u;
            goto label_156980;
        }
    }
    ctx->pc = 0x156978u;
    // 0x156978: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x156978u;
    {
        const bool branch_taken_0x156978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156978u;
        // 0x15697c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156978) {
            ctx->pc = 0x156994u;
            goto label_156994;
        }
    }
    ctx->pc = 0x156980u;
label_156980:
    // 0x156980: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x156980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156984: 0x0  nop
    ctx->pc = 0x156984u;
    // NOP
    // 0x156988: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x156988u;
    {
        const bool branch_taken_0x156988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156988u;
        // 0x15698c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156988) {
            ctx->pc = 0x156994u;
            goto label_156994;
        }
    }
    ctx->pc = 0x156990u;
    // 0x156990: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_156994:
    // 0x156994: 0x3e00008  jr          $ra
    ctx->pc = 0x156994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156994u;
        // 0x156998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15699Cu;
    // 0x15699c: 0x0  nop
    ctx->pc = 0x15699cu;
    // NOP
    ctx->pc = 0x1569a0u;
}
