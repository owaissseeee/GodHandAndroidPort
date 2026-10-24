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

// Function: cOmTwoVol_init
// Address: 0x1b0de8 - 0x1b0f70
void cOmTwoVol_init_0x1b0de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmTwoVol_init_0x1b0de8");
#endif

    switch (ctx->pc) {
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e30u: goto label_1b0e30;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0ef4u: goto label_1b0ef4;
        case 0x1b0f04u: goto label_1b0f04;
        default: break;
    }

    ctx->pc = 0x1b0de8u;

    // 0x1b0de8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b0dec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b0df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b0df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0df4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b0df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b0dfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0e00: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B0E00u;
    SET_GPR_U32(ctx, 31, 0x1B0E08u);
    ctx->pc = 0x1B0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E00u;
    // 0x1b0e04: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B0E00u, 0x1B0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E08u;
label_1b0e08:
    // 0x1b0e08: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1b0e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e0c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1b0e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1b0e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0e14: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1b0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1b0e18: 0xae200600  sw          $zero, 0x600($s1)
    ctx->pc = 0x1b0e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 0));
    // 0x1b0e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e20: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x1b0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x1b0e24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e28: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B0E28u;
    SET_GPR_U32(ctx, 31, 0x1B0E30u);
    ctx->pc = 0x1B0E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E28u;
    // 0x1b0e2c: 0xe6200630  swc1        $f0, 0x630($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B0E28u, 0x1B0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E30u;
label_1b0e30:
    // 0x1b0e30: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b0e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b0e34: 0xae22066c  sw          $v0, 0x66C($s1)
    ctx->pc = 0x1b0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 2));
    // 0x1b0e38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0E38u;
    {
        const bool branch_taken_0x1b0e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E38u;
        // 0x1b0e3c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e38) {
            ctx->pc = 0x1B0E4Cu;
            goto label_1b0e4c;
        }
    }
    ctx->pc = 0x1B0E40u;
    // 0x1b0e40: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b0e44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0E44u;
    {
        const bool branch_taken_0x1b0e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E44u;
        // 0x1b0e48: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e44) {
            ctx->pc = 0x1B0E50u;
            goto label_1b0e50;
        }
    }
    ctx->pc = 0x1B0E4Cu;
label_1b0e4c:
    // 0x1b0e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e50:
    // 0x1b0e50: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b0e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b0e54: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b0e58: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b0e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1b0e5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e60: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b0e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b0e64: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1b0e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0e6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0e70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b0e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b0e74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0e78: 0x8e24066c  lw          $a0, 0x66C($s1)
    ctx->pc = 0x1b0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1644)));
    // 0x1b0e7c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E84u);
    ctx->pc = 0x1B0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E7Cu;
    // 0x1b0e80: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B0E7Cu, 0x1B0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E84u;
label_1b0e84:
    // 0x1b0e84: 0x8e24066c  lw          $a0, 0x66C($s1)
    ctx->pc = 0x1b0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1644)));
    // 0x1b0e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e8c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E94u);
    ctx->pc = 0x1B0E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E8Cu;
    // 0x1b0e90: 0xae220674  sw          $v0, 0x674($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B0E8Cu, 0x1B0E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E94u;
label_1b0e94:
    // 0x1b0e94: 0x26444380  addiu       $a0, $s2, 0x4380
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17280));
    // 0x1b0e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0e9c: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0EA4u);
    ctx->pc = 0x1B0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E9Cu;
    // 0x1b0ea0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B0E9Cu, 0x1B0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EA4u;
label_1b0ea4:
    // 0x1b0ea4: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b0ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b0ea8: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1b0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x1b0eac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0EACu;
    {
        const bool branch_taken_0x1b0eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EACu;
        // 0x1b0eb0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0eac) {
            ctx->pc = 0x1B0EC0u;
            goto label_1b0ec0;
        }
    }
    ctx->pc = 0x1B0EB4u;
    // 0x1b0eb4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b0eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0EB8u;
    {
        const bool branch_taken_0x1b0eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EB8u;
        // 0x1b0ebc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0eb8) {
            ctx->pc = 0x1B0EC4u;
            goto label_1b0ec4;
        }
    }
    ctx->pc = 0x1B0EC0u;
label_1b0ec0:
    // 0x1b0ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ec4:
    // 0x1b0ec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0ec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0ecc: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b0ed0: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x1b0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1b0ed4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b0ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ed8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b0ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b0edc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0ee0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b0ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b0ee4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0ee8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b0eec: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B0EECu;
    SET_GPR_U32(ctx, 31, 0x1B0EF4u);
    ctx->pc = 0x1B0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EECu;
    // 0x1b0ef0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B0EECu, 0x1B0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EF4u;
label_1b0ef4:
    // 0x1b0ef4: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x1b0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1b0ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0efc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B0EFCu;
    SET_GPR_U32(ctx, 31, 0x1B0F04u);
    ctx->pc = 0x1B0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EFCu;
    // 0x1b0f00: 0xae220678  sw          $v0, 0x678($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B0EFCu, 0x1B0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F04u;
label_1b0f04:
    // 0x1b0f04: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1b0f04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1b0f08: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x1b0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x1b0f0c: 0xae200650  sw          $zero, 0x650($s1)
    ctx->pc = 0x1b0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 0));
    // 0x1b0f10: 0xae200654  sw          $zero, 0x654($s1)
    ctx->pc = 0x1b0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 0));
    // 0x1b0f14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0F14u;
    {
        const bool branch_taken_0x1b0f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F14u;
        // 0x1b0f18: 0xae200658  sw          $zero, 0x658($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f14) {
            ctx->pc = 0x1B0F34u;
            goto label_1b0f34;
        }
    }
    ctx->pc = 0x1B0F1Cu;
    // 0x1b0f1c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b0f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b0f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f24: 0x0  nop
    ctx->pc = 0x1b0f24u;
    // NOP
    // 0x1b0f28: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x1b0f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x1b0f2c: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x1b0f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x1b0f30: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x1b0f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
label_1b0f34:
    // 0x1b0f34: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b0f38: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1b0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1b0f3c: 0xae200668  sw          $zero, 0x668($s1)
    ctx->pc = 0x1b0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1640), GPR_U32(ctx, 0));
    // 0x1b0f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0f44: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1b0f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1b0f48: 0xa2200667  sb          $zero, 0x667($s1)
    ctx->pc = 0x1b0f48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1639), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0f4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b0f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b0f50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b0f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0f54: 0xae2305b8  sw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    // 0x1b0f58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b0f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0f5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b0f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0f60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F64u;
        // 0x1b0f68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0F6Cu;
    // 0x1b0f6c: 0x0  nop
    ctx->pc = 0x1b0f6cu;
    // NOP
    ctx->pc = 0x1b0f70u;
}
