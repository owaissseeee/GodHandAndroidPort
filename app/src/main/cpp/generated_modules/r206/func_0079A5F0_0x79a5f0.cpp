#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A5F0
// Address: 0x79a5f0 - 0x79a680
void func_0079A5F0_0x79a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A5F0_0x79a5f0");
#endif

    ctx->pc = 0x79a5f0u;

    // 0x79a5f0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79a5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a5f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A5F4u;
    {
        const bool branch_taken_0x79a5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F4u;
        // 0x79a5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5f4) {
            ctx->pc = 0x79A674u;
            goto label_79a674;
        }
    }
    ctx->pc = 0x79A5FCu;
    // 0x79a5fc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a600: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x79a600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79a604: 0x8c62aca0  lw          $v0, -0x5360($v1)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945952)));
    // 0x79a608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79a60c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x79a610: 0x90430624  lbu         $v1, 0x624($v0)
    ctx->pc = 0x79a610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1572)));
    // 0x79a614: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x79A614u;
    {
        const bool branch_taken_0x79a614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a614) {
            ctx->pc = 0x79A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A614u;
            // 0x79a618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A678u;
            goto label_79a678;
        }
    }
    ctx->pc = 0x79A61Cu;
    // 0x79a61c: 0xc44600b8  lwc1        $f6, 0xB8($v0)
    ctx->pc = 0x79a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x79a620: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x79a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a624: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x79a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x79a628: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x79a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a62c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x79a62cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x79a630: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a634: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a638: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x79a638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x79a63c: 0xc44200b4  lwc1        $f2, 0xB4($v0)
    ctx->pc = 0x79a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a640: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x79a640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x79a644: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x79a644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79a648: 0x46046140  add.s       $f5, $f12, $f4
    ctx->pc = 0x79a648u;
    ctx->f[5] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x79a64c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79a64cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a650: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x79a650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x79a654: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x79a654u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a658: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x79a658u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a65c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79a65cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79a660: 0x46000004  c1          0x4
    ctx->pc = 0x79a660u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x79a664: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x79a664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a668: 0x0  nop
    ctx->pc = 0x79a668u;
    // NOP
    // 0x79a66c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x79A66Cu;
    {
        const bool branch_taken_0x79a66c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A66Cu;
        // 0x79a670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a66c) {
            ctx->pc = 0x79A678u;
            goto label_79a678;
        }
    }
    ctx->pc = 0x79A674u;
label_79a674:
    // 0x79a674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a678:
    // 0x79a678: 0x3e00008  jr          $ra
    ctx->pc = 0x79A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A678u;
        // 0x79a67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A680u;
}
} // namespace gh_r206
