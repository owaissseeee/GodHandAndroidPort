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

// Function: cObjSimple_UpdateHandMesh
// Address: 0x2b6da0 - 0x2b6fe8
void cObjSimple_UpdateHandMesh_0x2b6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_UpdateHandMesh_0x2b6da0");
#endif

    switch (ctx->pc) {
        case 0x2b6e1cu: goto label_2b6e1c;
        case 0x2b6e34u: goto label_2b6e34;
        case 0x2b6e4cu: goto label_2b6e4c;
        case 0x2b6e98u: goto label_2b6e98;
        case 0x2b6eacu: goto label_2b6eac;
        case 0x2b6ec4u: goto label_2b6ec4;
        case 0x2b6edcu: goto label_2b6edc;
        case 0x2b6ef4u: goto label_2b6ef4;
        case 0x2b6f40u: goto label_2b6f40;
        case 0x2b6f5cu: goto label_2b6f5c;
        case 0x2b6f70u: goto label_2b6f70;
        case 0x2b6f84u: goto label_2b6f84;
        case 0x2b6f98u: goto label_2b6f98;
        case 0x2b6facu: goto label_2b6fac;
        case 0x2b6fc0u: goto label_2b6fc0;
        default: break;
    }

    ctx->pc = 0x2b6da0u;

    // 0x2b6da0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b6da4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2b6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2b6da8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b6da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b6dac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b6dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b6db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6db4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b6db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b6db8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b6db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b6dbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6dc0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2b6dc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b6dc4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2b6dc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b6dc8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2b6dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b6dcc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x2b6dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b6dd0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b6dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b6dd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6DD4u;
    {
        const bool branch_taken_0x2b6dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DD4u;
        // 0x2b6dd8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dd4) {
            ctx->pc = 0x2B6DE8u;
            goto label_2b6de8;
        }
    }
    ctx->pc = 0x2B6DDCu;
    // 0x2b6ddc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b6de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6DE0u;
    {
        const bool branch_taken_0x2b6de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DE0u;
        // 0x2b6de4: 0x8c43006c  lw          $v1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6de0) {
            ctx->pc = 0x2B6DECu;
            goto label_2b6dec;
        }
    }
    ctx->pc = 0x2B6DE8u;
label_2b6de8:
    // 0x2b6de8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b6de8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6dec:
    // 0x2b6dec: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2B6DECu;
    {
        const bool branch_taken_0x2b6dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DECu;
        // 0x2b6df0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dec) {
            ctx->pc = 0x2B6F48u;
            goto label_2b6f48;
        }
    }
    ctx->pc = 0x2B6DF4u;
    // 0x2b6df4: 0xc4740100  lwc1        $f20, 0x100($v1)
    ctx->pc = 0x2b6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6df8: 0x2453b4d8  addiu       $s3, $v0, -0x4B28
    ctx->pc = 0x2b6df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948056));
    // 0x2b6dfc: 0xc4750108  lwc1        $f21, 0x108($v1)
    ctx->pc = 0x2b6dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b6e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e08: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x2b6e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x2b6e0c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x2b6e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x2b6e10: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2b6e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2b6e14: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6E14u;
    SET_GPR_U32(ctx, 31, 0x2B6E1Cu);
    ctx->pc = 0x2B6E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E14u;
    // 0x2b6e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6E14u, 0x2B6E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E1Cu;
label_2b6e1c:
    // 0x2b6e1c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2b6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2b6e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e24: 0x2472b4e0  addiu       $s2, $v1, -0x4B20
    ctx->pc = 0x2b6e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948064));
    // 0x2b6e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e2c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6E2Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E34u);
    ctx->pc = 0x2B6E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E2Cu;
    // 0x2b6e30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6E2Cu, 0x2B6E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E34u;
label_2b6e34:
    // 0x2b6e34: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2b6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2b6e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e3c: 0x2471b4e8  addiu       $s1, $v1, -0x4B18
    ctx->pc = 0x2b6e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948072));
    // 0x2b6e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e44: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6E44u;
    SET_GPR_U32(ctx, 31, 0x2B6E4Cu);
    ctx->pc = 0x2B6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E44u;
    // 0x2b6e48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6E44u, 0x2B6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E4Cu;
label_2b6e4c:
    // 0x2b6e4c: 0x0  nop
    ctx->pc = 0x2b6e4cu;
    // NOP
    // 0x2b6e50: 0x0  nop
    ctx->pc = 0x2b6e50u;
    // NOP
    // 0x2b6e54: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x2b6e54u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[22]);
    // 0x2b6e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6e5c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6e5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b6e60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2b6e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6e64: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6E64u;
    {
        const bool branch_taken_0x2b6e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E64u;
        // 0x2b6e68: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e64) {
            ctx->pc = 0x2B6E88u;
            goto label_2b6e88;
        }
    }
    ctx->pc = 0x2B6E6Cu;
    // 0x2b6e6c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6E6Cu;
    {
        const bool branch_taken_0x2b6e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e6c) {
            ctx->pc = 0x2B6E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E6Cu;
            // 0x2b6e70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E8Cu;
            goto label_2b6e8c;
        }
    }
    ctx->pc = 0x2B6E74u;
    // 0x2b6e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6e78: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6E78u;
    {
        const bool branch_taken_0x2b6e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b6e78) {
            ctx->pc = 0x2B6E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E78u;
            // 0x2b6e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6EA0u;
            goto label_2b6ea0;
        }
    }
    ctx->pc = 0x2B6E80u;
    // 0x2b6e80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6E80u;
    {
        const bool branch_taken_0x2b6e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E80u;
        // 0x2b6e84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e80) {
            ctx->pc = 0x2B6E8Cu;
            goto label_2b6e8c;
        }
    }
    ctx->pc = 0x2B6E88u;
label_2b6e88:
    // 0x2b6e88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b6e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6e8c:
    // 0x2b6e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e90: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6E90u;
    SET_GPR_U32(ctx, 31, 0x2B6E98u);
    ctx->pc = 0x2B6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E90u;
    // 0x2b6e94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6E90u, 0x2B6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E98u;
label_2b6e98:
    // 0x2b6e98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6E98u;
    {
        const bool branch_taken_0x2b6e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E98u;
        // 0x2b6e9c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e98) {
            ctx->pc = 0x2B6EB0u;
            goto label_2b6eb0;
        }
    }
    ctx->pc = 0x2B6EA0u;
label_2b6ea0:
    // 0x2b6ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ea4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6EA4u;
    SET_GPR_U32(ctx, 31, 0x2B6EACu);
    ctx->pc = 0x2B6EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EA4u;
    // 0x2b6ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6EA4u, 0x2B6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EACu;
label_2b6eac:
    // 0x2b6eac: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b6eb0:
    // 0x2b6eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6eb4: 0x2453b4f0  addiu       $s3, $v0, -0x4B10
    ctx->pc = 0x2b6eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x2b6eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ebc: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6EBCu;
    SET_GPR_U32(ctx, 31, 0x2B6EC4u);
    ctx->pc = 0x2B6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EBCu;
    // 0x2b6ec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6EBCu, 0x2B6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EC4u;
label_2b6ec4:
    // 0x2b6ec4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2b6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2b6ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ecc: 0x2472b4f8  addiu       $s2, $v1, -0x4B08
    ctx->pc = 0x2b6eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948088));
    // 0x2b6ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ed4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6ED4u;
    SET_GPR_U32(ctx, 31, 0x2B6EDCu);
    ctx->pc = 0x2B6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6ED4u;
    // 0x2b6ed8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6ED4u, 0x2B6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EDCu;
label_2b6edc:
    // 0x2b6edc: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2b6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2b6ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ee4: 0x2471b500  addiu       $s1, $v1, -0x4B00
    ctx->pc = 0x2b6ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948096));
    // 0x2b6ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6eec: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6EECu;
    SET_GPR_U32(ctx, 31, 0x2B6EF4u);
    ctx->pc = 0x2B6EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EECu;
    // 0x2b6ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6EECu, 0x2B6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EF4u;
label_2b6ef4:
    // 0x2b6ef4: 0x0  nop
    ctx->pc = 0x2b6ef4u;
    // NOP
    // 0x2b6ef8: 0x0  nop
    ctx->pc = 0x2b6ef8u;
    // NOP
    // 0x2b6efc: 0x4616a803  div.s       $f0, $f21, $f22
    ctx->pc = 0x2b6efcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[22]);
    // 0x2b6f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6f04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6f08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6f0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6F0Cu;
    {
        const bool branch_taken_0x2b6f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F0Cu;
        // 0x2b6f10: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f0c) {
            ctx->pc = 0x2B6F30u;
            goto label_2b6f30;
        }
    }
    ctx->pc = 0x2B6F14u;
    // 0x2b6f14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6F14u;
    {
        const bool branch_taken_0x2b6f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F14u;
        // 0x2b6f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f14) {
            ctx->pc = 0x2B6F28u;
            goto label_2b6f28;
        }
    }
    ctx->pc = 0x2B6F1Cu;
    // 0x2b6f1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6f20: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6F20u;
    {
        const bool branch_taken_0x2b6f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F20u;
        // 0x2b6f24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f20) {
            ctx->pc = 0x2B6F38u;
            goto label_2b6f38;
        }
    }
    ctx->pc = 0x2B6F28u;
label_2b6f28:
    // 0x2b6f28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6F28u;
    {
        const bool branch_taken_0x2b6f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F28u;
        // 0x2b6f2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f28) {
            ctx->pc = 0x2B6F38u;
            goto label_2b6f38;
        }
    }
    ctx->pc = 0x2B6F30u;
label_2b6f30:
    // 0x2b6f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b6f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f38:
    // 0x2b6f38: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6F38u;
    SET_GPR_U32(ctx, 31, 0x2B6F40u);
    ctx->pc = 0x2B6F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F38u;
    // 0x2b6f3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6F38u, 0x2B6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F40u;
label_2b6f40:
    // 0x2b6f40: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B6F40u;
    {
        const bool branch_taken_0x2b6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F40u;
        // 0x2b6f44: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f40) {
            ctx->pc = 0x2B6FC4u;
            goto label_2b6fc4;
        }
    }
    ctx->pc = 0x2B6F48u;
label_2b6f48:
    // 0x2b6f48: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f50: 0x24a5b4d8  addiu       $a1, $a1, -0x4B28
    ctx->pc = 0x2b6f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948056));
    // 0x2b6f54: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6F54u;
    SET_GPR_U32(ctx, 31, 0x2B6F5Cu);
    ctx->pc = 0x2B6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F54u;
    // 0x2b6f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6F54u, 0x2B6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F5Cu;
label_2b6f5c:
    // 0x2b6f5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f64: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20
    ctx->pc = 0x2b6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
    // 0x2b6f68: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6F68u;
    SET_GPR_U32(ctx, 31, 0x2B6F70u);
    ctx->pc = 0x2B6F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F68u;
    // 0x2b6f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6F68u, 0x2B6F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F70u;
label_2b6f70:
    // 0x2b6f70: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f78: 0x24a5b4e8  addiu       $a1, $a1, -0x4B18
    ctx->pc = 0x2b6f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948072));
    // 0x2b6f7c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B6F84u);
    ctx->pc = 0x2B6F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F7Cu;
    // 0x2b6f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6F7Cu, 0x2B6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F84u;
label_2b6f84:
    // 0x2b6f84: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f8c: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10
    ctx->pc = 0x2b6f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
    // 0x2b6f90: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6F90u;
    SET_GPR_U32(ctx, 31, 0x2B6F98u);
    ctx->pc = 0x2B6F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F90u;
    // 0x2b6f94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6F90u, 0x2B6F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F98u;
label_2b6f98:
    // 0x2b6f98: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fa0: 0x24a5b4f8  addiu       $a1, $a1, -0x4B08
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948088));
    // 0x2b6fa4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6FA4u;
    SET_GPR_U32(ctx, 31, 0x2B6FACu);
    ctx->pc = 0x2B6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FA4u;
    // 0x2b6fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6FA4u, 0x2B6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FACu;
label_2b6fac:
    // 0x2b6fac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fb4: 0x24a5b500  addiu       $a1, $a1, -0x4B00
    ctx->pc = 0x2b6fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948096));
    // 0x2b6fb8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B6FB8u;
    SET_GPR_U32(ctx, 31, 0x2B6FC0u);
    ctx->pc = 0x2B6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FB8u;
    // 0x2b6fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B6FB8u, 0x2B6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FC0u;
label_2b6fc0:
    // 0x2b6fc0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b6fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6fc4:
    // 0x2b6fc4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b6fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6fc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b6fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6fcc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b6fccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6fd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6fd4: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2b6fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b6fd8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2b6fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6fdc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b6fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FE0u;
        // 0x2b6fe4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6FE8u;
}
