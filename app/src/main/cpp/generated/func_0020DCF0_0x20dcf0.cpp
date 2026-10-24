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

// Function: func_0020DCF0
// Address: 0x20dcf0 - 0x20e480
void func_0020DCF0_0x20dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020DCF0_0x20dcf0");
#endif

    switch (ctx->pc) {
        case 0x20dd1cu: goto label_20dd1c;
        case 0x20dd38u: goto label_20dd38;
        case 0x20de1cu: goto label_20de1c;
        case 0x20de20u: goto label_20de20;
        case 0x20de80u: goto label_20de80;
        case 0x20df68u: goto label_20df68;
        case 0x20dffcu: goto label_20dffc;
        case 0x20e0c4u: goto label_20e0c4;
        case 0x20e0d8u: goto label_20e0d8;
        case 0x20e120u: goto label_20e120;
        case 0x20e130u: goto label_20e130;
        case 0x20e1b0u: goto label_20e1b0;
        case 0x20e1fcu: goto label_20e1fc;
        case 0x20e224u: goto label_20e224;
        case 0x20e258u: goto label_20e258;
        case 0x20e268u: goto label_20e268;
        case 0x20e31cu: goto label_20e31c;
        case 0x20e368u: goto label_20e368;
        case 0x20e37cu: goto label_20e37c;
        case 0x20e38cu: goto label_20e38c;
        case 0x20e39cu: goto label_20e39c;
        case 0x20e3acu: goto label_20e3ac;
        case 0x20e400u: goto label_20e400;
        default: break;
    }

    ctx->pc = 0x20dcf0u;

    // 0x20dcf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20dcf4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x20dcf8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x20dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x20dcfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20dcfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd00: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x20dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x20dd04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20dd08: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x20dd08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x20dd0c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20dd10: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x20dd10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x20dd14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20DD14u;
    SET_GPR_U32(ctx, 31, 0x20DD1Cu);
    ctx->pc = 0x20DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD14u;
    // 0x20dd18: 0x8c520034  lw          $s2, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20DD14u, 0x20DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD1Cu;
label_20dd1c:
    // 0x20dd1c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x20dd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20dd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd24: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20dd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x20dd28: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20dd28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20dd2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20dd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20dd30: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x20DD30u;
    SET_GPR_U32(ctx, 31, 0x20DD38u);
    ctx->pc = 0x20DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD30u;
    // 0x20dd34: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x20DD30u, 0x20DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD38u;
label_20dd38:
    // 0x20dd38: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20dd3c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x20dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20dd40: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20dd44: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DD44u;
    {
        const bool branch_taken_0x20dd44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD44u;
        // 0x20dd48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd44) {
            ctx->pc = 0x20DD64u;
            goto label_20dd64;
        }
    }
    ctx->pc = 0x20DD4Cu;
    // 0x20dd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dd50: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20dd54: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20dd54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20dd58: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20dd58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20dd5c: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x20DD5Cu;
    {
        const bool branch_taken_0x20dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD5Cu;
        // 0x20dd60: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd5c) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DD64u;
label_20dd64:
    // 0x20dd64: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x20dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20dd68: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DD68u;
    {
        const bool branch_taken_0x20dd68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD68u;
        // 0x20dd6c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd68) {
            ctx->pc = 0x20DD88u;
            goto label_20dd88;
        }
    }
    ctx->pc = 0x20DD70u;
    // 0x20dd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dd74: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20dd78: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20dd78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20dd7c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20dd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20dd80: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x20DD80u;
    {
        const bool branch_taken_0x20dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD80u;
        // 0x20dd84: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd80) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DD88u;
label_20dd88:
    // 0x20dd88: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DD88u;
    {
        const bool branch_taken_0x20dd88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD88u;
        // 0x20dd8c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd88) {
            ctx->pc = 0x20DDA8u;
            goto label_20dda8;
        }
    }
    ctx->pc = 0x20DD90u;
    // 0x20dd90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dd94: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20dd98: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20dd98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20dd9c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20dd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20dda0: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x20DDA0u;
    {
        const bool branch_taken_0x20dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA0u;
        // 0x20dda4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dda0) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DDA8u;
label_20dda8:
    // 0x20dda8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DDA8u;
    {
        const bool branch_taken_0x20dda8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA8u;
        // 0x20ddac: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dda8) {
            ctx->pc = 0x20DDC8u;
            goto label_20ddc8;
        }
    }
    ctx->pc = 0x20DDB0u;
    // 0x20ddb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ddb4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20ddb8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ddbc: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ddbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ddc0: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x20DDC0u;
    {
        const bool branch_taken_0x20ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDC0u;
        // 0x20ddc4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddc0) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DDC8u;
label_20ddc8:
    // 0x20ddc8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DDC8u;
    {
        const bool branch_taken_0x20ddc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDC8u;
        // 0x20ddcc: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddc8) {
            ctx->pc = 0x20DDE8u;
            goto label_20dde8;
        }
    }
    ctx->pc = 0x20DDD0u;
    // 0x20ddd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ddd4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20ddd8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ddd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20dddc: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20dddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20dde0: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x20DDE0u;
    {
        const bool branch_taken_0x20dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE0u;
        // 0x20dde4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dde0) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DDE8u;
label_20dde8:
    // 0x20dde8: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20DDE8u;
    {
        const bool branch_taken_0x20dde8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE8u;
        // 0x20ddec: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dde8) {
            ctx->pc = 0x20DE28u;
            goto label_20de28;
        }
    }
    ctx->pc = 0x20DDF0u;
    // 0x20ddf0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20ddf4: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20DDF4u;
    {
        const bool branch_taken_0x20ddf4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDF4u;
        // 0x20ddf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddf4) {
            ctx->pc = 0x20DE10u;
            goto label_20de10;
        }
    }
    ctx->pc = 0x20DDFCu;
    // 0x20ddfc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20de00: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20de00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20de04: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20de04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20de08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20DE08u;
    {
        const bool branch_taken_0x20de08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE08u;
        // 0x20de0c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de08) {
            ctx->pc = 0x20DE1Cu;
            goto label_20de1c;
        }
    }
    ctx->pc = 0x20DE10u;
label_20de10:
    // 0x20de10: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20de10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20de14: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20de14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20de18: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20de18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_20de1c:
    // 0x20de1c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20de1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_20de20:
    // 0x20de20: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x20DE20u;
    {
        const bool branch_taken_0x20de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE20u;
        // 0x20de24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de20) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20DE28u;
label_20de28:
    // 0x20de28: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DE28u;
    {
        const bool branch_taken_0x20de28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE28u;
        // 0x20de2c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de28) {
            ctx->pc = 0x20DE4Cu;
            goto label_20de4c;
        }
    }
    ctx->pc = 0x20DE30u;
    // 0x20de30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de34: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20de34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20de38: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20de38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20de3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20de3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de40: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20de40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20de44: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x20DE44u;
    {
        const bool branch_taken_0x20de44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE44u;
        // 0x20de48: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de44) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DE4Cu;
label_20de4c:
    // 0x20de4c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DE4Cu;
    {
        const bool branch_taken_0x20de4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE4Cu;
        // 0x20de50: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de4c) {
            ctx->pc = 0x20DE6Cu;
            goto label_20de6c;
        }
    }
    ctx->pc = 0x20DE54u;
    // 0x20de54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20de54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de58: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20de5c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20de5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20de60: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20de60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20de64: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x20DE64u;
    {
        const bool branch_taken_0x20de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE64u;
        // 0x20de68: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de64) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DE6Cu;
label_20de6c:
    // 0x20de6c: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20DE6Cu;
    {
        const bool branch_taken_0x20de6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE6Cu;
        // 0x20de70: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de6c) {
            ctx->pc = 0x20DED4u;
            goto label_20ded4;
        }
    }
    ctx->pc = 0x20DE74u;
    // 0x20de74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20de74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de78: 0xc0a3b4a  jal         func_28ED28
    ctx->pc = 0x20DE78u;
    SET_GPR_U32(ctx, 31, 0x20DE80u);
    ctx->pc = 0x20DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DE78u;
    // 0x20de7c: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED28u, 0x20DE78u, 0x20DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DE80u;
label_20de80:
    // 0x20de80: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20de80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20de84: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20DE84u;
    {
        const bool branch_taken_0x20de84 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE84u;
        // 0x20de88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de84) {
            ctx->pc = 0x20DEBCu;
            goto label_20debc;
        }
    }
    ctx->pc = 0x20DE8Cu;
    // 0x20de8c: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20de90: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20de90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20de94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20DE94u;
    {
        const bool branch_taken_0x20de94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE94u;
        // 0x20de98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de94) {
            ctx->pc = 0x20DEB0u;
            goto label_20deb0;
        }
    }
    ctx->pc = 0x20DE9Cu;
    // 0x20de9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20dea0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20dea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20dea4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20dea8: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x20DEA8u;
    {
        const bool branch_taken_0x20dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEA8u;
        // 0x20deac: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dea8) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DEB0u;
label_20deb0:
    // 0x20deb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20deb4: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x20deb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x20deb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20debc:
    // 0x20debc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20debcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dec0: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20dec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dec8: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x20dec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x20decc: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x20DECCu;
    {
        const bool branch_taken_0x20decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DECCu;
        // 0x20ded0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20decc) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20DED4u;
label_20ded4:
    // 0x20ded4: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20DED4u;
    {
        const bool branch_taken_0x20ded4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ded4) {
            ctx->pc = 0x20DED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DED4u;
            // 0x20ded8: 0x84a40046  lh          $a0, 0x46($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DF00u;
            goto label_20df00;
        }
    }
    ctx->pc = 0x20DEDCu;
    // 0x20dedc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x20dedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x20dee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20dee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20dee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dee8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20deec: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20deecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20def0: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20def0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20def4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20def4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20def8: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x20DEF8u;
    {
        const bool branch_taken_0x20def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEF8u;
        // 0x20defc: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20def8) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DF00u;
label_20df00:
    // 0x20df00: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x20df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x20df04: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DF04u;
    {
        const bool branch_taken_0x20df04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF04u;
        // 0x20df08: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df04) {
            ctx->pc = 0x20DF24u;
            goto label_20df24;
        }
    }
    ctx->pc = 0x20DF0Cu;
    // 0x20df0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20df10: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20df14: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20df14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20df18: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20df18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20df1c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x20DF1Cu;
    {
        const bool branch_taken_0x20df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF1Cu;
        // 0x20df20: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df1c) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DF24u;
label_20df24:
    // 0x20df24: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DF24u;
    {
        const bool branch_taken_0x20df24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF24u;
        // 0x20df28: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df24) {
            ctx->pc = 0x20DF44u;
            goto label_20df44;
        }
    }
    ctx->pc = 0x20DF2Cu;
    // 0x20df2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20df30: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20df34: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20df34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20df38: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20df38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20df3c: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x20DF3Cu;
    {
        const bool branch_taken_0x20df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF3Cu;
        // 0x20df40: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df3c) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20DF44u;
label_20df44:
    // 0x20df44: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DF44u;
    {
        const bool branch_taken_0x20df44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF44u;
        // 0x20df48: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df44) {
            ctx->pc = 0x20DF54u;
            goto label_20df54;
        }
    }
    ctx->pc = 0x20DF4Cu;
    // 0x20df4c: 0x54820012  bnel        $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20DF4Cu;
    {
        const bool branch_taken_0x20df4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20df4c) {
            ctx->pc = 0x20DF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DF4Cu;
            // 0x20df50: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DF98u;
            goto label_20df98;
        }
    }
    ctx->pc = 0x20DF54u;
label_20df54:
    // 0x20df54: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x20df54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x20df58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20df58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20df5c: 0xae2017a4  sw          $zero, 0x17A4($s1)
    ctx->pc = 0x20df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
    // 0x20df60: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20DF60u;
    SET_GPR_U32(ctx, 31, 0x20DF68u);
    ctx->pc = 0x20DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF60u;
    // 0x20df64: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20DF60u, 0x20DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF68u;
label_20df68:
    // 0x20df68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20df6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DF6Cu;
    {
        const bool branch_taken_0x20df6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF6Cu;
        // 0x20df70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df6c) {
            ctx->pc = 0x20DF84u;
            goto label_20df84;
        }
    }
    ctx->pc = 0x20DF74u;
    // 0x20df74: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20df74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20df78: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20df78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20df7c: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
    ctx->pc = 0x20DF7Cu;
    {
        const bool branch_taken_0x20df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF7Cu;
        // 0x20df80: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df7c) {
            ctx->pc = 0x20DE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de1c;
        }
    }
    ctx->pc = 0x20DF84u;
label_20df84:
    // 0x20df84: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20df84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20df88: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20df88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20df8c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20df8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20df90: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x20DF90u;
    {
        const bool branch_taken_0x20df90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF90u;
        // 0x20df94: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df90) {
            ctx->pc = 0x20DE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de20;
        }
    }
    ctx->pc = 0x20DF98u;
label_20df98:
    // 0x20df98: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x20df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x20df9c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x20DF9Cu;
    {
        const bool branch_taken_0x20df9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF9Cu;
        // 0x20dfa0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df9c) {
            ctx->pc = 0x20E298u;
            goto label_20e298;
        }
    }
    ctx->pc = 0x20DFA4u;
    // 0x20dfa4: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20dfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20dfa8: 0x546000bc  bnel        $v1, $zero, . + 4 + (0xBC << 2)
    ctx->pc = 0x20DFA8u;
    {
        const bool branch_taken_0x20dfa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dfa8) {
            ctx->pc = 0x20DFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DFA8u;
            // 0x20dfac: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E29Cu;
            goto label_20e29c;
        }
    }
    ctx->pc = 0x20DFB0u;
    // 0x20dfb0: 0x2483fff7  addiu       $v1, $a0, -0x9
    ctx->pc = 0x20dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x20dfb4: 0x2c62004d  sltiu       $v0, $v1, 0x4D
    ctx->pc = 0x20dfb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)77) ? 1 : 0);
    // 0x20dfb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DFB8u;
    {
        const bool branch_taken_0x20dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFB8u;
        // 0x20dfbc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfb8) {
            ctx->pc = 0x20DFD8u;
            goto label_20dfd8;
        }
    }
    ctx->pc = 0x20DFC0u;
    // 0x20dfc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20dfc4: 0x244225a0  addiu       $v0, $v0, 0x25A0
    ctx->pc = 0x20dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9632));
    // 0x20dfc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20dfcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20dfd0: 0x800008  jr          $a0
    ctx->pc = 0x20DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20E188u: goto label_20e188;
            case 0x20E280u: goto label_20e280;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DFD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20DFD8u;
label_20dfd8:
    // 0x20dfd8: 0x52400019  beql        $s2, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x20DFD8u;
    {
        const bool branch_taken_0x20dfd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dfd8) {
            ctx->pc = 0x20DFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DFD8u;
            // 0x20dfdc: 0xc6210760  lwc1        $f1, 0x760($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E040u;
            goto label_20e040;
        }
    }
    ctx->pc = 0x20DFE0u;
    // 0x20dfe0: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x20dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x20dfe4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x20dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x20dfe8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20dfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x20dfec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20dfecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20dff0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20dff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20dff4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x20DFF4u;
    SET_GPR_U32(ctx, 31, 0x20DFFCu);
    ctx->pc = 0x20DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFF4u;
    // 0x20dff8: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x20DFF4u, 0x20DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFFCu;
label_20dffc:
    // 0x20dffc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x20dffcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x20e000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e004: 0x0  nop
    ctx->pc = 0x20e004u;
    // NOP
    // 0x20e008: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e00c: 0x0  nop
    ctx->pc = 0x20e00cu;
    // NOP
    // 0x20e010: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20E010u;
    {
        const bool branch_taken_0x20e010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E010u;
        // 0x20e014: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e010) {
            ctx->pc = 0x20E01Cu;
            goto label_20e01c;
        }
    }
    ctx->pc = 0x20E018u;
    // 0x20e018: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x20e018u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_20e01c:
    // 0x20e01c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20e01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20e020: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20e024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e028: 0x0  nop
    ctx->pc = 0x20e028u;
    // NOP
    // 0x20e02c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20e02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e030: 0x0  nop
    ctx->pc = 0x20e030u;
    // NOP
    // 0x20e034: 0x45030099  bc1tl       . + 4 + (0x99 << 2)
    ctx->pc = 0x20E034u;
    {
        const bool branch_taken_0x20e034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e034) {
            ctx->pc = 0x20E038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E034u;
            // 0x20e038: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E29Cu;
            goto label_20e29c;
        }
    }
    ctx->pc = 0x20E03Cu;
    // 0x20e03c: 0xc6210760  lwc1        $f1, 0x760($s1)
    ctx->pc = 0x20e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e040:
    // 0x20e040: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20e040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20e044: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20e048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e04c: 0x0  nop
    ctx->pc = 0x20e04cu;
    // NOP
    // 0x20e050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e054: 0x0  nop
    ctx->pc = 0x20e054u;
    // NOP
    // 0x20e058: 0x45020090  bc1fl       . + 4 + (0x90 << 2)
    ctx->pc = 0x20E058u;
    {
        const bool branch_taken_0x20e058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e058) {
            ctx->pc = 0x20E05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E058u;
            // 0x20e05c: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E29Cu;
            goto label_20e29c;
        }
    }
    ctx->pc = 0x20E060u;
    // 0x20e060: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20e060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20e064: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x20e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x20e068: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20E068u;
    {
        const bool branch_taken_0x20e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e068) {
            ctx->pc = 0x20E06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E068u;
            // 0x20e06c: 0xc620173c  lwc1        $f0, 0x173C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E0A4u;
            goto label_20e0a4;
        }
    }
    ctx->pc = 0x20E070u;
    // 0x20e070: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20e074: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20e074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20e078: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20e078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e07c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E07Cu;
    {
        const bool branch_taken_0x20e07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E07Cu;
        // 0x20e080: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e07c) {
            ctx->pc = 0x20E08Cu;
            goto label_20e08c;
        }
    }
    ctx->pc = 0x20E084u;
    // 0x20e084: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E084u;
    {
        const bool branch_taken_0x20e084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E084u;
        // 0x20e088: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e084) {
            ctx->pc = 0x20E090u;
            goto label_20e090;
        }
    }
    ctx->pc = 0x20E08Cu;
label_20e08c:
    // 0x20e08c: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20e08cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20e090:
    // 0x20e090: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x20e090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20e094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e098: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20e098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20e09c: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x20E09Cu;
    {
        const bool branch_taken_0x20e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E09Cu;
        // 0x20e0a0: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e09c) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E0A4u;
label_20e0a4:
    // 0x20e0a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20e0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20e0a8: 0x0  nop
    ctx->pc = 0x20e0a8u;
    // NOP
    // 0x20e0ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20e0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e0b0: 0x0  nop
    ctx->pc = 0x20e0b0u;
    // NOP
    // 0x20e0b4: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x20E0B4u;
    {
        const bool branch_taken_0x20e0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0B4u;
        // 0x20e0b8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0b4) {
            ctx->pc = 0x20E150u;
            goto label_20e150;
        }
    }
    ctx->pc = 0x20E0BCu;
    // 0x20e0bc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20E0BCu;
    SET_GPR_U32(ctx, 31, 0x20E0C4u);
    ctx->pc = 0x20E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E0BCu;
    // 0x20e0c0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20E0BCu, 0x20E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0C4u;
label_20e0c4:
    // 0x20e0c4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20e0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20e0c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20E0C8u;
    {
        const bool branch_taken_0x20e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e0c8) {
            ctx->pc = 0x20E0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E0C8u;
            // 0x20e0cc: 0x8e2317ac  lw          $v1, 0x17AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E0F8u;
            goto label_20e0f8;
        }
    }
    ctx->pc = 0x20E0D0u;
    // 0x20e0d0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20E0D0u;
    SET_GPR_U32(ctx, 31, 0x20E0D8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20E0D0u, 0x20E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0D8u;
label_20e0d8:
    // 0x20e0d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20e0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20e0dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20e0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20e0e0: 0x0  nop
    ctx->pc = 0x20e0e0u;
    // NOP
    // 0x20e0e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20e0e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e0e8: 0x0  nop
    ctx->pc = 0x20e0e8u;
    // NOP
    // 0x20e0ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20E0ECu;
    {
        const bool branch_taken_0x20e0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e0ec) {
            ctx->pc = 0x20E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E0ECu;
            // 0x20e0f0: 0xe634173c  swc1        $f20, 0x173C($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E0F4u;
            goto label_20e0f4;
        }
    }
    ctx->pc = 0x20E0F4u;
label_20e0f4:
    // 0x20e0f4: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
label_20e0f8:
    // 0x20e0f8: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20e0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20e0fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20e0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E100u;
    {
        const bool branch_taken_0x20e100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E100u;
        // 0x20e104: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e100) {
            ctx->pc = 0x20E110u;
            goto label_20e110;
        }
    }
    ctx->pc = 0x20E108u;
    // 0x20e108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E108u;
    {
        const bool branch_taken_0x20e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E108u;
        // 0x20e10c: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e108) {
            ctx->pc = 0x20E114u;
            goto label_20e114;
        }
    }
    ctx->pc = 0x20E110u;
label_20e110:
    // 0x20e110: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20e110u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20e114:
    // 0x20e114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e118: 0xc09d08e  jal         func_274238
    ctx->pc = 0x20E118u;
    SET_GPR_U32(ctx, 31, 0x20E120u);
    ctx->pc = 0x20E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E118u;
    // 0x20e11c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x20E118u, 0x20E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E120u;
label_20e120:
    // 0x20e120: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20e124: 0xa62017c8  sh          $zero, 0x17C8($s1)
    ctx->pc = 0x20e124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e128: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20E128u;
    SET_GPR_U32(ctx, 31, 0x20E130u);
    ctx->pc = 0x20E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E128u;
    // 0x20e12c: 0xae2217c4  sw          $v0, 0x17C4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20E128u, 0x20E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E130u;
label_20e130:
    // 0x20e130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e134: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20e134u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20e138: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20E138u;
    {
        const bool branch_taken_0x20e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e138) {
            ctx->pc = 0x20E13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E138u;
            // 0x20e13c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E140u;
            goto label_20e140;
        }
    }
    ctx->pc = 0x20E140u;
label_20e140:
    // 0x20e140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e144: 0x2010  mfhi        $a0
    ctx->pc = 0x20e144u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20e148: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x20E148u;
    {
        const bool branch_taken_0x20e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E148u;
        // 0x20e14c: 0xa22417bf  sb          $a0, 0x17BF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6079), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e148) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E150u;
label_20e150:
    // 0x20e150: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20e150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20e154: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20e154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20e158: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20e158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e15c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E15Cu;
    {
        const bool branch_taken_0x20e15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E15Cu;
        // 0x20e160: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e15c) {
            ctx->pc = 0x20E16Cu;
            goto label_20e16c;
        }
    }
    ctx->pc = 0x20E164u;
    // 0x20e164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E164u;
    {
        const bool branch_taken_0x20e164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E164u;
        // 0x20e168: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e164) {
            ctx->pc = 0x20E170u;
            goto label_20e170;
        }
    }
    ctx->pc = 0x20E16Cu;
label_20e16c:
    // 0x20e16c: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20e16cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20e170:
    // 0x20e170: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x20e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x20e174: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e178: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x20e178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e180: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x20E180u;
    {
        const bool branch_taken_0x20e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E180u;
        // 0x20e184: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e180) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E188u;
label_20e188:
    // 0x20e188: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x20e188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x20e18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e190: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x20e190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x20e194: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20e194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e198: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20e198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e19c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20e19cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20e1a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20e1a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1a8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x20E1A8u;
    SET_GPR_U32(ctx, 31, 0x20E1B0u);
    ctx->pc = 0x20E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1A8u;
    // 0x20e1ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x20E1A8u, 0x20E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1B0u;
label_20e1b0:
    // 0x20e1b0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x20e1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x20e1b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e1b8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20e1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x20e1bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e1c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20e1c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20e1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20e1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E1C8u;
    {
        const bool branch_taken_0x20e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1C8u;
        // 0x20e1cc: 0xe6201740  swc1        $f0, 0x1740($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1c8) {
            ctx->pc = 0x20E1DCu;
            goto label_20e1dc;
        }
    }
    ctx->pc = 0x20E1D0u;
    // 0x20e1d0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x20e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x20e1d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E1D4u;
    {
        const bool branch_taken_0x20e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1D4u;
        // 0x20e1d8: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1d4) {
            ctx->pc = 0x20E1E0u;
            goto label_20e1e0;
        }
    }
    ctx->pc = 0x20E1DCu;
label_20e1dc:
    // 0x20e1dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20e1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e1e0:
    // 0x20e1e0: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x20E1E0u;
    {
        const bool branch_taken_0x20e1e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1E0u;
        // 0x20e1e4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1e0) {
            ctx->pc = 0x20E25Cu;
            goto label_20e25c;
        }
    }
    ctx->pc = 0x20E1E8u;
    // 0x20e1e8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x20e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20e1ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20e1f0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x20e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e1f4: 0xc051e62  jal         func_147988
    ctx->pc = 0x20E1F4u;
    SET_GPR_U32(ctx, 31, 0x20E1FCu);
    ctx->pc = 0x20E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1F4u;
    // 0x20e1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x20E1F4u, 0x20E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1FCu;
label_20e1fc:
    // 0x20e1fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20e200: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20e200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20e204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e208: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20e208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20e20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e210: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x20e210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x20e214: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20e214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20e218: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20e218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e21c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x20E21Cu;
    SET_GPR_U32(ctx, 31, 0x20E224u);
    ctx->pc = 0x20E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E21Cu;
    // 0x20e220: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x20E21Cu, 0x20E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E224u;
label_20e224:
    // 0x20e224: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x20e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x20e228: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x20e228u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e22c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x20e22cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e230: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20e230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20e234: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x20e234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20e238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20e23c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20e23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e240: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20e240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e244: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20e248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20e248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e24c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x20e24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20e250: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x20E250u;
    SET_GPR_U32(ctx, 31, 0x20E258u);
    ctx->pc = 0x20E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E250u;
    // 0x20e254: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x20E250u, 0x20E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E258u;
label_20e258:
    // 0x20e258: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20e258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20e25c:
    // 0x20e25c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x20e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20e260: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x20E260u;
    SET_GPR_U32(ctx, 31, 0x20E268u);
    ctx->pc = 0x20E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E260u;
    // 0x20e264: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x20E260u, 0x20E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E268u;
label_20e268:
    // 0x20e268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e26c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x20e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20e270: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e274: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e274u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e278: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x20E278u;
    {
        const bool branch_taken_0x20e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E278u;
        // 0x20e27c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e278) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E280u;
label_20e280:
    // 0x20e280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e284: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20e288: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e28c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e28cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e290: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x20E290u;
    {
        const bool branch_taken_0x20e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E290u;
        // 0x20e294: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e290) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E298u;
label_20e298:
    // 0x20e298: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_20e29c:
    // 0x20e29c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x20e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x20e2a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20e2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20e2a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E2A8u;
    {
        const bool branch_taken_0x20e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A8u;
        // 0x20e2ac: 0x9624054a  lhu         $a0, 0x54A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2a8) {
            ctx->pc = 0x20E2C8u;
            goto label_20e2c8;
        }
    }
    ctx->pc = 0x20E2B0u;
    // 0x20e2b0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x20e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x20e2b4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E2B4u;
    {
        const bool branch_taken_0x20e2b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2B4u;
        // 0x20e2b8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2b4) {
            ctx->pc = 0x20E2C8u;
            goto label_20e2c8;
        }
    }
    ctx->pc = 0x20E2BCu;
    // 0x20e2bc: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20e2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20e2c0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20E2C0u;
    {
        const bool branch_taken_0x20e2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e2c0) {
            ctx->pc = 0x20E314u;
            goto label_20e314;
        }
    }
    ctx->pc = 0x20E2C8u;
label_20e2c8:
    // 0x20e2c8: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x20e2c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20e2cc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20e2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x20e2d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E2D0u;
    {
        const bool branch_taken_0x20e2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2D0u;
        // 0x20e2d4: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2d0) {
            ctx->pc = 0x20E2F4u;
            goto label_20e2f4;
        }
    }
    ctx->pc = 0x20E2D8u;
    // 0x20e2d8: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20E2D8u;
    {
        const bool branch_taken_0x20e2d8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2D8u;
        // 0x20e2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2d8) {
            ctx->pc = 0x20E314u;
            goto label_20e314;
        }
    }
    ctx->pc = 0x20E2E0u;
    // 0x20e2e0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20e2e4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e2e8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e2ec: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x20E2ECu;
    {
        const bool branch_taken_0x20e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2ECu;
        // 0x20e2f0: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2ec) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E2F4u;
label_20e2f4:
    // 0x20e2f4: 0x30620024  andi        $v0, $v1, 0x24
    ctx->pc = 0x20e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)36);
    // 0x20e2f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E2F8u;
    {
        const bool branch_taken_0x20e2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2F8u;
        // 0x20e2fc: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2f8) {
            ctx->pc = 0x20E30Cu;
            goto label_20e30c;
        }
    }
    ctx->pc = 0x20E300u;
    // 0x20e300: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x20e300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x20e304: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20E304u;
    {
        const bool branch_taken_0x20e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E304u;
        // 0x20e308: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e304) {
            ctx->pc = 0x20E338u;
            goto label_20e338;
        }
    }
    ctx->pc = 0x20E30Cu;
label_20e30c:
    // 0x20e30c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E30Cu;
    {
        const bool branch_taken_0x20e30c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E30Cu;
        // 0x20e310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e30c) {
            ctx->pc = 0x20E324u;
            goto label_20e324;
        }
    }
    ctx->pc = 0x20E314u;
label_20e314:
    // 0x20e314: 0xc09a8ce  jal         func_26A338
    ctx->pc = 0x20E314u;
    SET_GPR_U32(ctx, 31, 0x20E31Cu);
    ctx->pc = 0x20E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E314u;
    // 0x20e318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A338u, 0x20E314u, 0x20E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E31Cu;
label_20e31c:
    // 0x20e31c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x20E31Cu;
    {
        const bool branch_taken_0x20e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E31Cu;
        // 0x20e320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e31c) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E324u;
label_20e324:
    // 0x20e324: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20e328: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e32c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e32cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e330: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x20E330u;
    {
        const bool branch_taken_0x20e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E330u;
        // 0x20e334: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e330) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E338u;
label_20e338:
    // 0x20e338: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E338u;
    {
        const bool branch_taken_0x20e338 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E338u;
        // 0x20e33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e338) {
            ctx->pc = 0x20E34Cu;
            goto label_20e34c;
        }
    }
    ctx->pc = 0x20E340u;
    // 0x20e340: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20e344: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E344u;
    {
        const bool branch_taken_0x20e344 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E344u;
        // 0x20e348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e344) {
            ctx->pc = 0x20E360u;
            goto label_20e360;
        }
    }
    ctx->pc = 0x20E34Cu;
label_20e34c:
    // 0x20e34c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20e350: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e350u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e354: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e358: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x20E358u;
    {
        const bool branch_taken_0x20e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E358u;
        // 0x20e35c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e358) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E360u;
label_20e360:
    // 0x20e360: 0xc08344e  jal         func_20D138
    ctx->pc = 0x20E360u;
    SET_GPR_U32(ctx, 31, 0x20E368u);
    ctx->pc = 0x20E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E360u;
    // 0x20e364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D138u, 0x20E360u, 0x20E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E368u;
label_20e368:
    // 0x20e368: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x20E368u;
    {
        const bool branch_taken_0x20e368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E368u;
        // 0x20e36c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e368) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E370u;
    // 0x20e370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e374: 0xc0832b2  jal         func_20CAC8
    ctx->pc = 0x20E374u;
    SET_GPR_U32(ctx, 31, 0x20E37Cu);
    ctx->pc = 0x20E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E374u;
    // 0x20e378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC8u, 0x20E374u, 0x20E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E37Cu;
label_20e37c:
    // 0x20e37c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x20E37Cu;
    {
        const bool branch_taken_0x20e37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E37Cu;
        // 0x20e380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e37c) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E384u;
    // 0x20e384: 0xc083340  jal         func_20CD00
    ctx->pc = 0x20E384u;
    SET_GPR_U32(ctx, 31, 0x20E38Cu);
    ctx->pc = 0x20E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E384u;
    // 0x20e388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CD00u, 0x20E384u, 0x20E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E38Cu;
label_20e38c:
    // 0x20e38c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20E38Cu;
    {
        const bool branch_taken_0x20e38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E38Cu;
        // 0x20e390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e38c) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E394u;
    // 0x20e394: 0xc083450  jal         func_20D140
    ctx->pc = 0x20E394u;
    SET_GPR_U32(ctx, 31, 0x20E39Cu);
    ctx->pc = 0x20E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E394u;
    // 0x20e398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D140u, 0x20E394u, 0x20E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E39Cu;
label_20e39c:
    // 0x20e39c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20E39Cu;
    {
        const bool branch_taken_0x20e39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E39Cu;
        // 0x20e3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e39c) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E3A4u;
    // 0x20e3a4: 0xc0834e6  jal         func_20D398
    ctx->pc = 0x20E3A4u;
    SET_GPR_U32(ctx, 31, 0x20E3ACu);
    ctx->pc = 0x20E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3A4u;
    // 0x20e3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D398u, 0x20E3A4u, 0x20E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3ACu;
label_20e3ac:
    // 0x20e3ac: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x20E3ACu;
    {
        const bool branch_taken_0x20e3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3ACu;
        // 0x20e3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3ac) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E3B4u;
    // 0x20e3b4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20e3b8: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20e3b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20e3bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20e3c0: 0x2c620053  sltiu       $v0, $v1, 0x53
    ctx->pc = 0x20e3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)83) ? 1 : 0);
    // 0x20e3c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E3C4u;
    {
        const bool branch_taken_0x20e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3C4u;
        // 0x20e3c8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3c4) {
            ctx->pc = 0x20E3E4u;
            goto label_20e3e4;
        }
    }
    ctx->pc = 0x20E3CCu;
    // 0x20e3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20e3d0: 0x244226e0  addiu       $v0, $v0, 0x26E0
    ctx->pc = 0x20e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9952));
    // 0x20e3d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e3d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e3dc: 0x800008  jr          $a0
    ctx->pc = 0x20E3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E430u: goto label_20e430;
            case 0x20E448u: goto label_20e448;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E3DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20E3E4u;
label_20e3e4:
    // 0x20e3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e3e8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e3ec: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e3f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20E3F0u;
    {
        const bool branch_taken_0x20e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3F0u;
        // 0x20e3f4: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3f0) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E3F8u;
label_20e3f8:
    // 0x20e3f8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20E3F8u;
    SET_GPR_U32(ctx, 31, 0x20E400u);
    ctx->pc = 0x20E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3F8u;
    // 0x20e3fc: 0xae2017a4  sw          $zero, 0x17A4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20E3F8u, 0x20E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E400u;
label_20e400:
    // 0x20e400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e404: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E404u;
    {
        const bool branch_taken_0x20e404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E404u;
        // 0x20e408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e404) {
            ctx->pc = 0x20E41Cu;
            goto label_20e41c;
        }
    }
    ctx->pc = 0x20E40Cu;
    // 0x20e40c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20e40cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e410: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20e410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e414: 0x1000fe81  b           . + 4 + (-0x17F << 2)
    ctx->pc = 0x20E414u;
    {
        const bool branch_taken_0x20e414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E414u;
        // 0x20e418: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e414) {
            ctx->pc = 0x20DE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de1c;
        }
    }
    ctx->pc = 0x20E41Cu;
label_20e41c:
    // 0x20e41c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20e41cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e420: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20e420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e424: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e428: 0x1000fe7d  b           . + 4 + (-0x183 << 2)
    ctx->pc = 0x20E428u;
    {
        const bool branch_taken_0x20e428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E428u;
        // 0x20e42c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e428) {
            ctx->pc = 0x20DE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de20;
        }
    }
    ctx->pc = 0x20E430u;
label_20e430:
    // 0x20e430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e434: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20e438: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e438u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e43c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e43cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20E440u;
    {
        const bool branch_taken_0x20e440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E440u;
        // 0x20e444: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e440) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E448u;
label_20e448:
    // 0x20e448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e44c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e44cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e450: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e458: 0xae2017a4  sw          $zero, 0x17A4($s1)
    ctx->pc = 0x20e458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
    // 0x20e45c: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x20e45cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_20e460:
    // 0x20e460: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20e460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_20e464:
    // 0x20e464: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20e464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20e468: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20e468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20e46c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20e46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e470: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e474: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x20e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20e478: 0x3e00008  jr          $ra
    ctx->pc = 0x20E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E478u;
        // 0x20e47c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E480u;
}
