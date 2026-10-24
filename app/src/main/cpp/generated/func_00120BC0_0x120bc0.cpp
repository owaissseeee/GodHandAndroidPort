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

// Function: func_00120BC0
// Address: 0x120bc0 - 0x120e00
void func_00120BC0_0x120bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00120BC0_0x120bc0");
#endif

    switch (ctx->pc) {
        case 0x120c0cu: goto label_120c0c;
        case 0x120c18u: goto label_120c18;
        case 0x120c3cu: goto label_120c3c;
        case 0x120c44u: goto label_120c44;
        case 0x120c6cu: goto label_120c6c;
        case 0x120c7cu: goto label_120c7c;
        case 0x120cc8u: goto label_120cc8;
        case 0x120cdcu: goto label_120cdc;
        case 0x120d0cu: goto label_120d0c;
        case 0x120d18u: goto label_120d18;
        case 0x120d44u: goto label_120d44;
        case 0x120d50u: goto label_120d50;
        case 0x120d74u: goto label_120d74;
        case 0x120d7cu: goto label_120d7c;
        case 0x120db0u: goto label_120db0;
        case 0x120ddcu: goto label_120ddc;
        case 0x120de8u: goto label_120de8;
        default: break;
    }

    ctx->pc = 0x120bc0u;

    // 0x120bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120bc4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x120bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x120bc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x120bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x120bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x120bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x120bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120bdc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x120bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x120be0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x120be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x120be4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x120be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x120be8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x120be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x120bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bf4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x120bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x120bf8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x120bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x120bfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x120bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x120c00: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x120c00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x120c04: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x120C04u;
    SET_GPR_U32(ctx, 31, 0x120C0Cu);
    ctx->pc = 0x120C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C04u;
    // 0x120c08: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x120C04u, 0x120C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C0Cu;
label_120c0c:
    // 0x120c0c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x120c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x120c10: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x120C10u;
    SET_GPR_U32(ctx, 31, 0x120C18u);
    ctx->pc = 0x120C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C10u;
    // 0x120c14: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x120C10u, 0x120C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C18u;
label_120c18:
    // 0x120c18: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x120c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x120c1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120C1Cu;
    {
        const bool branch_taken_0x120c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C1Cu;
        // 0x120c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c1c) {
            ctx->pc = 0x120C34u;
            goto label_120c34;
        }
    }
    ctx->pc = 0x120C24u;
    // 0x120c24: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x120C24u;
    {
        const bool branch_taken_0x120c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x120c24) {
            ctx->pc = 0x120D6Cu;
            goto label_120d6c;
        }
    }
    ctx->pc = 0x120C2Cu;
    // 0x120c2c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x120C2Cu;
    {
        const bool branch_taken_0x120c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C2Cu;
        // 0x120c30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c2c) {
            ctx->pc = 0x120DECu;
            goto label_120dec;
        }
    }
    ctx->pc = 0x120C34u;
label_120c34:
    // 0x120c34: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x120C34u;
    SET_GPR_U32(ctx, 31, 0x120C3Cu);
    ctx->pc = 0x120C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C34u;
    // 0x120c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x120C34u, 0x120C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C3Cu;
label_120c3c:
    // 0x120c3c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x120C3Cu;
    SET_GPR_U32(ctx, 31, 0x120C44u);
    ctx->pc = 0x120C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C3Cu;
    // 0x120c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x120C3Cu, 0x120C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C44u;
label_120c44:
    // 0x120c44: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x120C44u;
    {
        const bool branch_taken_0x120c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120c44) {
            ctx->pc = 0x120C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120C44u;
            // 0x120c48: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120C70u;
            goto label_120c70;
        }
    }
    ctx->pc = 0x120C4Cu;
    // 0x120c4c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x120c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x120c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120c54: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x120c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120c58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x120c5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120c60: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x120c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x120c64: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x120C64u;
    SET_GPR_U32(ctx, 31, 0x120C6Cu);
    ctx->pc = 0x120C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C64u;
    // 0x120c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x120C64u, 0x120C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C6Cu;
label_120c6c:
    // 0x120c6c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x120c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_120c70:
    // 0x120c70: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x120c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x120c74: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x120C74u;
    SET_GPR_U32(ctx, 31, 0x120C7Cu);
    ctx->pc = 0x120C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C74u;
    // 0x120c78: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x120C74u, 0x120C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C7Cu;
label_120c7c:
    // 0x120c7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x120c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x120c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120c84: 0x3c013cdf  lui         $at, 0x3CDF
    ctx->pc = 0x120c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15583 << 16));
    // 0x120c88: 0x3421a440  ori         $at, $at, 0xA440
    ctx->pc = 0x120c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42048);
    // 0x120c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x120c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120c90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120c94: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x120c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120c98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x120c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120c9c: 0x3c013faf  lui         $at, 0x3FAF
    ctx->pc = 0x120c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16303 << 16));
    // 0x120ca0: 0x34213b64  ori         $at, $at, 0x3B64
    ctx->pc = 0x120ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15204);
    // 0x120ca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120cb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120cb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x120cb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x120cb8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x120cb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x120cbc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x120cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x120cc0: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x120CC0u;
    SET_GPR_U32(ctx, 31, 0x120CC8u);
    ctx->pc = 0x120CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120CC0u;
    // 0x120cc4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x120CC0u, 0x120CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120CC8u;
label_120cc8:
    // 0x120cc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x120cc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x120ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120cd0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x120cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x120cd4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x120CD4u;
    SET_GPR_U32(ctx, 31, 0x120CDCu);
    ctx->pc = 0x120CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120CD4u;
    // 0x120cd8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x120CD4u, 0x120CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120CDCu;
label_120cdc:
    // 0x120cdc: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x120cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x120ce0: 0x1c40000f  bgtz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x120CE0u;
    {
        const bool branch_taken_0x120ce0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x120CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CE0u;
        // 0x120ce4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ce0) {
            ctx->pc = 0x120D20u;
            goto label_120d20;
        }
    }
    ctx->pc = 0x120CE8u;
    // 0x120ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120cec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x120cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x120cf0: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x120cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x120cf4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x120cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x120cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120cfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x120cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x120d00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d04: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x120D04u;
    SET_GPR_U32(ctx, 31, 0x120D0Cu);
    ctx->pc = 0x120D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D04u;
    // 0x120d08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x120D04u, 0x120D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D0Cu;
label_120d0c:
    // 0x120d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d10: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x120D10u;
    SET_GPR_U32(ctx, 31, 0x120D18u);
    ctx->pc = 0x120D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D10u;
    // 0x120d14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x120D10u, 0x120D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D18u;
label_120d18:
    // 0x120d18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x120D18u;
    {
        const bool branch_taken_0x120d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D18u;
        // 0x120d1c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d18) {
            ctx->pc = 0x120D54u;
            goto label_120d54;
        }
    }
    ctx->pc = 0x120D20u;
label_120d20:
    // 0x120d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d24: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x120d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x120d28: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x120d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x120d2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x120d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x120d30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x120d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x120d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d3c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x120D3Cu;
    SET_GPR_U32(ctx, 31, 0x120D44u);
    ctx->pc = 0x120D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D3Cu;
    // 0x120d40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x120D3Cu, 0x120D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D44u;
label_120d44:
    // 0x120d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d48: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x120D48u;
    SET_GPR_U32(ctx, 31, 0x120D50u);
    ctx->pc = 0x120D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D48u;
    // 0x120d4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x120D48u, 0x120D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D50u;
label_120d50:
    // 0x120d50: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x120d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_120d54:
    // 0x120d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x120d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120d58: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x120d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x120d5c: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x120d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x120d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120d64: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x120d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x120d68: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x120d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_120d6c:
    // 0x120d6c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x120D6Cu;
    SET_GPR_U32(ctx, 31, 0x120D74u);
    ctx->pc = 0x120D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D6Cu;
    // 0x120d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x120D6Cu, 0x120D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D74u;
label_120d74:
    // 0x120d74: 0xc055f06  jal         func_157C18
    ctx->pc = 0x120D74u;
    SET_GPR_U32(ctx, 31, 0x120D7Cu);
    ctx->pc = 0x120D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D74u;
    // 0x120d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x120D74u, 0x120D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D7Cu;
label_120d7c:
    // 0x120d7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x120D7Cu;
    {
        const bool branch_taken_0x120d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d7c) {
            ctx->pc = 0x120DC8u;
            goto label_120dc8;
        }
    }
    ctx->pc = 0x120D84u;
    // 0x120d84: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x120d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x120d88: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120D88u;
    {
        const bool branch_taken_0x120d88 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x120D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D88u;
        // 0x120d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d88) {
            ctx->pc = 0x120DA4u;
            goto label_120da4;
        }
    }
    ctx->pc = 0x120D90u;
    // 0x120d90: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x120d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x120d94: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x120d94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x120d98: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x120d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x120d9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x120D9Cu;
    {
        const bool branch_taken_0x120d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D9Cu;
        // 0x120da0: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d9c) {
            ctx->pc = 0x120DC8u;
            goto label_120dc8;
        }
    }
    ctx->pc = 0x120DA4u;
label_120da4:
    // 0x120da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120da8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x120DA8u;
    SET_GPR_U32(ctx, 31, 0x120DB0u);
    ctx->pc = 0x120DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DA8u;
    // 0x120dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x120DA8u, 0x120DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DB0u;
label_120db0:
    // 0x120db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120db4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x120db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x120db8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x120db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x120dbc: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x120dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x120dc0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x120dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x120dc4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x120dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_120dc8:
    // 0x120dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120dcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120dd4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x120DD4u;
    SET_GPR_U32(ctx, 31, 0x120DDCu);
    ctx->pc = 0x120DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DD4u;
    // 0x120dd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x120DD4u, 0x120DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DDCu;
label_120ddc:
    // 0x120ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120de0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x120DE0u;
    SET_GPR_U32(ctx, 31, 0x120DE8u);
    ctx->pc = 0x120DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DE0u;
    // 0x120de4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x120DE0u, 0x120DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DE8u;
label_120de8:
    // 0x120de8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x120de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_120dec:
    // 0x120dec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x120decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120df4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x120df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120df8: 0x3e00008  jr          $ra
    ctx->pc = 0x120DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DF8u;
        // 0x120dfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120E00u;
}
