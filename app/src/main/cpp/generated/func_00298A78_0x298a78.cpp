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

// Function: func_00298A78
// Address: 0x298a78 - 0x298bf0
void func_00298A78_0x298a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298A78_0x298a78");
#endif

    switch (ctx->pc) {
        case 0x298adcu: goto label_298adc;
        case 0x298af4u: goto label_298af4;
        case 0x298b38u: goto label_298b38;
        case 0x298b48u: goto label_298b48;
        case 0x298b64u: goto label_298b64;
        case 0x298b7cu: goto label_298b7c;
        case 0x298bc0u: goto label_298bc0;
        case 0x298bd0u: goto label_298bd0;
        default: break;
    }

    ctx->pc = 0x298a78u;

    // 0x298a78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x298a7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x298a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x298a80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x298a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x298a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a88: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x298a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x298a8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x298a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x298a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x298a94: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x298a94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x298a98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x298a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x298a9c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x298A9Cu;
    {
        const bool branch_taken_0x298a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A9Cu;
        // 0x298aa0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a9c) {
            ctx->pc = 0x298BD0u;
            goto label_298bd0;
        }
    }
    ctx->pc = 0x298AA4u;
    // 0x298aa4: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x298aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x298aa8: 0x24020625  addiu       $v0, $zero, 0x625
    ctx->pc = 0x298aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
    // 0x298aac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298AACu;
    {
        const bool branch_taken_0x298aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AACu;
        // 0x298ab0: 0x24020627  addiu       $v0, $zero, 0x627 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1575));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298aac) {
            ctx->pc = 0x298AC4u;
            goto label_298ac4;
        }
    }
    ctx->pc = 0x298AB4u;
    // 0x298ab4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x298AB4u;
    {
        const bool branch_taken_0x298ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AB4u;
        // 0x298ab8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ab4) {
            ctx->pc = 0x298B50u;
            goto label_298b50;
        }
    }
    ctx->pc = 0x298ABCu;
    // 0x298abc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x298ABCu;
    {
        const bool branch_taken_0x298abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298ABCu;
        // 0x298ac0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298abc) {
            ctx->pc = 0x298BD4u;
            goto label_298bd4;
        }
    }
    ctx->pc = 0x298AC4u;
label_298ac4:
    // 0x298ac4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x298ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x298ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298acc: 0x2453abb0  addiu       $s3, $v0, -0x5450
    ctx->pc = 0x298accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
    // 0x298ad0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ad4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298AD4u;
    SET_GPR_U32(ctx, 31, 0x298ADCu);
    ctx->pc = 0x298AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AD4u;
    // 0x298ad8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298AD4u, 0x298ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298ADCu;
label_298adc:
    // 0x298adc: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x298adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x298ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ae4: 0x2472abb8  addiu       $s2, $v1, -0x5448
    ctx->pc = 0x298ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945720));
    // 0x298ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298aec: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298AECu;
    SET_GPR_U32(ctx, 31, 0x298AF4u);
    ctx->pc = 0x298AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AECu;
    // 0x298af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298AECu, 0x298AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AF4u;
label_298af4:
    // 0x298af4: 0x2623fffa  addiu       $v1, $s1, -0x6
    ctx->pc = 0x298af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x298af8: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x298af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x298afc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x298AFCu;
    {
        const bool branch_taken_0x298afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AFCu;
        // 0x298b00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298afc) {
            ctx->pc = 0x298BD0u;
            goto label_298bd0;
        }
    }
    ctx->pc = 0x298B04u;
    // 0x298b04: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298B04u;
    {
        const bool branch_taken_0x298b04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x298b04) {
            ctx->pc = 0x298B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298B04u;
            // 0x298b08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298B2Cu;
            goto label_298b2c;
        }
    }
    ctx->pc = 0x298B0Cu;
    // 0x298b0c: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x298b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x298b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298b14: 0x0  nop
    ctx->pc = 0x298b14u;
    // NOP
    // 0x298b18: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x298b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298b1c: 0x0  nop
    ctx->pc = 0x298b1cu;
    // NOP
    // 0x298b20: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x298B20u;
    {
        const bool branch_taken_0x298b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298b20) {
            ctx->pc = 0x298B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298B20u;
            // 0x298b24: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298BD4u;
            goto label_298bd4;
        }
    }
    ctx->pc = 0x298B28u;
    // 0x298b28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x298b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_298b2c:
    // 0x298b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b30: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298B30u;
    SET_GPR_U32(ctx, 31, 0x298B38u);
    ctx->pc = 0x298B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B30u;
    // 0x298b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298B30u, 0x298B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B38u;
label_298b38:
    // 0x298b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x298b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b40: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298B40u;
    SET_GPR_U32(ctx, 31, 0x298B48u);
    ctx->pc = 0x298B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B40u;
    // 0x298b44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298B40u, 0x298B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B48u;
label_298b48:
    // 0x298b48: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x298B48u;
    {
        const bool branch_taken_0x298b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B48u;
        // 0x298b4c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b48) {
            ctx->pc = 0x298BD4u;
            goto label_298bd4;
        }
    }
    ctx->pc = 0x298B50u;
label_298b50:
    // 0x298b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b54: 0x2453abb0  addiu       $s3, $v0, -0x5450
    ctx->pc = 0x298b54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
    // 0x298b58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298b5c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298B5Cu;
    SET_GPR_U32(ctx, 31, 0x298B64u);
    ctx->pc = 0x298B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B5Cu;
    // 0x298b60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298B5Cu, 0x298B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B64u;
label_298b64:
    // 0x298b64: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x298b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x298b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b6c: 0x2472abb8  addiu       $s2, $v1, -0x5448
    ctx->pc = 0x298b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945720));
    // 0x298b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b74: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298B74u;
    SET_GPR_U32(ctx, 31, 0x298B7Cu);
    ctx->pc = 0x298B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B74u;
    // 0x298b78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298B74u, 0x298B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B7Cu;
label_298b7c:
    // 0x298b7c: 0x2623fffa  addiu       $v1, $s1, -0x6
    ctx->pc = 0x298b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x298b80: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x298b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x298b84: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x298B84u;
    {
        const bool branch_taken_0x298b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B84u;
        // 0x298b88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b84) {
            ctx->pc = 0x298BD0u;
            goto label_298bd0;
        }
    }
    ctx->pc = 0x298B8Cu;
    // 0x298b8c: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298B8Cu;
    {
        const bool branch_taken_0x298b8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x298b8c) {
            ctx->pc = 0x298B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298B8Cu;
            // 0x298b90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298BB4u;
            goto label_298bb4;
        }
    }
    ctx->pc = 0x298B94u;
    // 0x298b94: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x298b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x298b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298b9c: 0x0  nop
    ctx->pc = 0x298b9cu;
    // NOP
    // 0x298ba0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x298ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298ba4: 0x0  nop
    ctx->pc = 0x298ba4u;
    // NOP
    // 0x298ba8: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x298BA8u;
    {
        const bool branch_taken_0x298ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298ba8) {
            ctx->pc = 0x298BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298BA8u;
            // 0x298bac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298BD4u;
            goto label_298bd4;
        }
    }
    ctx->pc = 0x298BB0u;
    // 0x298bb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x298bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_298bb4:
    // 0x298bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298bb8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298BB8u;
    SET_GPR_U32(ctx, 31, 0x298BC0u);
    ctx->pc = 0x298BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BB8u;
    // 0x298bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298BB8u, 0x298BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BC0u;
label_298bc0:
    // 0x298bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298bc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x298bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298bc8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298BC8u;
    SET_GPR_U32(ctx, 31, 0x298BD0u);
    ctx->pc = 0x298BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BC8u;
    // 0x298bcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298BC8u, 0x298BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BD0u;
label_298bd0:
    // 0x298bd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x298bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_298bd4:
    // 0x298bd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x298bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298bdc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x298bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298be4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x298be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298be8: 0x3e00008  jr          $ra
    ctx->pc = 0x298BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BE8u;
        // 0x298bec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298BF0u;
}
