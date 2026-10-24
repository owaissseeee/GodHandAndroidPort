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

// Function: func_00329ED8
// Address: 0x329ed8 - 0x329f98
void func_00329ED8_0x329ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329ED8_0x329ed8");
#endif

    switch (ctx->pc) {
        case 0x329ed8u: goto label_329ed8;
        case 0x329edcu: goto label_329edc;
        case 0x329ee0u: goto label_329ee0;
        case 0x329ee4u: goto label_329ee4;
        case 0x329ee8u: goto label_329ee8;
        case 0x329eecu: goto label_329eec;
        case 0x329ef0u: goto label_329ef0;
        case 0x329ef4u: goto label_329ef4;
        case 0x329ef8u: goto label_329ef8;
        case 0x329efcu: goto label_329efc;
        case 0x329f00u: goto label_329f00;
        case 0x329f04u: goto label_329f04;
        case 0x329f08u: goto label_329f08;
        case 0x329f0cu: goto label_329f0c;
        case 0x329f10u: goto label_329f10;
        case 0x329f14u: goto label_329f14;
        case 0x329f18u: goto label_329f18;
        case 0x329f1cu: goto label_329f1c;
        case 0x329f20u: goto label_329f20;
        case 0x329f24u: goto label_329f24;
        case 0x329f28u: goto label_329f28;
        case 0x329f2cu: goto label_329f2c;
        case 0x329f30u: goto label_329f30;
        case 0x329f34u: goto label_329f34;
        case 0x329f38u: goto label_329f38;
        case 0x329f3cu: goto label_329f3c;
        case 0x329f40u: goto label_329f40;
        case 0x329f44u: goto label_329f44;
        case 0x329f48u: goto label_329f48;
        case 0x329f4cu: goto label_329f4c;
        case 0x329f50u: goto label_329f50;
        case 0x329f54u: goto label_329f54;
        case 0x329f58u: goto label_329f58;
        case 0x329f5cu: goto label_329f5c;
        case 0x329f60u: goto label_329f60;
        case 0x329f64u: goto label_329f64;
        case 0x329f68u: goto label_329f68;
        case 0x329f6cu: goto label_329f6c;
        case 0x329f70u: goto label_329f70;
        case 0x329f74u: goto label_329f74;
        case 0x329f78u: goto label_329f78;
        case 0x329f7cu: goto label_329f7c;
        case 0x329f80u: goto label_329f80;
        case 0x329f84u: goto label_329f84;
        case 0x329f88u: goto label_329f88;
        case 0x329f8cu: goto label_329f8c;
        case 0x329f90u: goto label_329f90;
        case 0x329f94u: goto label_329f94;
        default: break;
    }

    ctx->pc = 0x329ed8u;

label_329ed8:
    // 0x329ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_329edc:
    // 0x329edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329ee0:
    // 0x329ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329ee4:
    // 0x329ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329ee8:
    // 0x329ee8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_329eec:
    if (ctx->pc == 0x329EECu) {
        ctx->pc = 0x329EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EE8u;
        // 0x329eec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EF0u;
        goto label_329ef0;
    }
    ctx->pc = 0x329EE8u;
    {
        const bool branch_taken_0x329ee8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x329EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EE8u;
        // 0x329eec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ee8) {
            ctx->pc = 0x329F10u;
            goto label_329f10;
        }
    }
    ctx->pc = 0x329EF0u;
label_329ef0:
    // 0x329ef0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x329ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_329ef4:
    // 0x329ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329ef8:
    // 0x329ef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329efc:
    // 0x329efc: 0x24842060  addiu       $a0, $a0, 0x2060
    ctx->pc = 0x329efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8288));
label_329f00:
    // 0x329f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329f04:
    // 0x329f04: 0x80cfc4c  j           func_33F130
label_329f08:
    if (ctx->pc == 0x329F08u) {
        ctx->pc = 0x329F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F04u;
        // 0x329f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F0Cu;
        goto label_329f0c;
    }
    ctx->pc = 0x329F04u;
    ctx->pc = 0x329F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F04u;
    // 0x329f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x329F04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329F0Cu;
label_329f0c:
    // 0x329f0c: 0x0  nop
    ctx->pc = 0x329f0cu;
    // NOP
label_329f10:
    // 0x329f10: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x329f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_329f14:
    // 0x329f14: 0x24511420  addiu       $s1, $v0, 0x1420
    ctx->pc = 0x329f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
label_329f18:
    // 0x329f18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x329f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_329f1c:
    // 0x329f1c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_329f20:
    if (ctx->pc == 0x329F20u) {
        ctx->pc = 0x329F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F1Cu;
        // 0x329f20: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F24u;
        goto label_329f24;
    }
    ctx->pc = 0x329F1Cu;
    {
        const bool branch_taken_0x329f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f1c) {
            ctx->pc = 0x329F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329F1Cu;
            // 0x329f20: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329F3Cu;
            goto label_329f3c;
        }
    }
    ctx->pc = 0x329F24u;
label_329f24:
    // 0x329f24: 0xc0c9a18  jal         func_326860
label_329f28:
    if (ctx->pc == 0x329F28u) {
        ctx->pc = 0x329F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F24u;
        // 0x329f28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F2Cu;
        goto label_329f2c;
    }
    ctx->pc = 0x329F24u;
    SET_GPR_U32(ctx, 31, 0x329F2Cu);
    ctx->pc = 0x329F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F24u;
    // 0x329f28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326860u, 0x329F24u, 0x329F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F2Cu;
label_329f2c:
    // 0x329f2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x329f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_329f30:
    // 0x329f30: 0x40f809  jalr        $v0
label_329f34:
    if (ctx->pc == 0x329F34u) {
        ctx->pc = 0x329F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F30u;
        // 0x329f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F38u;
        goto label_329f38;
    }
    ctx->pc = 0x329F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329F38u);
        ctx->pc = 0x329F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F30u;
        // 0x329f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329F30u, 0x329F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329F38u;
label_329f38:
    // 0x329f38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_329f3c:
    // 0x329f3c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_329f40:
    if (ctx->pc == 0x329F40u) {
        ctx->pc = 0x329F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F3Cu;
        // 0x329f40: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F44u;
        goto label_329f44;
    }
    ctx->pc = 0x329F3Cu;
    {
        const bool branch_taken_0x329f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f3c) {
            ctx->pc = 0x329F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329F3Cu;
            // 0x329f40: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329F50u;
            goto label_329f50;
        }
    }
    ctx->pc = 0x329F44u;
label_329f44:
    // 0x329f44: 0xc0c9fea  jal         func_327FA8
label_329f48:
    if (ctx->pc == 0x329F48u) {
        ctx->pc = 0x329F4Cu;
        goto label_329f4c;
    }
    ctx->pc = 0x329F44u;
    SET_GPR_U32(ctx, 31, 0x329F4Cu);
    ctx->pc = 0x327FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327FA8u, 0x329F44u, 0x329F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F4Cu;
label_329f4c:
    // 0x329f4c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x329f4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_329f50:
    // 0x329f50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x329f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_329f54:
    // 0x329f54: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_329f58:
    if (ctx->pc == 0x329F58u) {
        ctx->pc = 0x329F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F54u;
        // 0x329f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F5Cu;
        goto label_329f5c;
    }
    ctx->pc = 0x329F54u;
    {
        const bool branch_taken_0x329f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x329f54) {
            ctx->pc = 0x329F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329F54u;
            // 0x329f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329F84u;
            goto label_329f84;
        }
    }
    ctx->pc = 0x329F5Cu;
label_329f5c:
    // 0x329f5c: 0xc0cd654  jal         func_335950
label_329f60:
    if (ctx->pc == 0x329F60u) {
        ctx->pc = 0x329F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F5Cu;
        // 0x329f60: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F64u;
        goto label_329f64;
    }
    ctx->pc = 0x329F5Cu;
    SET_GPR_U32(ctx, 31, 0x329F64u);
    ctx->pc = 0x329F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F5Cu;
    // 0x329f60: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x329F5Cu, 0x329F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F64u;
label_329f64:
    // 0x329f64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x329f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_329f68:
    // 0x329f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_329f6c:
    if (ctx->pc == 0x329F6Cu) {
        ctx->pc = 0x329F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F68u;
        // 0x329f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F70u;
        goto label_329f70;
    }
    ctx->pc = 0x329F68u;
    {
        const bool branch_taken_0x329f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F68u;
        // 0x329f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f68) {
            ctx->pc = 0x329F80u;
            goto label_329f80;
        }
    }
    ctx->pc = 0x329F70u;
label_329f70:
    // 0x329f70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x329f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_329f74:
    // 0x329f74: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x329f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_329f78:
    // 0x329f78: 0x60f809  jalr        $v1
label_329f7c:
    if (ctx->pc == 0x329F7Cu) {
        ctx->pc = 0x329F80u;
        goto label_329f80;
    }
    ctx->pc = 0x329F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329F80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329F78u, 0x329F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329F80u;
label_329f80:
    // 0x329f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329f84:
    // 0x329f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329f88:
    // 0x329f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329f8c:
    // 0x329f8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329f90:
    // 0x329f90: 0x80ca782  j           func_329E08
label_329f94:
    if (ctx->pc == 0x329F94u) {
        ctx->pc = 0x329F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F90u;
        // 0x329f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F98u;
        goto label_fallthrough_0x329f90;
    }
    ctx->pc = 0x329F90u;
    ctx->pc = 0x329F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F90u;
    // 0x329f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329E08u, 0x329F90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x329f90:
    ctx->pc = 0x329F98u;
}
