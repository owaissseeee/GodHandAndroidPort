#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: ExecPlLookWait__15cR305_Chihuahua
// Address: 0x799908 - 0x799a18
void ExecPlLookWait__15cR305_Chihuahua_0x799908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecPlLookWait__15cR305_Chihuahua_0x799908");
#endif

    switch (ctx->pc) {
        case 0x799958u: goto label_799958;
        case 0x799974u: goto label_799974;
        case 0x799998u: goto label_799998;
        case 0x7999f0u: goto label_7999f0;
        default: break;
    }

    ctx->pc = 0x799908u;

    // 0x799908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79990c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79991c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799920: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x799920u;
    {
        const bool branch_taken_0x799920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799920u;
        // 0x799924: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799920) {
            ctx->pc = 0x799984u;
            goto label_799984;
        }
    }
    ctx->pc = 0x799928u;
    // 0x799928: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799928u;
    {
        const bool branch_taken_0x799928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799928) {
            ctx->pc = 0x79992Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799928u;
            // 0x79992c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799940u;
            goto label_799940;
        }
    }
    ctx->pc = 0x799930u;
    // 0x799930: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799930u;
    {
        const bool branch_taken_0x799930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799930) {
            ctx->pc = 0x799950u;
            goto label_799950;
        }
    }
    ctx->pc = 0x799938u;
    // 0x799938: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x799938u;
    {
        const bool branch_taken_0x799938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799938u;
        // 0x79993c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799938) {
            ctx->pc = 0x799A0Cu;
            goto label_799a0c;
        }
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x5062002d  beql        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x799940u;
    {
        const bool branch_taken_0x799940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x799940) {
            ctx->pc = 0x799944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799940u;
            // 0x799944: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999F8u;
            goto label_7999f8;
        }
    }
    ctx->pc = 0x799948u;
    // 0x799948: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x799948u;
    {
        const bool branch_taken_0x799948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799948u;
        // 0x79994c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799948) {
            ctx->pc = 0x799A0Cu;
            goto label_799a0c;
        }
    }
    ctx->pc = 0x799950u;
label_799950:
    // 0x799950: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799950u;
    SET_GPR_U32(ctx, 31, 0x799958u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799950u, 0x799958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79995c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799960: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x799964: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799968: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x799968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79996c: 0xc06c7c0  jal         func_1B1F00
    ctx->pc = 0x79996Cu;
    SET_GPR_U32(ctx, 31, 0x799974u);
    ctx->pc = 0x799970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79996Cu;
    // 0x799970: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F00u, 0x79996Cu, 0x799974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799974u;
label_799974:
    // 0x799974: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79997c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79997Cu;
    {
        const bool branch_taken_0x79997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79997c) {
            ctx->pc = 0x799A08u;
            goto label_799a08;
        }
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799988: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799988u;
    {
        const bool branch_taken_0x799988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799988u;
        // 0x79998c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799988) {
            ctx->pc = 0x7999A8u;
            goto label_7999a8;
        }
    }
    ctx->pc = 0x799990u;
    // 0x799990: 0xc06c7c0  jal         func_1B1F00
    ctx->pc = 0x799990u;
    SET_GPR_U32(ctx, 31, 0x799998u);
    ctx->pc = 0x799994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799990u;
    // 0x799994: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F00u, 0x799990u, 0x799998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799998u;
label_799998:
    // 0x799998: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79999c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7999a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7999A0u;
    {
        const bool branch_taken_0x7999a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A0u;
        // 0x7999a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a0) {
            ctx->pc = 0x7999ACu;
            goto label_7999ac;
        }
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x7999a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_7999ac:
    // 0x7999ac: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x7999acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7999b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7999b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7999b4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x7999b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7999b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7999bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7999bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7999c0: 0x0  nop
    ctx->pc = 0x7999c0u;
    // NOP
    // 0x7999c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x7999C4u;
    {
        const bool branch_taken_0x7999c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7999c4) {
            ctx->pc = 0x7999D4u;
            goto label_7999d4;
        }
    }
    ctx->pc = 0x7999CCu;
    // 0x7999cc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x7999d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7999d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7999d4:
    // 0x7999d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x7999d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7999dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7999dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7999e0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x7999e4: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x7999e4u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[2]);
    // 0x7999e8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x7999E8u;
    SET_GPR_U32(ctx, 31, 0x7999F0u);
    ctx->pc = 0x7999ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E8u;
    // 0x7999ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x7999E8u, 0x7999F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F0u;
label_7999f0:
    // 0x7999f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7999F0u;
    {
        const bool branch_taken_0x7999f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F0u;
        // 0x7999f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f0) {
            ctx->pc = 0x799A0Cu;
            goto label_799a0c;
        }
    }
    ctx->pc = 0x7999F8u;
label_7999f8:
    // 0x7999f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7999fc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x7999fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x799a00: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799a04: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x799a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_799a08:
    // 0x799a08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799a0c:
    // 0x799a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799a10: 0x3e00008  jr          $ra
    ctx->pc = 0x799A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A10u;
        // 0x799a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A18u;
}
} // namespace gh_r305
