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

// Function: func_0025ED00
// Address: 0x25ed00 - 0x25f1f0
void func_0025ED00_0x25ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025ED00_0x25ed00");
#endif

    switch (ctx->pc) {
        case 0x25edc4u: goto label_25edc4;
        case 0x25ee0cu: goto label_25ee0c;
        case 0x25ee40u: goto label_25ee40;
        case 0x25eed4u: goto label_25eed4;
        case 0x25ef04u: goto label_25ef04;
        case 0x25f084u: goto label_25f084;
        case 0x25f08cu: goto label_25f08c;
        case 0x25f0b8u: goto label_25f0b8;
        case 0x25f118u: goto label_25f118;
        case 0x25f120u: goto label_25f120;
        case 0x25f14cu: goto label_25f14c;
        case 0x25f160u: goto label_25f160;
        case 0x25f1b8u: goto label_25f1b8;
        case 0x25f1c4u: goto label_25f1c4;
        default: break;
    }

    ctx->pc = 0x25ed00u;

    // 0x25ed00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x25ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x25ed04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ed04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ed08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ed08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ed0c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x25ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x25ed10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25ed10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed14: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x25ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x25ed18: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x25ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x25ed1c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x25ed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x25ed20: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x25ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x25ed24: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x25ed24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x25ed28: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25ed2c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x25ed2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x25ed30: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25ed30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25ed34: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25ed34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25ed38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x25ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25ed3c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x25ed3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25ed40: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x25ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25ed44: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x25ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25ed48: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x25ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ed4c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25ed4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25ed50: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x25ed50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x25ed54: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ed58: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25ed58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25ed5c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25ed60: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25ed64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25ed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25ed68: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x25ed68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x25ed6c: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x25ed6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x25ed70: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x25ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x25ed74: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x25ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x25ed78: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x25ed78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ed7c: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x25ed7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ed80: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x25ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x25ed84: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x25ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25ed88: 0xc6600114  lwc1        $f0, 0x114($s3)
    ctx->pc = 0x25ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ed8c: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x25ed8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x25ed90: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x25ed90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ed94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25ed94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25ed98: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x25ed98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ed9c: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x25ed9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x25eda0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25EDA0u;
    {
        const bool branch_taken_0x25eda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDA0u;
        // 0x25eda4: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eda0) {
            ctx->pc = 0x25EDBCu;
            goto label_25edbc;
        }
    }
    ctx->pc = 0x25EDA8u;
    // 0x25eda8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25edac: 0x106200ea  beq         $v1, $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x25EDACu;
    {
        const bool branch_taken_0x25edac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDACu;
        // 0x25edb0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edac) {
            ctx->pc = 0x25F158u;
            goto label_25f158;
        }
    }
    ctx->pc = 0x25EDB4u;
    // 0x25edb4: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x25EDB4u;
    {
        const bool branch_taken_0x25edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDB4u;
        // 0x25edb8: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edb4) {
            ctx->pc = 0x25F1CCu;
            goto label_25f1cc;
        }
    }
    ctx->pc = 0x25EDBCu;
label_25edbc:
    // 0x25edbc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25EDBCu;
    SET_GPR_U32(ctx, 31, 0x25EDC4u);
    ctx->pc = 0x25EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDBCu;
    // 0x25edc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25EDBCu, 0x25EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDC4u;
label_25edc4:
    // 0x25edc4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x25edc4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25edc8: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x25edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x25edcc: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x25edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x25edd0: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x25edd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x25edd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EDD4u;
    {
        const bool branch_taken_0x25edd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDD4u;
        // 0x25edd8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edd4) {
            ctx->pc = 0x25EDF4u;
            goto label_25edf4;
        }
    }
    ctx->pc = 0x25EDDCu;
    // 0x25eddc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ede0: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x25ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
    // 0x25ede4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ede8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25edec: 0x800008  jr          $a0
    ctx->pc = 0x25EDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25EDF4u: goto label_25edf4;
            case 0x25EE6Cu: goto label_25ee6c;
            case 0x25EE9Cu: goto label_25ee9c;
            case 0x25EF0Cu: goto label_25ef0c;
            case 0x25EF3Cu: goto label_25ef3c;
            case 0x25EF6Cu: goto label_25ef6c;
            case 0x25EF9Cu: goto label_25ef9c;
            case 0x25EFCCu: goto label_25efcc;
            case 0x25EFFCu: goto label_25effc;
            case 0x25F02Cu: goto label_25f02c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EDECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25EDF4u;
label_25edf4:
    // 0x25edf4: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25edf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25edf8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25edfc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25EDFCu;
    {
        const bool branch_taken_0x25edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25edfc) {
            ctx->pc = 0x25EE38u;
            goto label_25ee38;
        }
    }
    ctx->pc = 0x25EE04u;
    // 0x25ee04: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25EE04u;
    SET_GPR_U32(ctx, 31, 0x25EE0Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25EE04u, 0x25EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE0Cu;
label_25ee0c:
    // 0x25ee0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ee10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EE10u;
    {
        const bool branch_taken_0x25ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE10u;
        // 0x25ee14: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee10) {
            ctx->pc = 0x25EE28u;
            goto label_25ee28;
        }
    }
    ctx->pc = 0x25EE18u;
    // 0x25ee18: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ee1c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x25ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x25ee20: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x25EE20u;
    {
        const bool branch_taken_0x25ee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE20u;
        // 0x25ee24: 0x8c440384  lw          $a0, 0x384($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee20) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EE28u;
label_25ee28:
    // 0x25ee28: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ee2c: 0x8c430388  lw          $v1, 0x388($v0)
    ctx->pc = 0x25ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x25ee30: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x25EE30u;
    {
        const bool branch_taken_0x25ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE30u;
        // 0x25ee34: 0x8c44038c  lw          $a0, 0x38C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee30) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EE38u;
label_25ee38:
    // 0x25ee38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25EE38u;
    SET_GPR_U32(ctx, 31, 0x25EE40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25EE38u, 0x25EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE40u;
label_25ee40:
    // 0x25ee40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ee44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EE44u;
    {
        const bool branch_taken_0x25ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE44u;
        // 0x25ee48: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee44) {
            ctx->pc = 0x25EE5Cu;
            goto label_25ee5c;
        }
    }
    ctx->pc = 0x25EE4Cu;
    // 0x25ee4c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ee50: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x25ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25ee54: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x25EE54u;
    {
        const bool branch_taken_0x25ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE54u;
        // 0x25ee58: 0x8c440374  lw          $a0, 0x374($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee54) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EE5Cu;
label_25ee5c:
    // 0x25ee5c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ee60: 0x8c430378  lw          $v1, 0x378($v0)
    ctx->pc = 0x25ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 888)));
    // 0x25ee64: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x25EE64u;
    {
        const bool branch_taken_0x25ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE64u;
        // 0x25ee68: 0x8c44037c  lw          $a0, 0x37C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee64) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EE6Cu;
label_25ee6c:
    // 0x25ee6c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25ee6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25ee70: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25ee74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EE74u;
    {
        const bool branch_taken_0x25ee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE74u;
        // 0x25ee78: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee74) {
            ctx->pc = 0x25EE8Cu;
            goto label_25ee8c;
        }
    }
    ctx->pc = 0x25EE7Cu;
    // 0x25ee7c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ee80: 0x8c430b44  lw          $v1, 0xB44($v0)
    ctx->pc = 0x25ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2884)));
    // 0x25ee84: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x25EE84u;
    {
        const bool branch_taken_0x25ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE84u;
        // 0x25ee88: 0x8c440b48  lw          $a0, 0xB48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee84) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EE8Cu;
label_25ee8c:
    // 0x25ee8c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ee90: 0x8c430b3c  lw          $v1, 0xB3C($v0)
    ctx->pc = 0x25ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2876)));
    // 0x25ee94: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x25EE94u;
    {
        const bool branch_taken_0x25ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE94u;
        // 0x25ee98: 0x8c440b40  lw          $a0, 0xB40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee94) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EE9Cu;
label_25ee9c:
    // 0x25ee9c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25ee9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25eea0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25eea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25eea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EEA4u;
    {
        const bool branch_taken_0x25eea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEA4u;
        // 0x25eea8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eea4) {
            ctx->pc = 0x25EEB8u;
            goto label_25eeb8;
        }
    }
    ctx->pc = 0x25EEACu;
    // 0x25eeac: 0x8c430b44  lw          $v1, 0xB44($v0)
    ctx->pc = 0x25eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2884)));
    // 0x25eeb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25EEB0u;
    {
        const bool branch_taken_0x25eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEB0u;
        // 0x25eeb4: 0x8c440b48  lw          $a0, 0xB48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eeb0) {
            ctx->pc = 0x25EEC0u;
            goto label_25eec0;
        }
    }
    ctx->pc = 0x25EEB8u;
label_25eeb8:
    // 0x25eeb8: 0x8c430b3c  lw          $v1, 0xB3C($v0)
    ctx->pc = 0x25eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2876)));
    // 0x25eebc: 0x8c440b40  lw          $a0, 0xB40($v0)
    ctx->pc = 0x25eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2880)));
label_25eec0:
    // 0x25eec0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25eec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25eec4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25eec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25eec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25eec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eecc: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25EECCu;
    SET_GPR_U32(ctx, 31, 0x25EED4u);
    ctx->pc = 0x25EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EECCu;
    // 0x25eed0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25EECCu, 0x25EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EED4u;
label_25eed4:
    // 0x25eed4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x25eed4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eed8: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x25eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x25eedc: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x25eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x25eee0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25eee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25eee8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25eee8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25eeec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25eeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eef0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25eef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eef4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25eef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eef8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25eef8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eefc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25EEFCu;
    SET_GPR_U32(ctx, 31, 0x25EF04u);
    ctx->pc = 0x25EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EEFCu;
    // 0x25ef00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25EEFCu, 0x25EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF04u;
label_25ef04:
    // 0x25ef04: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x25EF04u;
    {
        const bool branch_taken_0x25ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef04) {
            ctx->pc = 0x25F060u;
            goto label_25f060;
        }
    }
    ctx->pc = 0x25EF0Cu;
label_25ef0c:
    // 0x25ef0c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25ef0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25ef10: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25ef14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EF14u;
    {
        const bool branch_taken_0x25ef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF14u;
        // 0x25ef18: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef14) {
            ctx->pc = 0x25EF2Cu;
            goto label_25ef2c;
        }
    }
    ctx->pc = 0x25EF1Cu;
    // 0x25ef1c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ef20: 0x8c430b44  lw          $v1, 0xB44($v0)
    ctx->pc = 0x25ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2884)));
    // 0x25ef24: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x25EF24u;
    {
        const bool branch_taken_0x25ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF24u;
        // 0x25ef28: 0x8c440b48  lw          $a0, 0xB48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef24) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EF2Cu;
label_25ef2c:
    // 0x25ef2c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ef30: 0x8c430b3c  lw          $v1, 0xB3C($v0)
    ctx->pc = 0x25ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2876)));
    // 0x25ef34: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25EF34u;
    {
        const bool branch_taken_0x25ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF34u;
        // 0x25ef38: 0x8c440b40  lw          $a0, 0xB40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef34) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EF3Cu;
label_25ef3c:
    // 0x25ef3c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25ef3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25ef40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25ef44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EF44u;
    {
        const bool branch_taken_0x25ef44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF44u;
        // 0x25ef48: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef44) {
            ctx->pc = 0x25EF5Cu;
            goto label_25ef5c;
        }
    }
    ctx->pc = 0x25EF4Cu;
    // 0x25ef4c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ef50: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x25ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x25ef54: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25EF54u;
    {
        const bool branch_taken_0x25ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF54u;
        // 0x25ef58: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef54) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EF5Cu;
label_25ef5c:
    // 0x25ef5c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ef60: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x25ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x25ef64: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25EF64u;
    {
        const bool branch_taken_0x25ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF64u;
        // 0x25ef68: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef64) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EF6Cu;
label_25ef6c:
    // 0x25ef6c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25ef6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25ef70: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25ef74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EF74u;
    {
        const bool branch_taken_0x25ef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF74u;
        // 0x25ef78: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef74) {
            ctx->pc = 0x25EF8Cu;
            goto label_25ef8c;
        }
    }
    ctx->pc = 0x25EF7Cu;
    // 0x25ef7c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ef80: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x25ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x25ef84: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25EF84u;
    {
        const bool branch_taken_0x25ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF84u;
        // 0x25ef88: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef84) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EF8Cu;
label_25ef8c:
    // 0x25ef8c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25ef90: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x25ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x25ef94: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25EF94u;
    {
        const bool branch_taken_0x25ef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF94u;
        // 0x25ef98: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef94) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EF9Cu;
label_25ef9c:
    // 0x25ef9c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25ef9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25efa0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25efa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EFA4u;
    {
        const bool branch_taken_0x25efa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA4u;
        // 0x25efa8: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efa4) {
            ctx->pc = 0x25EFBCu;
            goto label_25efbc;
        }
    }
    ctx->pc = 0x25EFACu;
    // 0x25efac: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25efb0: 0x8c4317b8  lw          $v1, 0x17B8($v0)
    ctx->pc = 0x25efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6072)));
    // 0x25efb4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25EFB4u;
    {
        const bool branch_taken_0x25efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFB4u;
        // 0x25efb8: 0x8c4417bc  lw          $a0, 0x17BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efb4) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EFBCu;
label_25efbc:
    // 0x25efbc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25efc0: 0x8c4317b0  lw          $v1, 0x17B0($v0)
    ctx->pc = 0x25efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6064)));
    // 0x25efc4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25EFC4u;
    {
        const bool branch_taken_0x25efc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFC4u;
        // 0x25efc8: 0x8c4417b4  lw          $a0, 0x17B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efc4) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EFCCu;
label_25efcc:
    // 0x25efcc: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25efccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25efd0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25efd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25efd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EFD4u;
    {
        const bool branch_taken_0x25efd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFD4u;
        // 0x25efd8: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efd4) {
            ctx->pc = 0x25EFECu;
            goto label_25efec;
        }
    }
    ctx->pc = 0x25EFDCu;
    // 0x25efdc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25efe0: 0x8c4317b8  lw          $v1, 0x17B8($v0)
    ctx->pc = 0x25efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6072)));
    // 0x25efe4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25EFE4u;
    {
        const bool branch_taken_0x25efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFE4u;
        // 0x25efe8: 0x8c4417bc  lw          $a0, 0x17BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efe4) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EFECu;
label_25efec:
    // 0x25efec: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25eff0: 0x8c4317b0  lw          $v1, 0x17B0($v0)
    ctx->pc = 0x25eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6064)));
    // 0x25eff4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25EFF4u;
    {
        const bool branch_taken_0x25eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFF4u;
        // 0x25eff8: 0x8c4417b4  lw          $a0, 0x17B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eff4) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25EFFCu;
label_25effc:
    // 0x25effc: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25effcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25f000: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25f004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F004u;
    {
        const bool branch_taken_0x25f004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F004u;
        // 0x25f008: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f004) {
            ctx->pc = 0x25F01Cu;
            goto label_25f01c;
        }
    }
    ctx->pc = 0x25F00Cu;
    // 0x25f00c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25f010: 0x8c430f6c  lw          $v1, 0xF6C($v0)
    ctx->pc = 0x25f010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3948)));
    // 0x25f014: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25F014u;
    {
        const bool branch_taken_0x25f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F014u;
        // 0x25f018: 0x8c440f70  lw          $a0, 0xF70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f014) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25F01Cu;
label_25f01c:
    // 0x25f01c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25f020: 0x8c430f64  lw          $v1, 0xF64($v0)
    ctx->pc = 0x25f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3940)));
    // 0x25f024: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25F024u;
    {
        const bool branch_taken_0x25f024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F024u;
        // 0x25f028: 0x8c440f68  lw          $a0, 0xF68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f024) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25F02Cu;
label_25f02c:
    // 0x25f02c: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25f02cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x25f030: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25f034: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F034u;
    {
        const bool branch_taken_0x25f034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F034u;
        // 0x25f038: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f034) {
            ctx->pc = 0x25F04Cu;
            goto label_25f04c;
        }
    }
    ctx->pc = 0x25F03Cu;
    // 0x25f03c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25f040: 0x8c431398  lw          $v1, 0x1398($v0)
    ctx->pc = 0x25f040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5016)));
    // 0x25f044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25F044u;
    {
        const bool branch_taken_0x25f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F044u;
        // 0x25f048: 0x8c44139c  lw          $a0, 0x139C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f044) {
            ctx->pc = 0x25F058u;
            goto label_25f058;
        }
    }
    ctx->pc = 0x25F04Cu;
label_25f04c:
    // 0x25f04c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25f050: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x25f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x25f054: 0x8c441394  lw          $a0, 0x1394($v0)
    ctx->pc = 0x25f054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5012)));
label_25f058:
    // 0x25f058: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25f058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f05c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25f05cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25f060:
    // 0x25f060: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25f060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25f064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25f064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f068: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f06c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25f06cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f070: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x25f070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25f074: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f07c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25F07Cu;
    SET_GPR_U32(ctx, 31, 0x25F084u);
    ctx->pc = 0x25F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F07Cu;
    // 0x25f080: 0x26b0ee00  addiu       $s0, $s5, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25F07Cu, 0x25F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F084u;
label_25f084:
    // 0x25f084: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25F084u;
    SET_GPR_U32(ctx, 31, 0x25F08Cu);
    ctx->pc = 0x25F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F084u;
    // 0x25f088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25F084u, 0x25F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F08Cu;
label_25f08c:
    // 0x25f08c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25f090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f094: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f098: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f09c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25f09cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25f0a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25f0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25f0a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f0a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25f0acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0b0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25F0B0u;
    SET_GPR_U32(ctx, 31, 0x25F0B8u);
    ctx->pc = 0x25F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0B0u;
    // 0x25f0b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25F0B0u, 0x25F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0B8u;
label_25f0b8:
    // 0x25f0b8: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x25f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x25f0bc: 0x2862024b  slti        $v0, $v1, 0x24B
    ctx->pc = 0x25f0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)587) ? 1 : 0);
    // 0x25f0c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F0C0u;
    {
        const bool branch_taken_0x25f0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0C0u;
        // 0x25f0c4: 0x28620249  slti        $v0, $v1, 0x249 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)585) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0c0) {
            ctx->pc = 0x25F0E8u;
            goto label_25f0e8;
        }
    }
    ctx->pc = 0x25F0C8u;
    // 0x25f0c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25F0C8u;
    {
        const bool branch_taken_0x25f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0C8u;
        // 0x25f0cc: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0c8) {
            ctx->pc = 0x25F0F4u;
            goto label_25f0f4;
        }
    }
    ctx->pc = 0x25F0D0u;
    // 0x25f0d0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F0D0u;
    {
        const bool branch_taken_0x25f0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0D0u;
        // 0x25f0d4: 0x24020240  addiu       $v0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0d0) {
            ctx->pc = 0x25F0F4u;
            goto label_25f0f4;
        }
    }
    ctx->pc = 0x25F0D8u;
    // 0x25f0d8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F0D8u;
    {
        const bool branch_taken_0x25f0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f0d8) {
            ctx->pc = 0x25F0F4u;
            goto label_25f0f4;
        }
    }
    ctx->pc = 0x25F0E0u;
    // 0x25f0e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x25F0E0u;
    {
        const bool branch_taken_0x25f0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0E0u;
        // 0x25f0e4: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0e0) {
            ctx->pc = 0x25F150u;
            goto label_25f150;
        }
    }
    ctx->pc = 0x25F0E8u;
label_25f0e8:
    // 0x25f0e8: 0x2402024e  addiu       $v0, $zero, 0x24E
    ctx->pc = 0x25f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
    // 0x25f0ec: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F0ECu;
    {
        const bool branch_taken_0x25f0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f0ec) {
            ctx->pc = 0x25F0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F0ECu;
            // 0x25f0f0: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F150u;
            goto label_25f150;
        }
    }
    ctx->pc = 0x25F0F4u;
label_25f0f4:
    // 0x25f0f4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25f0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25f0f8: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x25f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x25f0fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f100: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x25f100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f104: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25f104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f108: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x25f108u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x25f10c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x25f110: 0xc0c194a  jal         func_306528
    ctx->pc = 0x25F110u;
    SET_GPR_U32(ctx, 31, 0x25F118u);
    ctx->pc = 0x25F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F110u;
    // 0x25f114: 0x26b0ee00  addiu       $s0, $s5, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x25F110u, 0x25F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F118u;
label_25f118:
    // 0x25f118: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25F118u;
    SET_GPR_U32(ctx, 31, 0x25F120u);
    ctx->pc = 0x25F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F118u;
    // 0x25f11c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25F118u, 0x25F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F120u;
label_25f120:
    // 0x25f120: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x25f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x25f124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f128: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f12c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f130: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25f130u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25f134: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25f134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25f138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f13c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f13cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f140: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25f140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f144: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25F144u;
    SET_GPR_U32(ctx, 31, 0x25F14Cu);
    ctx->pc = 0x25F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F144u;
    // 0x25f148: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25F144u, 0x25F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F14Cu;
label_25f14c:
    // 0x25f14c: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x25f14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_25f150:
    // 0x25f150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25f154: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x25f154u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_25f158:
    // 0x25f158: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25F158u;
    SET_GPR_U32(ctx, 31, 0x25F160u);
    ctx->pc = 0x25F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F158u;
    // 0x25f15c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25F158u, 0x25F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F160u;
label_25f160:
    // 0x25f160: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25F160u;
    {
        const bool branch_taken_0x25f160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F160u;
        // 0x25f164: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f160) {
            ctx->pc = 0x25F1A4u;
            goto label_25f1a4;
        }
    }
    ctx->pc = 0x25F168u;
    // 0x25f168: 0x8e621644  lw          $v0, 0x1644($s3)
    ctx->pc = 0x25f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5700)));
    // 0x25f16c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f170: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F170u;
    {
        const bool branch_taken_0x25f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F170u;
        // 0x25f174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f170) {
            ctx->pc = 0x25F190u;
            goto label_25f190;
        }
    }
    ctx->pc = 0x25F178u;
    // 0x25f178: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25f178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f17c: 0xa26202f4  sb          $v0, 0x2F4($s3)
    ctx->pc = 0x25f17cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f180: 0xa26302f5  sb          $v1, 0x2F5($s3)
    ctx->pc = 0x25f180u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25f184: 0xa26002f7  sb          $zero, 0x2F7($s3)
    ctx->pc = 0x25f184u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25f188: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25F188u;
    {
        const bool branch_taken_0x25f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F188u;
        // 0x25f18c: 0xa26002f6  sb          $zero, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f188) {
            ctx->pc = 0x25F1C4u;
            goto label_25f1c4;
        }
    }
    ctx->pc = 0x25F190u;
label_25f190:
    // 0x25f190: 0xa26002f7  sb          $zero, 0x2F7($s3)
    ctx->pc = 0x25f190u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25f194: 0xa26202f5  sb          $v0, 0x2F5($s3)
    ctx->pc = 0x25f194u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f198: 0xa26202f4  sb          $v0, 0x2F4($s3)
    ctx->pc = 0x25f198u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f19c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25F19Cu;
    {
        const bool branch_taken_0x25f19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F19Cu;
        // 0x25f1a0: 0xa26002f6  sb          $zero, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f19c) {
            ctx->pc = 0x25F1C4u;
            goto label_25f1c4;
        }
    }
    ctx->pc = 0x25F1A4u;
label_25f1a4:
    // 0x25f1a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f1a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25f1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25f1ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1b0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25F1B0u;
    SET_GPR_U32(ctx, 31, 0x25F1B8u);
    ctx->pc = 0x25F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1B0u;
    // 0x25f1b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25F1B0u, 0x25F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1B8u;
label_25f1b8:
    // 0x25f1b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1bc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25F1BCu;
    SET_GPR_U32(ctx, 31, 0x25F1C4u);
    ctx->pc = 0x25F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1BCu;
    // 0x25f1c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25F1BCu, 0x25F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1C4u;
label_25f1c4:
    // 0x25f1c4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x25f1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25f1c8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x25f1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_25f1cc:
    // 0x25f1cc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x25f1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25f1d0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x25f1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25f1d4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x25f1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f1d8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x25f1d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f1dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x25f1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f1e0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x25f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25F1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1E4u;
        // 0x25f1e8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F1ECu;
    // 0x25f1ec: 0x0  nop
    ctx->pc = 0x25f1ecu;
    // NOP
    ctx->pc = 0x25f1f0u;
}
