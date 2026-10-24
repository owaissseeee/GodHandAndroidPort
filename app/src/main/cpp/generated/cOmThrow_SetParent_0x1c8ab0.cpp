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

// Function: cOmThrow_SetParent
// Address: 0x1c8ab0 - 0x1c8be0
void cOmThrow_SetParent_0x1c8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmThrow_SetParent_0x1c8ab0");
#endif

    switch (ctx->pc) {
        case 0x1c8ab0u: goto label_1c8ab0;
        case 0x1c8ab4u: goto label_1c8ab4;
        case 0x1c8ab8u: goto label_1c8ab8;
        case 0x1c8abcu: goto label_1c8abc;
        case 0x1c8ac0u: goto label_1c8ac0;
        case 0x1c8ac4u: goto label_1c8ac4;
        case 0x1c8ac8u: goto label_1c8ac8;
        case 0x1c8accu: goto label_1c8acc;
        case 0x1c8ad0u: goto label_1c8ad0;
        case 0x1c8ad4u: goto label_1c8ad4;
        case 0x1c8ad8u: goto label_1c8ad8;
        case 0x1c8adcu: goto label_1c8adc;
        case 0x1c8ae0u: goto label_1c8ae0;
        case 0x1c8ae4u: goto label_1c8ae4;
        case 0x1c8ae8u: goto label_1c8ae8;
        case 0x1c8aecu: goto label_1c8aec;
        case 0x1c8af0u: goto label_1c8af0;
        case 0x1c8af4u: goto label_1c8af4;
        case 0x1c8af8u: goto label_1c8af8;
        case 0x1c8afcu: goto label_1c8afc;
        case 0x1c8b00u: goto label_1c8b00;
        case 0x1c8b04u: goto label_1c8b04;
        case 0x1c8b08u: goto label_1c8b08;
        case 0x1c8b0cu: goto label_1c8b0c;
        case 0x1c8b10u: goto label_1c8b10;
        case 0x1c8b14u: goto label_1c8b14;
        case 0x1c8b18u: goto label_1c8b18;
        case 0x1c8b1cu: goto label_1c8b1c;
        case 0x1c8b20u: goto label_1c8b20;
        case 0x1c8b24u: goto label_1c8b24;
        case 0x1c8b28u: goto label_1c8b28;
        case 0x1c8b2cu: goto label_1c8b2c;
        case 0x1c8b30u: goto label_1c8b30;
        case 0x1c8b34u: goto label_1c8b34;
        case 0x1c8b38u: goto label_1c8b38;
        case 0x1c8b3cu: goto label_1c8b3c;
        case 0x1c8b40u: goto label_1c8b40;
        case 0x1c8b44u: goto label_1c8b44;
        case 0x1c8b48u: goto label_1c8b48;
        case 0x1c8b4cu: goto label_1c8b4c;
        case 0x1c8b50u: goto label_1c8b50;
        case 0x1c8b54u: goto label_1c8b54;
        case 0x1c8b58u: goto label_1c8b58;
        case 0x1c8b5cu: goto label_1c8b5c;
        case 0x1c8b60u: goto label_1c8b60;
        case 0x1c8b64u: goto label_1c8b64;
        case 0x1c8b68u: goto label_1c8b68;
        case 0x1c8b6cu: goto label_1c8b6c;
        case 0x1c8b70u: goto label_1c8b70;
        case 0x1c8b74u: goto label_1c8b74;
        case 0x1c8b78u: goto label_1c8b78;
        case 0x1c8b7cu: goto label_1c8b7c;
        case 0x1c8b80u: goto label_1c8b80;
        case 0x1c8b84u: goto label_1c8b84;
        case 0x1c8b88u: goto label_1c8b88;
        case 0x1c8b8cu: goto label_1c8b8c;
        case 0x1c8b90u: goto label_1c8b90;
        case 0x1c8b94u: goto label_1c8b94;
        case 0x1c8b98u: goto label_1c8b98;
        case 0x1c8b9cu: goto label_1c8b9c;
        case 0x1c8ba0u: goto label_1c8ba0;
        case 0x1c8ba4u: goto label_1c8ba4;
        case 0x1c8ba8u: goto label_1c8ba8;
        case 0x1c8bacu: goto label_1c8bac;
        case 0x1c8bb0u: goto label_1c8bb0;
        case 0x1c8bb4u: goto label_1c8bb4;
        case 0x1c8bb8u: goto label_1c8bb8;
        case 0x1c8bbcu: goto label_1c8bbc;
        case 0x1c8bc0u: goto label_1c8bc0;
        case 0x1c8bc4u: goto label_1c8bc4;
        case 0x1c8bc8u: goto label_1c8bc8;
        case 0x1c8bccu: goto label_1c8bcc;
        case 0x1c8bd0u: goto label_1c8bd0;
        case 0x1c8bd4u: goto label_1c8bd4;
        case 0x1c8bd8u: goto label_1c8bd8;
        case 0x1c8bdcu: goto label_1c8bdc;
        default: break;
    }

    ctx->pc = 0x1c8ab0u;

label_1c8ab0:
    // 0x1c8ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c8ab4:
    // 0x1c8ab4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c8ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c8ab8:
    // 0x1c8ab8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c8abc:
    // 0x1c8abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8ac0:
    // 0x1c8ac0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c8ac4:
    // 0x1c8ac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c8ac8:
    // 0x1c8ac8: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c8acc:
    // 0x1c8acc: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1c8accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1c8ad0:
    // 0x1c8ad0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1c8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1c8ad4:
    // 0x1c8ad4: 0x60f809  jalr        $v1
label_1c8ad8:
    if (ctx->pc == 0x1C8AD8u) {
        ctx->pc = 0x1C8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AD4u;
        // 0x1c8ad8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8ADCu;
        goto label_1c8adc;
    }
    ctx->pc = 0x1C8AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8ADCu);
        ctx->pc = 0x1C8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AD4u;
        // 0x1c8ad8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8AD4u, 0x1C8ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8ADCu;
label_1c8adc:
    // 0x1c8adc: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x1c8adcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
label_1c8ae0:
    // 0x1c8ae0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1c8ae4:
    // 0x1c8ae4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1c8ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
label_1c8ae8:
    // 0x1c8ae8: 0xc04cc6e  jal         func_1331B8
label_1c8aec:
    if (ctx->pc == 0x1C8AECu) {
        ctx->pc = 0x1C8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AE8u;
        // 0x1c8aec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8AF0u;
        goto label_1c8af0;
    }
    ctx->pc = 0x1C8AE8u;
    SET_GPR_U32(ctx, 31, 0x1C8AF0u);
    ctx->pc = 0x1C8AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AE8u;
    // 0x1c8aec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1C8AE8u, 0x1C8AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AF0u;
label_1c8af0:
    // 0x1c8af0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c8af4:
    // 0x1c8af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8af8:
    // 0x1c8af8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1c8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
label_1c8afc:
    // 0x1c8afc: 0xc07f83a  jal         func_1FE0E8
label_1c8b00:
    if (ctx->pc == 0x1C8B00u) {
        ctx->pc = 0x1C8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AFCu;
        // 0x1c8b00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B04u;
        goto label_1c8b04;
    }
    ctx->pc = 0x1C8AFCu;
    SET_GPR_U32(ctx, 31, 0x1C8B04u);
    ctx->pc = 0x1C8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AFCu;
    // 0x1c8b00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1C8AFCu, 0x1C8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B04u;
label_1c8b04:
    // 0x1c8b04: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1c8b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1c8b08:
    // 0x1c8b08: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1c8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
label_1c8b0c:
    // 0x1c8b0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c8b10:
    if (ctx->pc == 0x1C8B10u) {
        ctx->pc = 0x1C8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B0Cu;
        // 0x1c8b10: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B14u;
        goto label_1c8b14;
    }
    ctx->pc = 0x1C8B0Cu;
    {
        const bool branch_taken_0x1c8b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B0Cu;
        // 0x1c8b10: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b0c) {
            ctx->pc = 0x1C8B20u;
            goto label_1c8b20;
        }
    }
    ctx->pc = 0x1C8B14u;
label_1c8b14:
    // 0x1c8b14: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1c8b18:
    // 0x1c8b18: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c8b1c:
    if (ctx->pc == 0x1C8B1Cu) {
        ctx->pc = 0x1C8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B18u;
        // 0x1c8b1c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B20u;
        goto label_1c8b20;
    }
    ctx->pc = 0x1C8B18u;
    {
        const bool branch_taken_0x1c8b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B18u;
        // 0x1c8b1c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b18) {
            ctx->pc = 0x1C8B24u;
            goto label_1c8b24;
        }
    }
    ctx->pc = 0x1C8B20u;
label_1c8b20:
    // 0x1c8b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b24:
    // 0x1c8b24: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1c8b28:
    // 0x1c8b28: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c8b2c:
    // 0x1c8b2c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1c8b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1c8b30:
    // 0x1c8b30: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c8b34:
    // 0x1c8b34: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1c8b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1c8b38:
    // 0x1c8b38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c8b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b3c:
    // 0x1c8b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c8b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c8b40:
    // 0x1c8b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8b44:
    // 0x1c8b44: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1c8b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1c8b48:
    // 0x1c8b48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c8b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c8b4c:
    // 0x1c8b4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c8b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c8b50:
    // 0x1c8b50: 0xc07f6bc  jal         func_1FDAF0
label_1c8b54:
    if (ctx->pc == 0x1C8B54u) {
        ctx->pc = 0x1C8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B50u;
        // 0x1c8b54: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B58u;
        goto label_1c8b58;
    }
    ctx->pc = 0x1C8B50u;
    SET_GPR_U32(ctx, 31, 0x1C8B58u);
    ctx->pc = 0x1C8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B50u;
    // 0x1c8b54: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1C8B50u, 0x1C8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B58u;
label_1c8b58:
    // 0x1c8b58: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1c8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1c8b5c:
    // 0x1c8b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b60:
    // 0x1c8b60: 0xc07f59a  jal         func_1FD668
label_1c8b64:
    if (ctx->pc == 0x1C8B64u) {
        ctx->pc = 0x1C8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B60u;
        // 0x1c8b64: 0xae020604  sw          $v0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B68u;
        goto label_1c8b68;
    }
    ctx->pc = 0x1C8B60u;
    SET_GPR_U32(ctx, 31, 0x1C8B68u);
    ctx->pc = 0x1C8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B60u;
    // 0x1c8b64: 0xae020604  sw          $v0, 0x604($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C8B60u, 0x1C8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B68u;
label_1c8b68:
    // 0x1c8b68: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c8b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1c8b6c:
    // 0x1c8b6c: 0xae110644  sw          $s1, 0x644($s0)
    ctx->pc = 0x1c8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 17));
label_1c8b70:
    // 0x1c8b70: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1c8b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1c8b74:
    // 0x1c8b74: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1c8b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1c8b78:
    // 0x1c8b78: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1c8b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c8b7c:
    // 0x1c8b7c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1c8b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c8b80:
    // 0x1c8b80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c8b84:
    if (ctx->pc == 0x1C8B84u) {
        ctx->pc = 0x1C8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B80u;
        // 0x1c8b84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B88u;
        goto label_1c8b88;
    }
    ctx->pc = 0x1C8B80u;
    {
        const bool branch_taken_0x1c8b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B80u;
        // 0x1c8b84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b80) {
            ctx->pc = 0x1C8B94u;
            goto label_1c8b94;
        }
    }
    ctx->pc = 0x1C8B88u;
label_1c8b88:
    // 0x1c8b88: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1c8b8c:
    // 0x1c8b8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c8b90:
    if (ctx->pc == 0x1C8B90u) {
        ctx->pc = 0x1C8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B8Cu;
        // 0x1c8b90: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B94u;
        goto label_1c8b94;
    }
    ctx->pc = 0x1C8B8Cu;
    {
        const bool branch_taken_0x1c8b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B8Cu;
        // 0x1c8b90: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b8c) {
            ctx->pc = 0x1C8B98u;
            goto label_1c8b98;
        }
    }
    ctx->pc = 0x1C8B94u;
label_1c8b94:
    // 0x1c8b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b98:
    // 0x1c8b98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c8b9c:
    if (ctx->pc == 0x1C8B9Cu) {
        ctx->pc = 0x1C8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B98u;
        // 0x1c8b9c: 0x26030630  addiu       $v1, $s0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8BA0u;
        goto label_1c8ba0;
    }
    ctx->pc = 0x1C8B98u;
    {
        const bool branch_taken_0x1c8b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B98u;
        // 0x1c8b9c: 0x26030630  addiu       $v1, $s0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b98) {
            ctx->pc = 0x1C8BCCu;
            goto label_1c8bcc;
        }
    }
    ctx->pc = 0x1C8BA0u;
label_1c8ba0:
    // 0x1c8ba0: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1c8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_1c8ba4:
    // 0x1c8ba4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1c8ba8:
    if (ctx->pc == 0x1C8BA8u) {
        ctx->pc = 0x1C8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BA4u;
        // 0x1c8ba8: 0xa2000640  sb          $zero, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8BACu;
        goto label_1c8bac;
    }
    ctx->pc = 0x1C8BA4u;
    {
        const bool branch_taken_0x1c8ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8ba4) {
            ctx->pc = 0x1C8BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8BA4u;
            // 0x1c8ba8: 0xa2000640  sb          $zero, 0x640($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8BC8u;
            goto label_1c8bc8;
        }
    }
    ctx->pc = 0x1C8BACu;
label_1c8bac:
    // 0x1c8bac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8bb0:
    // 0x1c8bb0: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x1c8bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
label_1c8bb4:
    // 0x1c8bb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8bb8:
    // 0x1c8bb8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c8bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c8bbc:
    // 0x1c8bbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8bc0:
    // 0x1c8bc0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c8bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c8bc4:
    // 0x1c8bc4: 0xa2000640  sb          $zero, 0x640($s0)
    ctx->pc = 0x1c8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 0));
label_1c8bc8:
    // 0x1c8bc8: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x1c8bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
label_1c8bcc:
    // 0x1c8bcc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c8bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c8bd0:
    // 0x1c8bd0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c8bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c8bd4:
    // 0x1c8bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8bd8:
    // 0x1c8bd8: 0x3e00008  jr          $ra
label_1c8bdc:
    if (ctx->pc == 0x1C8BDCu) {
        ctx->pc = 0x1C8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BD8u;
        // 0x1c8bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8BE0u;
        goto label_fallthrough_0x1c8bd8;
    }
    ctx->pc = 0x1C8BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BD8u;
        // 0x1c8bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8bd8:
    ctx->pc = 0x1C8BE0u;
}
