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

// Function: func_0020EF08
// Address: 0x20ef08 - 0x20f310
void func_0020EF08_0x20ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020EF08_0x20ef08");
#endif

    switch (ctx->pc) {
        case 0x20ef24u: goto label_20ef24;
        case 0x20ef40u: goto label_20ef40;
        case 0x20f034u: goto label_20f034;
        case 0x20f178u: goto label_20f178;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f264u: goto label_20f264;
        case 0x20f274u: goto label_20f274;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2f4u: goto label_20f2f4;
        default: break;
    }

    ctx->pc = 0x20ef08u;

    // 0x20ef08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ef0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ef10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ef14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ef14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ef18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20ef1c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20EF1Cu;
    SET_GPR_U32(ctx, 31, 0x20EF24u);
    ctx->pc = 0x20EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF1Cu;
    // 0x20ef20: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20EF1Cu, 0x20EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF24u;
label_20ef24:
    // 0x20ef24: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x20ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x20ef28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ef28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ef2c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20ef2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x20ef30: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20ef30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20ef34: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20ef34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20ef38: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x20EF38u;
    SET_GPR_U32(ctx, 31, 0x20EF40u);
    ctx->pc = 0x20EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF38u;
    // 0x20ef3c: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x20EF38u, 0x20EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF40u;
label_20ef40:
    // 0x20ef40: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20ef44: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20ef48: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20ef4c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20EF4Cu;
    {
        const bool branch_taken_0x20ef4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF4Cu;
        // 0x20ef50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef4c) {
            ctx->pc = 0x20EF70u;
            goto label_20ef70;
        }
    }
    ctx->pc = 0x20EF54u;
    // 0x20ef54: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20ef58: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20ef5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ef60: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x20EF60u;
    {
        const bool branch_taken_0x20ef60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF60u;
        // 0x20ef64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef60) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20EF68u;
    // 0x20ef68: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x20EF68u;
    {
        const bool branch_taken_0x20ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF68u;
        // 0x20ef6c: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef68) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20EF70u;
label_20ef70:
    // 0x20ef70: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x20ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20ef74: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20EF74u;
    {
        const bool branch_taken_0x20ef74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF74u;
        // 0x20ef78: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef74) {
            ctx->pc = 0x20EF98u;
            goto label_20ef98;
        }
    }
    ctx->pc = 0x20EF7Cu;
    // 0x20ef7c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20ef80: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20ef84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ef84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ef88: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x20EF88u;
    {
        const bool branch_taken_0x20ef88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF88u;
        // 0x20ef8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef88) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20EF90u;
    // 0x20ef90: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x20EF90u;
    {
        const bool branch_taken_0x20ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF90u;
        // 0x20ef94: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef90) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20EF98u;
label_20ef98:
    // 0x20ef98: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20EF98u;
    {
        const bool branch_taken_0x20ef98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF98u;
        // 0x20ef9c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef98) {
            ctx->pc = 0x20EFBCu;
            goto label_20efbc;
        }
    }
    ctx->pc = 0x20EFA0u;
    // 0x20efa0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20efa4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20efa8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20efa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20efac: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x20EFACu;
    {
        const bool branch_taken_0x20efac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFACu;
        // 0x20efb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efac) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20EFB4u;
    // 0x20efb4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x20EFB4u;
    {
        const bool branch_taken_0x20efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFB4u;
        // 0x20efb8: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efb4) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20EFBCu;
label_20efbc:
    // 0x20efbc: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20EFBCu;
    {
        const bool branch_taken_0x20efbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFBCu;
        // 0x20efc0: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efbc) {
            ctx->pc = 0x20EFE0u;
            goto label_20efe0;
        }
    }
    ctx->pc = 0x20EFC4u;
    // 0x20efc4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20efc8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20efcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20efccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20efd0: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x20EFD0u;
    {
        const bool branch_taken_0x20efd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFD0u;
        // 0x20efd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efd0) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20EFD8u;
    // 0x20efd8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x20EFD8u;
    {
        const bool branch_taken_0x20efd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFD8u;
        // 0x20efdc: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efd8) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20EFE0u;
label_20efe0:
    // 0x20efe0: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20EFE0u;
    {
        const bool branch_taken_0x20efe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFE0u;
        // 0x20efe4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efe0) {
            ctx->pc = 0x20F004u;
            goto label_20f004;
        }
    }
    ctx->pc = 0x20EFE8u;
    // 0x20efe8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20efec: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20efecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20eff0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20eff4: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x20EFF4u;
    {
        const bool branch_taken_0x20eff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFF4u;
        // 0x20eff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eff4) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20EFFCu;
    // 0x20effc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x20EFFCu;
    {
        const bool branch_taken_0x20effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFFCu;
        // 0x20f000: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20effc) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F004u;
label_20f004:
    // 0x20f004: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20F004u;
    {
        const bool branch_taken_0x20f004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F004u;
        // 0x20f008: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f004) {
            ctx->pc = 0x20F03Cu;
            goto label_20f03c;
        }
    }
    ctx->pc = 0x20F00Cu;
    // 0x20f00c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f010: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f014: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f018: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x20F018u;
    {
        const bool branch_taken_0x20f018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F018u;
        // 0x20f01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f018) {
            ctx->pc = 0x20F1ECu;
            goto label_20f1ec;
        }
    }
    ctx->pc = 0x20F020u;
    // 0x20f020: 0x8e240748  lw          $a0, 0x748($s1)
    ctx->pc = 0x20f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1864)));
    // 0x20f024: 0x108000b5  beqz        $a0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x20F024u;
    {
        const bool branch_taken_0x20f024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F024u;
        // 0x20f028: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f024) {
            ctx->pc = 0x20F2FCu;
            goto label_20f2fc;
        }
    }
    ctx->pc = 0x20F02Cu;
    // 0x20f02c: 0xc0a052e  jal         func_2814B8
    ctx->pc = 0x20F02Cu;
    SET_GPR_U32(ctx, 31, 0x20F034u);
    ctx->pc = 0x2814B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2814B8u, 0x20F02Cu, 0x20F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F034u;
label_20f034:
    // 0x20f034: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x20F034u;
    {
        const bool branch_taken_0x20f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F034u;
        // 0x20f038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f034) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F03Cu;
label_20f03c:
    // 0x20f03c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F03Cu;
    {
        const bool branch_taken_0x20f03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F03Cu;
        // 0x20f040: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f03c) {
            ctx->pc = 0x20F060u;
            goto label_20f060;
        }
    }
    ctx->pc = 0x20F044u;
    // 0x20f044: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f048: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f04c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f050: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x20F050u;
    {
        const bool branch_taken_0x20f050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F050u;
        // 0x20f054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f050) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20F058u;
    // 0x20f058: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x20F058u;
    {
        const bool branch_taken_0x20f058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F058u;
        // 0x20f05c: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f058) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F060u;
label_20f060:
    // 0x20f060: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F060u;
    {
        const bool branch_taken_0x20f060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F060u;
        // 0x20f064: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f060) {
            ctx->pc = 0x20F084u;
            goto label_20f084;
        }
    }
    ctx->pc = 0x20F068u;
    // 0x20f068: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f06c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f070: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f074: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x20F074u;
    {
        const bool branch_taken_0x20f074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F074u;
        // 0x20f078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f074) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20F07Cu;
    // 0x20f07c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x20F07Cu;
    {
        const bool branch_taken_0x20f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F07Cu;
        // 0x20f080: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f07c) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F084u;
label_20f084:
    // 0x20f084: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F084u;
    {
        const bool branch_taken_0x20f084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F084u;
        // 0x20f088: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f084) {
            ctx->pc = 0x20F0A8u;
            goto label_20f0a8;
        }
    }
    ctx->pc = 0x20F08Cu;
    // 0x20f08c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f090: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f098: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x20F098u;
    {
        const bool branch_taken_0x20f098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F098u;
        // 0x20f09c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f098) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20F0A0u;
    // 0x20f0a0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x20F0A0u;
    {
        const bool branch_taken_0x20f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0A0u;
        // 0x20f0a4: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0a0) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F0A8u;
label_20f0a8:
    // 0x20f0a8: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F0A8u;
    {
        const bool branch_taken_0x20f0a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f0a8) {
            ctx->pc = 0x20F0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F0A8u;
            // 0x20f0ac: 0x84a30046  lh          $v1, 0x46($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F0CCu;
            goto label_20f0cc;
        }
    }
    ctx->pc = 0x20F0B0u;
    // 0x20f0b0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f0b4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f0b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f0bc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x20F0BCu;
    {
        const bool branch_taken_0x20f0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0BCu;
        // 0x20f0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0bc) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20F0C4u;
    // 0x20f0c4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x20F0C4u;
    {
        const bool branch_taken_0x20f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0C4u;
        // 0x20f0c8: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0c4) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F0CCu;
label_20f0cc:
    // 0x20f0cc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x20f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x20f0d0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F0D0u;
    {
        const bool branch_taken_0x20f0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0D0u;
        // 0x20f0d4: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0d0) {
            ctx->pc = 0x20F0F4u;
            goto label_20f0f4;
        }
    }
    ctx->pc = 0x20F0D8u;
    // 0x20f0d8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f0dc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f0e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f0e4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x20F0E4u;
    {
        const bool branch_taken_0x20f0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E4u;
        // 0x20f0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0e4) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20F0ECu;
    // 0x20f0ec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x20F0ECu;
    {
        const bool branch_taken_0x20f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0ECu;
        // 0x20f0f0: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0ec) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F0F4u;
label_20f0f4:
    // 0x20f0f4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F0F4u;
    {
        const bool branch_taken_0x20f0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0F4u;
        // 0x20f0f8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0f4) {
            ctx->pc = 0x20F118u;
            goto label_20f118;
        }
    }
    ctx->pc = 0x20F0FCu;
    // 0x20f0fc: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f100: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f104: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f108: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x20F108u;
    {
        const bool branch_taken_0x20f108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F108u;
        // 0x20f10c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f108) {
            ctx->pc = 0x20F208u;
            goto label_20f208;
        }
    }
    ctx->pc = 0x20F110u;
    // 0x20f110: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x20F110u;
    {
        const bool branch_taken_0x20f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F110u;
        // 0x20f114: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f110) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F118u;
label_20f118:
    // 0x20f118: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x20F118u;
    {
        const bool branch_taken_0x20f118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F118u;
        // 0x20f11c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f118) {
            ctx->pc = 0x20F2F4u;
            goto label_20f2f4;
        }
    }
    ctx->pc = 0x20F120u;
    // 0x20f120: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x20F120u;
    {
        const bool branch_taken_0x20f120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F120u;
        // 0x20f124: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f120) {
            ctx->pc = 0x20F2F4u;
            goto label_20f2f4;
        }
    }
    ctx->pc = 0x20F128u;
    // 0x20f128: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20f12c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f130: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F134u;
    {
        const bool branch_taken_0x20f134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F134u;
        // 0x20f138: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f134) {
            ctx->pc = 0x20F158u;
            goto label_20f158;
        }
    }
    ctx->pc = 0x20F13Cu;
    // 0x20f13c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20f13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20f140: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F140u;
    {
        const bool branch_taken_0x20f140 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F140u;
        // 0x20f144: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f140) {
            ctx->pc = 0x20F154u;
            goto label_20f154;
        }
    }
    ctx->pc = 0x20F148u;
    // 0x20f148: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20f148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20f14c: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x20F14Cu;
    {
        const bool branch_taken_0x20f14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F14Cu;
        // 0x20f150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f14c) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F154u;
label_20f154:
    // 0x20f154: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x20f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_20f158:
    // 0x20f158: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x20f158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x20f15c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F15Cu;
    {
        const bool branch_taken_0x20f15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f15c) {
            ctx->pc = 0x20F160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F15Cu;
            // 0x20f160: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F184u;
            goto label_20f184;
        }
    }
    ctx->pc = 0x20F164u;
    // 0x20f164: 0x8e240748  lw          $a0, 0x748($s1)
    ctx->pc = 0x20f164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1864)));
    // 0x20f168: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F168u;
    {
        const bool branch_taken_0x20f168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f168) {
            ctx->pc = 0x20F16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F168u;
            // 0x20f16c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F184u;
            goto label_20f184;
        }
    }
    ctx->pc = 0x20F170u;
    // 0x20f170: 0xc0a0574  jal         func_2815D0
    ctx->pc = 0x20F170u;
    SET_GPR_U32(ctx, 31, 0x20F178u);
    ctx->pc = 0x2815D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2815D0u, 0x20F170u, 0x20F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F178u;
label_20f178:
    // 0x20f178: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x20F178u;
    {
        const bool branch_taken_0x20f178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F178u;
        // 0x20f17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f178) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F180u;
    // 0x20f180: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20f180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_20f184:
    // 0x20f184: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20f188: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x20F188u;
    {
        const bool branch_taken_0x20f188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F188u;
        // 0x20f18c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f188) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F190u;
    // 0x20f190: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20f190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20f194: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F194u;
    {
        const bool branch_taken_0x20f194 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20f194) {
            ctx->pc = 0x20F198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F194u;
            // 0x20f198: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F1A8u;
            goto label_20f1a8;
        }
    }
    ctx->pc = 0x20F19Cu;
    // 0x20f19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f1a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20F1A0u;
    {
        const bool branch_taken_0x20f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1A0u;
        // 0x20f1a4: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1a0) {
            ctx->pc = 0x20F1F0u;
            goto label_20f1f0;
        }
    }
    ctx->pc = 0x20F1A8u;
label_20f1a8:
    // 0x20f1a8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x20f1ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f1b0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20F1B0u;
    {
        const bool branch_taken_0x20f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f1b0) {
            ctx->pc = 0x20F244u;
            goto label_20f244;
        }
    }
    ctx->pc = 0x20F1B8u;
    // 0x20f1b8: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20f1bc: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20f1bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20f1c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20f1c4: 0x2c620054  sltiu       $v0, $v1, 0x54
    ctx->pc = 0x20f1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
    // 0x20f1c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20F1C8u;
    {
        const bool branch_taken_0x20f1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1C8u;
        // 0x20f1cc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1c8) {
            ctx->pc = 0x20F224u;
            goto label_20f224;
        }
    }
    ctx->pc = 0x20F1D0u;
    // 0x20f1d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f1d4: 0x24422ac0  addiu       $v0, $v0, 0x2AC0
    ctx->pc = 0x20f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10944));
    // 0x20f1d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f1dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f1e0: 0x800008  jr          $a0
    ctx->pc = 0x20F1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F1E8u: goto label_20f1e8;
            case 0x20F204u: goto label_20f204;
            case 0x20F224u: goto label_20f224;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F1E8u;
label_20f1e8:
    // 0x20f1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f1ec:
    // 0x20f1ec: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x20f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_20f1f0:
    // 0x20f1f0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20f1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20f1f4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20f1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20f1f8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20f1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20f1fc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x20F1FCu;
    {
        const bool branch_taken_0x20f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1FCu;
        // 0x20f200: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1fc) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F204u;
label_20f204:
    // 0x20f204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f208:
    // 0x20f208: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x20f208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20f20c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f210: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20f210u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20f214: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20f214u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20f218: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x20f218u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x20f21c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x20F21Cu;
    {
        const bool branch_taken_0x20f21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F21Cu;
        // 0x20f220: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f21c) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F224u;
label_20f224:
    // 0x20f224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f228: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20f22c: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20f22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20f230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f234: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20f234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20f238: 0xa22402f4  sb          $a0, 0x2F4($s1)
    ctx->pc = 0x20f238u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
    // 0x20f23c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x20F23Cu;
    {
        const bool branch_taken_0x20f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F23Cu;
        // 0x20f240: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f23c) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F244u;
label_20f244:
    // 0x20f244: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20F244u;
    SET_GPR_U32(ctx, 31, 0x20F24Cu);
    ctx->pc = 0x20F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F244u;
    // 0x20f248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20F244u, 0x20F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F24Cu;
label_20f24c:
    // 0x20f24c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20F24Cu;
    {
        const bool branch_taken_0x20f24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f24c) {
            ctx->pc = 0x20F250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F24Cu;
            // 0x20f250: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F27Cu;
            goto label_20f27c;
        }
    }
    ctx->pc = 0x20F254u;
    // 0x20f254: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x20F254u;
    SET_GPR_U32(ctx, 31, 0x20F25Cu);
    ctx->pc = 0x20F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F254u;
    // 0x20f258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x20F254u, 0x20F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F25Cu;
label_20f25c:
    // 0x20f25c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20F25Cu;
    SET_GPR_U32(ctx, 31, 0x20F264u);
    ctx->pc = 0x20F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F25Cu;
    // 0x20f260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20F25Cu, 0x20F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F264u;
label_20f264:
    // 0x20f264: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F264u;
    {
        const bool branch_taken_0x20f264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f264) {
            ctx->pc = 0x20F268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F264u;
            // 0x20f268: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F27Cu;
            goto label_20f27c;
        }
    }
    ctx->pc = 0x20F26Cu;
    // 0x20f26c: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x20F26Cu;
    SET_GPR_U32(ctx, 31, 0x20F274u);
    ctx->pc = 0x20F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F26Cu;
    // 0x20f270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x20F26Cu, 0x20F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F274u;
label_20f274:
    // 0x20f274: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20F274u;
    {
        const bool branch_taken_0x20f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F274u;
        // 0x20f278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f274) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F27Cu;
label_20f27c:
    // 0x20f27c: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20f27cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20f280: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20f284: 0x2c620054  sltiu       $v0, $v1, 0x54
    ctx->pc = 0x20f284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
    // 0x20f288: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F288u;
    {
        const bool branch_taken_0x20f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F288u;
        // 0x20f28c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f288) {
            ctx->pc = 0x20F2A8u;
            goto label_20f2a8;
        }
    }
    ctx->pc = 0x20F290u;
    // 0x20f290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f294: 0x24422c10  addiu       $v0, $v0, 0x2C10
    ctx->pc = 0x20f294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11280));
    // 0x20f298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f29c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f2a0: 0x800008  jr          $a0
    ctx->pc = 0x20F2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F2A8u: goto label_20f2a8;
            case 0x20F2C4u: goto label_20f2c4;
            case 0x20F2E0u: goto label_20f2e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F2A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F2A8u;
label_20f2a8:
    // 0x20f2a8: 0x8e240748  lw          $a0, 0x748($s1)
    ctx->pc = 0x20f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1864)));
    // 0x20f2ac: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20F2ACu;
    {
        const bool branch_taken_0x20f2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2ACu;
        // 0x20f2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2ac) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F2B4u;
    // 0x20f2b4: 0xc0a052e  jal         func_2814B8
    ctx->pc = 0x20F2B4u;
    SET_GPR_U32(ctx, 31, 0x20F2BCu);
    ctx->pc = 0x2814B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2814B8u, 0x20F2B4u, 0x20F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2BCu;
label_20f2bc:
    // 0x20f2bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20F2BCu;
    {
        const bool branch_taken_0x20f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2BCu;
        // 0x20f2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2bc) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F2C4u;
label_20f2c4:
    // 0x20f2c4: 0x8e240748  lw          $a0, 0x748($s1)
    ctx->pc = 0x20f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1864)));
    // 0x20f2c8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x20F2C8u;
    {
        const bool branch_taken_0x20f2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2C8u;
        // 0x20f2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2c8) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F2D0u;
    // 0x20f2d0: 0xc0a052e  jal         func_2814B8
    ctx->pc = 0x20F2D0u;
    SET_GPR_U32(ctx, 31, 0x20F2D8u);
    ctx->pc = 0x2814B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2814B8u, 0x20F2D0u, 0x20F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2D8u;
label_20f2d8:
    // 0x20f2d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20F2D8u;
    {
        const bool branch_taken_0x20f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2D8u;
        // 0x20f2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2d8) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F2E0u;
label_20f2e0:
    // 0x20f2e0: 0x8e240748  lw          $a0, 0x748($s1)
    ctx->pc = 0x20f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1864)));
    // 0x20f2e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F2E4u;
    {
        const bool branch_taken_0x20f2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2E4u;
        // 0x20f2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2e4) {
            ctx->pc = 0x20F2F8u;
            goto label_20f2f8;
        }
    }
    ctx->pc = 0x20F2ECu;
    // 0x20f2ec: 0xc0a0534  jal         func_2814D0
    ctx->pc = 0x20F2ECu;
    SET_GPR_U32(ctx, 31, 0x20F2F4u);
    ctx->pc = 0x2814D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2814D0u, 0x20F2ECu, 0x20F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2F4u;
label_20f2f4:
    // 0x20f2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f2f8:
    // 0x20f2f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20f2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f2fc:
    // 0x20f2fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f304: 0x3e00008  jr          $ra
    ctx->pc = 0x20F304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F304u;
        // 0x20f308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F30Cu;
    // 0x20f30c: 0x0  nop
    ctx->pc = 0x20f30cu;
    // NOP
    ctx->pc = 0x20f310u;
}
