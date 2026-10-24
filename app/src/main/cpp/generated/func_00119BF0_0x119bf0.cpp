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

// Function: func_00119BF0
// Address: 0x119bf0 - 0x11a060
void func_00119BF0_0x119bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00119BF0_0x119bf0");
#endif

    switch (ctx->pc) {
        case 0x119c40u: goto label_119c40;
        case 0x119c50u: goto label_119c50;
        case 0x119c5cu: goto label_119c5c;
        case 0x119c9cu: goto label_119c9c;
        case 0x119ca4u: goto label_119ca4;
        case 0x119cb4u: goto label_119cb4;
        case 0x119cf4u: goto label_119cf4;
        case 0x119d2cu: goto label_119d2c;
        case 0x119d44u: goto label_119d44;
        case 0x119d54u: goto label_119d54;
        case 0x119d70u: goto label_119d70;
        case 0x119d78u: goto label_119d78;
        case 0x119da0u: goto label_119da0;
        case 0x119dc8u: goto label_119dc8;
        case 0x119f74u: goto label_119f74;
        case 0x119f7cu: goto label_119f7c;
        case 0x119f84u: goto label_119f84;
        case 0x119fb0u: goto label_119fb0;
        case 0x119fbcu: goto label_119fbc;
        case 0x119fd8u: goto label_119fd8;
        case 0x119ff4u: goto label_119ff4;
        case 0x119ffcu: goto label_119ffc;
        case 0x11a010u: goto label_11a010;
        case 0x11a034u: goto label_11a034;
        case 0x11a040u: goto label_11a040;
        default: break;
    }

    ctx->pc = 0x119bf0u;

    // 0x119bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x119bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119bf4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x119bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x119bf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x119bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x119bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x119bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x119c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x119c04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x119c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119c10: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x119c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x119c14: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x119c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x119c18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c1c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x119c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x119c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119c24: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x119c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x119c28: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x119c2c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x119c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x119c30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119c34: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x119c38: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x119C38u;
    SET_GPR_U32(ctx, 31, 0x119C40u);
    ctx->pc = 0x119C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C38u;
    // 0x119c3c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x119C38u, 0x119C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C40u;
label_119c40:
    // 0x119c40: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x119c44: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x119c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x119c48: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x119C48u;
    SET_GPR_U32(ctx, 31, 0x119C50u);
    ctx->pc = 0x119C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C48u;
    // 0x119c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x119C48u, 0x119C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C50u;
label_119c50:
    // 0x119c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c54: 0xc0a480c  jal         func_292030
    ctx->pc = 0x119C54u;
    SET_GPR_U32(ctx, 31, 0x119C5Cu);
    ctx->pc = 0x119C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C54u;
    // 0x119c58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x119C54u, 0x119C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C5Cu;
label_119c5c:
    // 0x119c5c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x119c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x119c60: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x119c64: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x119c64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119c6c: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x119c6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x119c70: 0x108000f3  beqz        $a0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x119C70u;
    {
        const bool branch_taken_0x119c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C70u;
        // 0x119c74: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c70) {
            ctx->pc = 0x11A040u;
            goto label_11a040;
        }
    }
    ctx->pc = 0x119C78u;
    // 0x119c78: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x119c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x119c7c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x119c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x119c80: 0x2442c530  addiu       $v0, $v0, -0x3AD0
    ctx->pc = 0x119c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
    // 0x119c84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119c88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119c8c: 0x800008  jr          $a0
    ctx->pc = 0x119C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119C94u: goto label_119c94;
            case 0x119D68u: goto label_119d68;
            case 0x119D8Cu: goto label_119d8c;
            case 0x119DC0u: goto label_119dc0;
            case 0x119FC4u: goto label_119fc4;
            case 0x119FECu: goto label_119fec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x119C94u;
label_119c94:
    // 0x119c94: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x119C94u;
    SET_GPR_U32(ctx, 31, 0x119C9Cu);
    ctx->pc = 0x119C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C94u;
    // 0x119c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x119C94u, 0x119C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C9Cu;
label_119c9c:
    // 0x119c9c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x119C9Cu;
    SET_GPR_U32(ctx, 31, 0x119CA4u);
    ctx->pc = 0x119CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C9Cu;
    // 0x119ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x119C9Cu, 0x119CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CA4u;
label_119ca4:
    // 0x119ca4: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x119ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x119ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cac: 0xc049396  jal         func_124E58
    ctx->pc = 0x119CACu;
    SET_GPR_U32(ctx, 31, 0x119CB4u);
    ctx->pc = 0x119CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CACu;
    // 0x119cb0: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x119CACu, 0x119CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CB4u;
label_119cb4:
    // 0x119cb4: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x119CB4u;
    {
        const bool branch_taken_0x119cb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x119cb4) {
            ctx->pc = 0x119D30u;
            goto label_119d30;
        }
    }
    ctx->pc = 0x119CBCu;
    // 0x119cbc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x119cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x119cc0: 0x3c01bc24  lui         $at, 0xBC24
    ctx->pc = 0x119cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48164 << 16));
    // 0x119cc4: 0x342100fc  ori         $at, $at, 0xFC
    ctx->pc = 0x119cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)252);
    // 0x119cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119ccc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cd0: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x119cd4: 0x3421b702  ori         $at, $at, 0xB702
    ctx->pc = 0x119cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46850);
    // 0x119cd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119cdc: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x119cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x119ce0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x119ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x119ce4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x119ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ce8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x119ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119cec: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x119CECu;
    SET_GPR_U32(ctx, 31, 0x119CF4u);
    ctx->pc = 0x119CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CECu;
    // 0x119cf0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x119CECu, 0x119CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CF4u;
label_119cf4:
    // 0x119cf4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x119cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119cf8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x119cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119cfc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x119cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x119d00: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x119d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x119d04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119d08: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x119d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x119d0c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x119d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119d10: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x119d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119d14: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x119d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x119d18: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x119d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119d1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119d20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x119d20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x119d24: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x119D24u;
    SET_GPR_U32(ctx, 31, 0x119D2Cu);
    ctx->pc = 0x119D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D24u;
    // 0x119d28: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x119D24u, 0x119D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D2Cu;
label_119d2c:
    // 0x119d2c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x119d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_119d30:
    // 0x119d30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x119d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d38: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x119d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x119d3c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x119D3Cu;
    SET_GPR_U32(ctx, 31, 0x119D44u);
    ctx->pc = 0x119D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D3Cu;
    // 0x119d40: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x119D3Cu, 0x119D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D44u;
label_119d44:
    // 0x119d44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x119d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x119d48: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x119d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x119d4c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x119D4Cu;
    SET_GPR_U32(ctx, 31, 0x119D54u);
    ctx->pc = 0x119D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D4Cu;
    // 0x119d50: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x119D4Cu, 0x119D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D54u;
label_119d54:
    // 0x119d54: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x119d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119d5c: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x119d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x119d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119d64: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x119d64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_119d68:
    // 0x119d68: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x119D68u;
    SET_GPR_U32(ctx, 31, 0x119D70u);
    ctx->pc = 0x119D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D68u;
    // 0x119d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x119D68u, 0x119D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D70u;
label_119d70:
    // 0x119d70: 0xc055f06  jal         func_157C18
    ctx->pc = 0x119D70u;
    SET_GPR_U32(ctx, 31, 0x119D78u);
    ctx->pc = 0x119D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D70u;
    // 0x119d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x119D70u, 0x119D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D78u;
label_119d78:
    // 0x119d78: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x119D78u;
    {
        const bool branch_taken_0x119d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119d78) {
            ctx->pc = 0x119F9Cu;
            goto label_119f9c;
        }
    }
    ctx->pc = 0x119D80u;
    // 0x119d80: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x119d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119d84: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x119D84u;
    {
        const bool branch_taken_0x119d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D84u;
        // 0x119d88: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d84) {
            ctx->pc = 0x119F98u;
            goto label_119f98;
        }
    }
    ctx->pc = 0x119D8Cu;
label_119d8c:
    // 0x119d8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x119d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d94: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x119d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x119d98: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x119D98u;
    SET_GPR_U32(ctx, 31, 0x119DA0u);
    ctx->pc = 0x119D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D98u;
    // 0x119d9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x119D98u, 0x119DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DA0u;
label_119da0:
    // 0x119da0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x119da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119da4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x119da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x119da8: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x119da8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x119dac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x119dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x119db0: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x119db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x119db4: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x119db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x119db8: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x119db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x119dbc: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x119dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_119dc0:
    // 0x119dc0: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x119DC0u;
    SET_GPR_U32(ctx, 31, 0x119DC8u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x119DC0u, 0x119DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DC8u;
label_119dc8:
    // 0x119dc8: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x119dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x119dcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119DCCu;
    {
        const bool branch_taken_0x119dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DCCu;
        // 0x119dd0: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dcc) {
            ctx->pc = 0x119DDCu;
            goto label_119ddc;
        }
    }
    ctx->pc = 0x119DD4u;
    // 0x119dd4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x119dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119dd8: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x119dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_119ddc:
    // 0x119ddc: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x119ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x119de0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119DE0u;
    {
        const bool branch_taken_0x119de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DE0u;
        // 0x119de4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119de0) {
            ctx->pc = 0x119DECu;
            goto label_119dec;
        }
    }
    ctx->pc = 0x119DE8u;
    // 0x119de8: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x119de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_119dec:
    // 0x119dec: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x119decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x119df0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x119df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x119df4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119df8: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x119df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x119dfc: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x119dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x119e00: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x119e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x119e04: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x119E04u;
    {
        const bool branch_taken_0x119e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x119e04) {
            ctx->pc = 0x119E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E04u;
            // 0x119e08: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119EC8u;
            goto label_119ec8;
        }
    }
    ctx->pc = 0x119E0Cu;
    // 0x119e0c: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x119e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x119e10: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x119e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x119e14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119E14u;
    {
        const bool branch_taken_0x119e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E14u;
        // 0x119e18: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e14) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119E1Cu;
    // 0x119e1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119e20: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x119e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
    // 0x119e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119e28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119e2c: 0x800008  jr          $a0
    ctx->pc = 0x119E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119E34u: goto label_119e34;
            case 0x119E3Cu: goto label_119e3c;
            case 0x119E44u: goto label_119e44;
            case 0x119E4Cu: goto label_119e4c;
            case 0x119E54u: goto label_119e54;
            case 0x119E5Cu: goto label_119e5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x119E34u;
label_119e34:
    // 0x119e34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119E34u;
    {
        const bool branch_taken_0x119e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E34u;
        // 0x119e38: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e34) {
            ctx->pc = 0x119E60u;
            goto label_119e60;
        }
    }
    ctx->pc = 0x119E3Cu;
label_119e3c:
    // 0x119e3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119E3Cu;
    {
        const bool branch_taken_0x119e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E3Cu;
        // 0x119e40: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e3c) {
            ctx->pc = 0x119E60u;
            goto label_119e60;
        }
    }
    ctx->pc = 0x119E44u;
label_119e44:
    // 0x119e44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119E44u;
    {
        const bool branch_taken_0x119e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E44u;
        // 0x119e48: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e44) {
            ctx->pc = 0x119E60u;
            goto label_119e60;
        }
    }
    ctx->pc = 0x119E4Cu;
label_119e4c:
    // 0x119e4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x119E4Cu;
    {
        const bool branch_taken_0x119e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E4Cu;
        // 0x119e50: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e4c) {
            ctx->pc = 0x119E60u;
            goto label_119e60;
        }
    }
    ctx->pc = 0x119E54u;
label_119e54:
    // 0x119e54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119E54u;
    {
        const bool branch_taken_0x119e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E54u;
        // 0x119e58: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e54) {
            ctx->pc = 0x119E60u;
            goto label_119e60;
        }
    }
    ctx->pc = 0x119E5Cu;
label_119e5c:
    // 0x119e5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x119e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_119e60:
    // 0x119e60: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x119e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x119e64: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x119e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x119e68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119E68u;
    {
        const bool branch_taken_0x119e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119e68) {
            ctx->pc = 0x119E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E68u;
            // 0x119e6c: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119E80u;
            goto label_119e80;
        }
    }
    ctx->pc = 0x119E70u;
    // 0x119e70: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x119e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119e78: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x119e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x119e7c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_119e80:
    // 0x119e80: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x119e84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119E84u;
    {
        const bool branch_taken_0x119e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E84u;
        // 0x119e88: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e84) {
            ctx->pc = 0x119E98u;
            goto label_119e98;
        }
    }
    ctx->pc = 0x119E8Cu;
    // 0x119e8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119e90: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x119e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x119e94: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_119e98:
    // 0x119e98: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x119E98u;
    {
        const bool branch_taken_0x119e98 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x119e98) {
            ctx->pc = 0x119E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E98u;
            // 0x119e9c: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119EA0u;
            goto label_119ea0;
        }
    }
    ctx->pc = 0x119EA0u;
label_119ea0:
    // 0x119ea0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x119ea4: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x119ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x119ea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119EA8u;
    {
        const bool branch_taken_0x119ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EA8u;
        // 0x119eac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ea8) {
            ctx->pc = 0x119EBCu;
            goto label_119ebc;
        }
    }
    ctx->pc = 0x119EB0u;
    // 0x119eb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x119eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x119eb4: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x119eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x119eb8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x119eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_119ebc:
    // 0x119ebc: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x119ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x119ec0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119EC0u;
    {
        const bool branch_taken_0x119ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC0u;
        // 0x119ec4: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ec0) {
            ctx->pc = 0x119EECu;
            goto label_119eec;
        }
    }
    ctx->pc = 0x119EC8u;
label_119ec8:
    // 0x119ec8: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119EC8u;
    {
        const bool branch_taken_0x119ec8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x119ec8) {
            ctx->pc = 0x119ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119EC8u;
            // 0x119ecc: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119EF0u;
            goto label_119ef0;
        }
    }
    ctx->pc = 0x119ED0u;
    // 0x119ed0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x119ed4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x119ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x119ed8: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x119ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x119edc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119ee0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119EE0u;
    {
        const bool branch_taken_0x119ee0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x119EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EE0u;
        // 0x119ee4: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ee0) {
            ctx->pc = 0x119EECu;
            goto label_119eec;
        }
    }
    ctx->pc = 0x119EE8u;
    // 0x119ee8: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x119ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_119eec:
    // 0x119eec: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x119eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_119ef0:
    // 0x119ef0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x119ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x119ef4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119EF4u;
    {
        const bool branch_taken_0x119ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EF4u;
        // 0x119ef8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ef4) {
            ctx->pc = 0x119F14u;
            goto label_119f14;
        }
    }
    ctx->pc = 0x119EFCu;
    // 0x119efc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119f00: 0x2442c570  addiu       $v0, $v0, -0x3A90
    ctx->pc = 0x119f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952304));
    // 0x119f04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119f08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119f0c: 0x800008  jr          $a0
    ctx->pc = 0x119F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119F14u: goto label_119f14;
            case 0x119F28u: goto label_119f28;
            case 0x119F38u: goto label_119f38;
            case 0x119F48u: goto label_119f48;
            case 0x119F58u: goto label_119f58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x119F14u;
label_119f14:
    // 0x119f14: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x119f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x119f18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x119f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x119f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119f20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x119F20u;
    {
        const bool branch_taken_0x119f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F20u;
        // 0x119f24: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f20) {
            ctx->pc = 0x119F68u;
            goto label_119f68;
        }
    }
    ctx->pc = 0x119F28u;
label_119f28:
    // 0x119f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119f30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x119F30u;
    {
        const bool branch_taken_0x119f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F30u;
        // 0x119f34: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f30) {
            ctx->pc = 0x119F68u;
            goto label_119f68;
        }
    }
    ctx->pc = 0x119F38u;
label_119f38:
    // 0x119f38: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x119f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x119f3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119f40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119F40u;
    {
        const bool branch_taken_0x119f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F40u;
        // 0x119f44: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f40) {
            ctx->pc = 0x119F68u;
            goto label_119f68;
        }
    }
    ctx->pc = 0x119F48u;
label_119f48:
    // 0x119f48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x119f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x119f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119F50u;
    {
        const bool branch_taken_0x119f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F50u;
        // 0x119f54: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f50) {
            ctx->pc = 0x119F68u;
            goto label_119f68;
        }
    }
    ctx->pc = 0x119F58u;
label_119f58:
    // 0x119f58: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x119f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x119f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119f60: 0x0  nop
    ctx->pc = 0x119f60u;
    // NOP
    // 0x119f64: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x119f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_119f68:
    // 0x119f68: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x119f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x119f6c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x119F6Cu;
    SET_GPR_U32(ctx, 31, 0x119F74u);
    ctx->pc = 0x119F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F6Cu;
    // 0x119f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x119F6Cu, 0x119F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F74u;
label_119f74:
    // 0x119f74: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x119F74u;
    SET_GPR_U32(ctx, 31, 0x119F7Cu);
    ctx->pc = 0x119F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F74u;
    // 0x119f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x119F74u, 0x119F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F7Cu;
label_119f7c:
    // 0x119f7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x119F7Cu;
    SET_GPR_U32(ctx, 31, 0x119F84u);
    ctx->pc = 0x119F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F7Cu;
    // 0x119f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x119F7Cu, 0x119F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F84u;
label_119f84:
    // 0x119f84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119F84u;
    {
        const bool branch_taken_0x119f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119f84) {
            ctx->pc = 0x119F9Cu;
            goto label_119f9c;
        }
    }
    ctx->pc = 0x119F8Cu;
    // 0x119f8c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x119f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x119f90: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119F90u;
    {
        const bool branch_taken_0x119f90 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x119F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F90u;
        // 0x119f94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f90) {
            ctx->pc = 0x119F9Cu;
            goto label_119f9c;
        }
    }
    ctx->pc = 0x119F98u;
label_119f98:
    // 0x119f98: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x119f98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_119f9c:
    // 0x119f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119fa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fa8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x119FA8u;
    SET_GPR_U32(ctx, 31, 0x119FB0u);
    ctx->pc = 0x119FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FA8u;
    // 0x119fac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x119FA8u, 0x119FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FB0u;
label_119fb0:
    // 0x119fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fb4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x119FB4u;
    SET_GPR_U32(ctx, 31, 0x119FBCu);
    ctx->pc = 0x119FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FB4u;
    // 0x119fb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x119FB4u, 0x119FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FBCu;
label_119fbc:
    // 0x119fbc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x119FBCu;
    {
        const bool branch_taken_0x119fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FBCu;
        // 0x119fc0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fbc) {
            ctx->pc = 0x11A044u;
            goto label_11a044;
        }
    }
    ctx->pc = 0x119FC4u;
label_119fc4:
    // 0x119fc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x119fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fcc: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x119fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x119fd0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x119FD0u;
    SET_GPR_U32(ctx, 31, 0x119FD8u);
    ctx->pc = 0x119FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FD0u;
    // 0x119fd4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x119FD0u, 0x119FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FD8u;
label_119fd8:
    // 0x119fd8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x119fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119fdc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x119fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x119fe0: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x119fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x119fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119fe8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x119fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_119fec:
    // 0x119fec: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x119FECu;
    SET_GPR_U32(ctx, 31, 0x119FF4u);
    ctx->pc = 0x119FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FECu;
    // 0x119ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x119FECu, 0x119FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FF4u;
label_119ff4:
    // 0x119ff4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x119FF4u;
    SET_GPR_U32(ctx, 31, 0x119FFCu);
    ctx->pc = 0x119FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FF4u;
    // 0x119ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x119FF4u, 0x119FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FFCu;
label_119ffc:
    // 0x119ffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119FFCu;
    {
        const bool branch_taken_0x119ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FFCu;
        // 0x11a000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ffc) {
            ctx->pc = 0x11A020u;
            goto label_11a020;
        }
    }
    ctx->pc = 0x11A004u;
    // 0x11a004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a008: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11A008u;
    SET_GPR_U32(ctx, 31, 0x11A010u);
    ctx->pc = 0x11A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A008u;
    // 0x11a00c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11A008u, 0x11A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A010u;
label_11a010:
    // 0x11a010: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11a010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a014: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11a014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a018: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11a018u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a01c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11a01cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11a020:
    // 0x11a020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a024: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11a024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11a028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a02c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11A02Cu;
    SET_GPR_U32(ctx, 31, 0x11A034u);
    ctx->pc = 0x11A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A02Cu;
    // 0x11a030: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11A02Cu, 0x11A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A034u;
label_11a034:
    // 0x11a034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a038: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11A038u;
    SET_GPR_U32(ctx, 31, 0x11A040u);
    ctx->pc = 0x11A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A038u;
    // 0x11a03c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11A038u, 0x11A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A040u;
label_11a040:
    // 0x11a040: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11a040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11a044:
    // 0x11a044: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11a044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11a048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a04c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a050: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11a050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a054: 0x3e00008  jr          $ra
    ctx->pc = 0x11A054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A054u;
        // 0x11a058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A05Cu;
    // 0x11a05c: 0x0  nop
    ctx->pc = 0x11a05cu;
    // NOP
    ctx->pc = 0x11a060u;
}
