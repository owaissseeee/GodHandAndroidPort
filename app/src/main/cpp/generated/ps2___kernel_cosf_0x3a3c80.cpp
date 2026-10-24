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

// Function: __kernel_cosf
// Address: 0x3a3c80 - 0x3a3dd8
void ps2___kernel_cosf_0x3a3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_cosf_0x3a3c80");
#endif

    ctx->pc = 0x3a3c80u;

    // 0x3a3c80: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a3c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a3c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c88: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a3c8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a3c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a3c90: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x3a3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x3a3c94: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a3c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a3c98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a3c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a3c9c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a3c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a3ca0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3CA0u;
    {
        const bool branch_taken_0x3a3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3ca0) {
            ctx->pc = 0x3A3CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3CA0u;
            // 0x3a3ca4: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3CD0u;
            goto label_3a3cd0;
        }
    }
    ctx->pc = 0x3A3CA8u;
    // 0x3a3ca8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a3cac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a3cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3cb0: 0x0  nop
    ctx->pc = 0x3a3cb0u;
    // NOP
    // 0x3a3cb4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3CB4u;
    {
        const bool branch_taken_0x3a3cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3cb4) {
            ctx->pc = 0x3A3CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3CB4u;
            // 0x3a3cb8: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3CD0u;
            goto label_3a3cd0;
        }
    }
    ctx->pc = 0x3A3CBCu;
    // 0x3a3cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a3cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3CCCu;
    // 0x3a3ccc: 0x0  nop
    ctx->pc = 0x3a3cccu;
    // NOP
label_3a3cd0:
    // 0x3a3cd0: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x3a3cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x3a3cd4: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x3a3cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x3a3cd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3cdc: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x3a3cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x3a3ce0: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x3a3ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x3a3ce4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3ce8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3a3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x3a3cec: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x3a3cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x3a3cf0: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x3a3cf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x3a3cf4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a3cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a3cf8: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x3a3cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x3a3cfc: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3d00: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x3a3d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x3a3d04: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x3a3d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x3a3d08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3d0c: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x3a3d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x3a3d10: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x3a3d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x3a3d14: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a3d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a3d18: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a3d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a3d1c: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x3a3d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x3a3d20: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a3d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a3d24: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3a3d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a3d28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a3d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a3d2c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3d30: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a3d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3a3d34: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3d38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a3d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a3d3c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3d40: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3a3d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3a3d44: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3d48: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a3d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3a3d4c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A3D4Cu;
    {
        const bool branch_taken_0x3a3d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D4Cu;
        // 0x3a3d50: 0x46003042  mul.s       $f1, $f6, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d4c) {
            ctx->pc = 0x3A3D80u;
            goto label_3a3d80;
        }
    }
    ctx->pc = 0x3A3D54u;
    // 0x3a3d54: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3a3d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3a3d58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a3d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3d60: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x3a3d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x3a3d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a3d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3d68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a3d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a3d6c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3d70: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3a3d70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3a3d74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a3d74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3a3d78: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D78u;
        // 0x3a3d7c: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3D80u;
label_3a3d80:
    // 0x3a3d80: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x3a3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x3a3d84: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a3d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a3d88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3D88u;
    {
        const bool branch_taken_0x3a3d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D88u;
        // 0x3a3d8c: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d88) {
            ctx->pc = 0x3A3D9Cu;
            goto label_3a3d9c;
        }
    }
    ctx->pc = 0x3A3D90u;
    // 0x3a3d90: 0x3c023e90  lui         $v0, 0x3E90
    ctx->pc = 0x3a3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16016 << 16));
    // 0x3a3d94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3D94u;
    {
        const bool branch_taken_0x3a3d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3d94) {
            ctx->pc = 0x3A3DA0u;
            goto label_3a3da0;
        }
    }
    ctx->pc = 0x3A3D9Cu;
label_3a3d9c:
    // 0x3a3d9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3a3da0:
    // 0x3a3da0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a3da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3da8: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x3a3da8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3a3dac: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x3a3dacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x3a3db0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a3db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3db4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3db8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3dbc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3a3dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a3dc0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3a3dc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3a3dc4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3a3dc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3a3dc8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3a3dc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3a3dcc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a3dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a3dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DD0u;
        // 0x3a3dd4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3DD8u;
}
