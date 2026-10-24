#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: SetCannonGameCamera__15cR301CannonGameG4cVecT1
// Address: 0x79d090 - 0x79d130
void SetCannonGameCamera__15cR301CannonGameG4cVecT1_0x79d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCannonGameCamera__15cR301CannonGameG4cVecT1_0x79d090");
#endif

    switch (ctx->pc) {
        case 0x79d0c8u: goto label_79d0c8;
        default: break;
    }

    ctx->pc = 0x79d090u;

    // 0x79d090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79d094: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x79d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x79d098: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79d098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79d09c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79d09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79d0a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x79d0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79d0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79d0a8: 0x24523050  addiu       $s2, $v0, 0x3050
    ctx->pc = 0x79d0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x79d0ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79d0b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79d0b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d0b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x79d0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0c0: 0xc04e3ae  jal         func_138EB8
    ctx->pc = 0x79D0C0u;
    SET_GPR_U32(ctx, 31, 0x79D0C8u);
    ctx->pc = 0x79D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D0C0u;
    // 0x79d0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x79D0C0u, 0x79D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D0C8u;
label_79d0c8:
    // 0x79d0c8: 0x26420c90  addiu       $v0, $s2, 0xC90
    ctx->pc = 0x79d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3216));
    // 0x79d0cc: 0x26430ea0  addiu       $v1, $s2, 0xEA0
    ctx->pc = 0x79d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3744));
    // 0x79d0d0: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79D0D0u;
    {
        const bool branch_taken_0x79d0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x79D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D0D0u;
        // 0x79d0d4: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d0d0) {
            ctx->pc = 0x79D0F0u;
            goto label_79d0f0;
        }
    }
    ctx->pc = 0x79D0D8u;
    // 0x79d0d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x79d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79d0dc: 0xe6400ea0  swc1        $f0, 0xEA0($s2)
    ctx->pc = 0x79d0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3744), bits); }
    // 0x79d0e0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x79d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79d0e4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79d0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79d0e8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x79d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79d0ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79d0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_79d0f0:
    // 0x79d0f0: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x79d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x79d0f4: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x79d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x79d0f8: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79D0F8u;
    {
        const bool branch_taken_0x79d0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D0F8u;
        // 0x79d0fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d0f8) {
            ctx->pc = 0x79D118u;
            goto label_79d118;
        }
    }
    ctx->pc = 0x79D100u;
    // 0x79d100: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x79d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79d104: 0xe4800200  swc1        $f0, 0x200($a0)
    ctx->pc = 0x79d104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x79d108: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x79d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79d10c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79d10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79d110: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x79d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79d114: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79d114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79d118:
    // 0x79d118: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79d118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d11c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79d11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d120: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79d120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d128: 0x3e00008  jr          $ra
    ctx->pc = 0x79D128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D128u;
        // 0x79d12c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D130u;
}
} // namespace gh_r301
