#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_00799EC8
// Address: 0x799ec8 - 0x79a030
void func_00799EC8_0x799ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799EC8_0x799ec8");
#endif

    switch (ctx->pc) {
        case 0x799ec8u: goto label_799ec8;
        case 0x799eccu: goto label_799ecc;
        case 0x799ed0u: goto label_799ed0;
        case 0x799ed4u: goto label_799ed4;
        case 0x799ed8u: goto label_799ed8;
        case 0x799edcu: goto label_799edc;
        case 0x799ee0u: goto label_799ee0;
        case 0x799ee4u: goto label_799ee4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799eecu: goto label_799eec;
        case 0x799ef0u: goto label_799ef0;
        case 0x799ef4u: goto label_799ef4;
        case 0x799ef8u: goto label_799ef8;
        case 0x799efcu: goto label_799efc;
        case 0x799f00u: goto label_799f00;
        case 0x799f04u: goto label_799f04;
        case 0x799f08u: goto label_799f08;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f10u: goto label_799f10;
        case 0x799f14u: goto label_799f14;
        case 0x799f18u: goto label_799f18;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f20u: goto label_799f20;
        case 0x799f24u: goto label_799f24;
        case 0x799f28u: goto label_799f28;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f30u: goto label_799f30;
        case 0x799f34u: goto label_799f34;
        case 0x799f38u: goto label_799f38;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f40u: goto label_799f40;
        case 0x799f44u: goto label_799f44;
        case 0x799f48u: goto label_799f48;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f50u: goto label_799f50;
        case 0x799f54u: goto label_799f54;
        case 0x799f58u: goto label_799f58;
        case 0x799f5cu: goto label_799f5c;
        case 0x799f60u: goto label_799f60;
        case 0x799f64u: goto label_799f64;
        case 0x799f68u: goto label_799f68;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f70u: goto label_799f70;
        case 0x799f74u: goto label_799f74;
        case 0x799f78u: goto label_799f78;
        case 0x799f7cu: goto label_799f7c;
        case 0x799f80u: goto label_799f80;
        case 0x799f84u: goto label_799f84;
        case 0x799f88u: goto label_799f88;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f90u: goto label_799f90;
        case 0x799f94u: goto label_799f94;
        case 0x799f98u: goto label_799f98;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fa8u: goto label_799fa8;
        case 0x799facu: goto label_799fac;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fbcu: goto label_799fbc;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fc4u: goto label_799fc4;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd0u: goto label_799fd0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fe8u: goto label_799fe8;
        case 0x799fecu: goto label_799fec;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ff4u: goto label_799ff4;
        case 0x799ff8u: goto label_799ff8;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a000u: goto label_79a000;
        case 0x79a004u: goto label_79a004;
        case 0x79a008u: goto label_79a008;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a010u: goto label_79a010;
        case 0x79a014u: goto label_79a014;
        case 0x79a018u: goto label_79a018;
        case 0x79a01cu: goto label_79a01c;
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
        default: break;
    }

    ctx->pc = 0x799ec8u;

label_799ec8:
    // 0x799ec8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_799ecc:
    // 0x799ecc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_799ed0:
    // 0x799ed0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_799ed4:
    // 0x799ed4: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_799ed8:
    // 0x799ed8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x799ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_799edc:
    // 0x799edc: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_799ee0:
    // 0x799ee0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_799ee4:
    // 0x799ee4: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_799ee8:
    // 0x799ee8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_799eec:
    // 0x799eec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_799ef0:
    // 0x799ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799ef4:
    // 0x799ef4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ef8:
    // 0x799ef8: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_799efc:
    // 0x799efc: 0xc0b0c46  jal         func_2C3118
label_799f00:
    if (ctx->pc == 0x799F00u) {
        ctx->pc = 0x799F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EFCu;
        // 0x799f00: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F04u;
        goto label_799f04;
    }
    ctx->pc = 0x799EFCu;
    SET_GPR_U32(ctx, 31, 0x799F04u);
    ctx->pc = 0x799F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EFCu;
    // 0x799f00: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x799EFCu, 0x799F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F04u;
label_799f04:
    // 0x799f04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799f08:
    // 0x799f08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_799f0c:
    // 0x799f0c: 0x8e82b1c4  lw          $v0, -0x4E3C($s4)
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947268)));
label_799f10:
    // 0x799f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_799f14:
    // 0x799f14: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799f18:
    // 0x799f18: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_799f1c:
    if (ctx->pc == 0x799F1Cu) {
        ctx->pc = 0x799F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F18u;
        // 0x799f1c: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F20u;
        goto label_799f20;
    }
    ctx->pc = 0x799F18u;
    {
        const bool branch_taken_0x799f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F18u;
        // 0x799f1c: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f18) {
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799f24:
    // 0x799f24: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799f28:
    // 0x799f28: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799f2c:
    // 0x799f2c: 0x40f809  jalr        $v0
label_799f30:
    if (ctx->pc == 0x799F30u) {
        ctx->pc = 0x799F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F2Cu;
        // 0x799f30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F34u;
        goto label_799f34;
    }
    ctx->pc = 0x799F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799F34u);
        ctx->pc = 0x799F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F2Cu;
        // 0x799f30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_799f38:
    // 0x799f38: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x799f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_799f3c:
    // 0x799f3c: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
label_799f40:
    // 0x799f40: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_799f44:
    // 0x799f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799f48:
    // 0x799f48: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_799f4c:
    // 0x799f4c: 0x0  nop
    ctx->pc = 0x799f4cu;
    // NOP
label_799f50:
    // 0x799f50: 0x8d02b1c4  lw          $v0, -0x4E3C($t0)
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947268)));
label_799f54:
    // 0x799f54: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799f58:
    // 0x799f58: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x799f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799f5c:
    // 0x799f5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799f60:
    // 0x799f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_799f64:
    // 0x799f64: 0x28e40004  slti        $a0, $a3, 0x4
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_799f68:
    // 0x799f68: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x799f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799f6c:
    // 0x799f6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x799f6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_799f70:
    // 0x799f70: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x799f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_799f74:
    // 0x799f74: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_799f78:
    // 0x799f78: 0x8d02b1c4  lw          $v0, -0x4E3C($t0)
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947268)));
label_799f7c:
    // 0x799f7c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x799f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799f80:
    // 0x799f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_799f84:
    // 0x799f84: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x799f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799f88:
    // 0x799f88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x799f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_799f8c:
    // 0x799f8c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x799f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_799f90:
    // 0x799f90: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_799f94:
    if (ctx->pc == 0x799F94u) {
        ctx->pc = 0x799F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F90u;
        // 0x799f94: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F98u;
        goto label_799f98;
    }
    ctx->pc = 0x799F90u;
    {
        const bool branch_taken_0x799f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F90u;
        // 0x799f94: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f90) {
            ctx->pc = 0x799F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f50;
        }
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x799f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799f9c:
    // 0x799f9c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x799f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_799fa0:
    // 0x799fa0: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_799fa4:
    if (ctx->pc == 0x799FA4u) {
        ctx->pc = 0x799FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA0u;
        // 0x799fa4: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FA8u;
        goto label_799fa8;
    }
    ctx->pc = 0x799FA0u;
    {
        const bool branch_taken_0x799fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA0u;
        // 0x799fa4: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fa0) {
            ctx->pc = 0x799EFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799efc;
        }
    }
    ctx->pc = 0x799FA8u;
label_799fa8:
    // 0x799fa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799fac:
    // 0x799fac: 0x0  nop
    ctx->pc = 0x799facu;
    // NOP
label_799fb0:
    // 0x799fb0: 0xc0b6dac  jal         func_2DB6B0
label_799fb4:
    if (ctx->pc == 0x799FB4u) {
        ctx->pc = 0x799FB8u;
        goto label_799fb8;
    }
    ctx->pc = 0x799FB0u;
    SET_GPR_U32(ctx, 31, 0x799FB8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799FB0u, 0x799FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB8u;
label_799fb8:
    // 0x799fb8: 0xc04afd4  jal         func_12BF50
label_799fbc:
    if (ctx->pc == 0x799FBCu) {
        ctx->pc = 0x799FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB8u;
        // 0x799fbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FC0u;
        goto label_799fc0;
    }
    ctx->pc = 0x799FB8u;
    SET_GPR_U32(ctx, 31, 0x799FC0u);
    ctx->pc = 0x799FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB8u;
    // 0x799fbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BF50u, 0x799FB8u, 0x799FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC0u;
label_799fc0:
    // 0x799fc0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_799fc4:
    // 0x799fc4: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
label_799fc8:
    // 0x799fc8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x799fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_799fcc:
    // 0x799fcc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_799fd0:
    // 0x799fd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_799fd4:
    if (ctx->pc == 0x799FD4u) {
        ctx->pc = 0x799FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD0u;
        // 0x799fd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FD8u;
        goto label_799fd8;
    }
    ctx->pc = 0x799FD0u;
    {
        const bool branch_taken_0x799fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD0u;
        // 0x799fd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fd0) {
            ctx->pc = 0x799FE8u;
            goto label_799fe8;
        }
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0xc0b0a54  jal         func_2C2950
label_799fdc:
    if (ctx->pc == 0x799FDCu) {
        ctx->pc = 0x799FE0u;
        goto label_799fe0;
    }
    ctx->pc = 0x799FD8u;
    SET_GPR_U32(ctx, 31, 0x799FE0u);
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799FD8u, 0x799FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE0u;
label_799fe0:
    // 0x799fe0: 0x10000005  b           . + 4 + (0x5 << 2)
label_799fe4:
    if (ctx->pc == 0x799FE4u) {
        ctx->pc = 0x799FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE0u;
        // 0x799fe4: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FE8u;
        goto label_799fe8;
    }
    ctx->pc = 0x799FE0u;
    {
        const bool branch_taken_0x799fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE0u;
        // 0x799fe4: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fe0) {
            ctx->pc = 0x799FF8u;
            goto label_799ff8;
        }
    }
    ctx->pc = 0x799FE8u;
label_799fe8:
    // 0x799fe8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_799fec:
    // 0x799fec: 0xc0b0a7e  jal         func_2C29F8
label_799ff0:
    if (ctx->pc == 0x799FF0u) {
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF4u;
        goto label_799ff4;
    }
    ctx->pc = 0x799FECu;
    SET_GPR_U32(ctx, 31, 0x799FF4u);
    ctx->pc = 0x799FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FECu;
    // 0x799ff0: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799FECu, 0x799FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x799ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_799ff8:
    // 0x799ff8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_799ffc:
    if (ctx->pc == 0x799FFCu) {
        ctx->pc = 0x799FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF8u;
        // 0x799ffc: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A000u;
        goto label_79a000;
    }
    ctx->pc = 0x799FF8u;
    {
        const bool branch_taken_0x799ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF8u;
        // 0x799ffc: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ff8) {
            ctx->pc = 0x799FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fb0;
        }
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a004:
    // 0x79a004: 0xc0b56a8  jal         func_2D5AA0
label_79a008:
    if (ctx->pc == 0x79A008u) {
        ctx->pc = 0x79A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A004u;
        // 0x79a008: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A00Cu;
        goto label_79a00c;
    }
    ctx->pc = 0x79A004u;
    SET_GPR_U32(ctx, 31, 0x79A00Cu);
    ctx->pc = 0x79A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A004u;
    // 0x79a008: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A004u, 0x79A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A00Cu;
label_79a00c:
    // 0x79a00c: 0x1000ffba  b           . + 4 + (-0x46 << 2)
label_79a010:
    if (ctx->pc == 0x79A010u) {
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A014u;
        goto label_79a014;
    }
    ctx->pc = 0x79A00Cu;
    {
        const bool branch_taken_0x79a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a00c) {
            ctx->pc = 0x799EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ef8;
        }
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x0  nop
    ctx->pc = 0x79a014u;
    // NOP
label_79a018:
    // 0x79a018: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x79a018u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_79a01c:
    // 0x79a01c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a020:
    // 0x79a020: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x79a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a024:
    // 0x79a024: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79a028:
    // 0x79a028: 0x3e00008  jr          $ra
label_79a02c:
    if (ctx->pc == 0x79A02Cu) {
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A030u;
        goto label_fallthrough_0x79a028;
    }
    ctx->pc = 0x79A028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a028:
    ctx->pc = 0x79A030u;
}
} // namespace gh_r608
