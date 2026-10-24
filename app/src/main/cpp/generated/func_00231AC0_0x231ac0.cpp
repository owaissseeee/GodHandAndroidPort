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

// Function: func_00231AC0
// Address: 0x231ac0 - 0x232500
void func_00231AC0_0x231ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00231AC0_0x231ac0");
#endif

    switch (ctx->pc) {
        case 0x231b08u: goto label_231b08;
        case 0x231b50u: goto label_231b50;
        case 0x231b7cu: goto label_231b7c;
        case 0x231becu: goto label_231bec;
        case 0x231c10u: goto label_231c10;
        case 0x231c48u: goto label_231c48;
        case 0x231c6cu: goto label_231c6c;
        case 0x231ca0u: goto label_231ca0;
        case 0x231cc4u: goto label_231cc4;
        case 0x231cf4u: goto label_231cf4;
        case 0x231d14u: goto label_231d14;
        case 0x231d28u: goto label_231d28;
        case 0x231d98u: goto label_231d98;
        case 0x231dbcu: goto label_231dbc;
        case 0x231decu: goto label_231dec;
        case 0x231e10u: goto label_231e10;
        case 0x231e58u: goto label_231e58;
        case 0x231e7cu: goto label_231e7c;
        case 0x231ec0u: goto label_231ec0;
        case 0x231ee4u: goto label_231ee4;
        case 0x231f08u: goto label_231f08;
        case 0x231f1cu: goto label_231f1c;
        case 0x231f58u: goto label_231f58;
        case 0x231f7cu: goto label_231f7c;
        case 0x231fc0u: goto label_231fc0;
        case 0x231fe4u: goto label_231fe4;
        case 0x23202cu: goto label_23202c;
        case 0x232050u: goto label_232050;
        case 0x232098u: goto label_232098;
        case 0x2320a8u: goto label_2320a8;
        case 0x232180u: goto label_232180;
        case 0x2321a4u: goto label_2321a4;
        case 0x2321bcu: goto label_2321bc;
        case 0x2321d4u: goto label_2321d4;
        case 0x2321e0u: goto label_2321e0;
        case 0x2321f0u: goto label_2321f0;
        case 0x232204u: goto label_232204;
        case 0x232210u: goto label_232210;
        case 0x232254u: goto label_232254;
        case 0x23227cu: goto label_23227c;
        case 0x23229cu: goto label_23229c;
        case 0x2322d0u: goto label_2322d0;
        case 0x2322d8u: goto label_2322d8;
        case 0x2322f8u: goto label_2322f8;
        case 0x232318u: goto label_232318;
        case 0x232328u: goto label_232328;
        case 0x2323ccu: goto label_2323cc;
        case 0x2323f8u: goto label_2323f8;
        case 0x23241cu: goto label_23241c;
        case 0x232434u: goto label_232434;
        case 0x23244cu: goto label_23244c;
        case 0x232458u: goto label_232458;
        case 0x232468u: goto label_232468;
        case 0x23247cu: goto label_23247c;
        case 0x232488u: goto label_232488;
        case 0x23249cu: goto label_23249c;
        default: break;
    }

    ctx->pc = 0x231ac0u;

    // 0x231ac0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x231ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x231ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x231ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231ac8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x231ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x231acc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x231accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x231ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x231ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ad4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x231ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x231ad8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x231ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x231adc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x231adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x231ae0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x231ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x231ae4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x231ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x231ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231aec: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x231aecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x231af0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x231af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x231af4: 0xa222186a  sb          $v0, 0x186A($s1)
    ctx->pc = 0x231af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x231af8: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x231af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x231afc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x231afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x231b00: 0xc098a84  jal         func_262A10
    ctx->pc = 0x231B00u;
    SET_GPR_U32(ctx, 31, 0x231B08u);
    ctx->pc = 0x231B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B00u;
    // 0x231b04: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x231B00u, 0x231B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B08u;
label_231b08:
    // 0x231b08: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x231b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x231b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231b10: 0x10620188  beq         $v1, $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x231B10u;
    {
        const bool branch_taken_0x231b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B10u;
        // 0x231b14: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b10) {
            ctx->pc = 0x232134u;
            goto label_232134;
        }
    }
    ctx->pc = 0x231B18u;
    // 0x231b18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231B18u;
    {
        const bool branch_taken_0x231b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B18u;
        // 0x231b1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b18) {
            ctx->pc = 0x231B30u;
            goto label_231b30;
        }
    }
    ctx->pc = 0x231B20u;
    // 0x231b20: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x231B20u;
    {
        const bool branch_taken_0x231b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b20) {
            ctx->pc = 0x231B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231B20u;
            // 0x231b24: 0xa2201864  sb          $zero, 0x1864($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231B48u;
            goto label_231b48;
        }
    }
    ctx->pc = 0x231B28u;
    // 0x231b28: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x231B28u;
    {
        const bool branch_taken_0x231b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B28u;
        // 0x231b2c: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b28) {
            ctx->pc = 0x23248Cu;
            goto label_23248c;
        }
    }
    ctx->pc = 0x231B30u;
label_231b30:
    // 0x231b30: 0x106201c5  beq         $v1, $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x231B30u;
    {
        const bool branch_taken_0x231b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B30u;
        // 0x231b34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b30) {
            ctx->pc = 0x232248u;
            goto label_232248;
        }
    }
    ctx->pc = 0x231B38u;
    // 0x231b38: 0x5062022a  beql        $v1, $v0, . + 4 + (0x22A << 2)
    ctx->pc = 0x231B38u;
    {
        const bool branch_taken_0x231b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231b38) {
            ctx->pc = 0x231B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231B38u;
            // 0x231b3c: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2323E4u;
            goto label_2323e4;
        }
    }
    ctx->pc = 0x231B40u;
    // 0x231b40: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x231B40u;
    {
        const bool branch_taken_0x231b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B40u;
        // 0x231b44: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b40) {
            ctx->pc = 0x23248Cu;
            goto label_23248c;
        }
    }
    ctx->pc = 0x231B48u;
label_231b48:
    // 0x231b48: 0xc09d91a  jal         func_276468
    ctx->pc = 0x231B48u;
    SET_GPR_U32(ctx, 31, 0x231B50u);
    ctx->pc = 0x231B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B48u;
    // 0x231b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x231B48u, 0x231B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B50u;
label_231b50:
    // 0x231b50: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x231b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231b54: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x231b54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x231b58: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x231b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x231b5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231b5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231b60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231b64: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x231b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x231b68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231b6c: 0xae200608  sw          $zero, 0x608($s1)
    ctx->pc = 0x231b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 0));
    // 0x231b70: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x231b70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x231b74: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x231B74u;
    SET_GPR_U32(ctx, 31, 0x231B7Cu);
    ctx->pc = 0x231B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B74u;
    // 0x231b78: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x231B74u, 0x231B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B7Cu;
label_231b7c:
    // 0x231b7c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x231b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x231b80: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x231b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x231b84: 0x2443fdf7  addiu       $v1, $v0, -0x209
    ctx->pc = 0x231b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966775));
    // 0x231b88: 0x2c620071  sltiu       $v0, $v1, 0x71
    ctx->pc = 0x231b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)113) ? 1 : 0);
    // 0x231b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231B8Cu;
    {
        const bool branch_taken_0x231b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B8Cu;
        // 0x231b90: 0xae2005fc  sw          $zero, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b8c) {
            ctx->pc = 0x231BB0u;
            goto label_231bb0;
        }
    }
    ctx->pc = 0x231B94u;
    // 0x231b94: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x231b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x231b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231b9c: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x231b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
    // 0x231ba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231ba4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231ba8: 0x800008  jr          $a0
    ctx->pc = 0x231BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231BB0u: goto label_231bb0;
            case 0x231BCCu: goto label_231bcc;
            case 0x231C2Cu: goto label_231c2c;
            case 0x231C84u: goto label_231c84;
            case 0x231D44u: goto label_231d44;
            case 0x231F24u: goto label_231f24;
            case 0x232010u: goto label_232010;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231BA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231BB0u;
label_231bb0:
    // 0x231bb0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x231bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x231bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bbc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231bc0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231bc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x231BC4u;
    {
        const bool branch_taken_0x231bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BC4u;
        // 0x231bc8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bc4) {
            ctx->pc = 0x231BE4u;
            goto label_231be4;
        }
    }
    ctx->pc = 0x231BCCu;
label_231bcc:
    // 0x231bcc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x231bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x231bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bd8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231be0: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x231be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_231be4:
    // 0x231be4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231BE4u;
    SET_GPR_U32(ctx, 31, 0x231BECu);
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231BE4u, 0x231BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BECu;
label_231bec:
    // 0x231bec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231bf0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231bf4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231bf8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231bf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bfc: 0x8c430900  lw          $v1, 0x900($v0)
    ctx->pc = 0x231bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2304)));
    // 0x231c00: 0x8c4508fc  lw          $a1, 0x8FC($v0)
    ctx->pc = 0x231c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2300)));
    // 0x231c04: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231c08: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231C08u;
    SET_GPR_U32(ctx, 31, 0x231C10u);
    ctx->pc = 0x231C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C08u;
    // 0x231c0c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231C08u, 0x231C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C10u;
label_231c10:
    // 0x231c10: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231c14: 0x14430118  bne         $v0, $v1, . + 4 + (0x118 << 2)
    ctx->pc = 0x231C14u;
    {
        const bool branch_taken_0x231c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231c14) {
            ctx->pc = 0x232078u;
            goto label_232078;
        }
    }
    ctx->pc = 0x231C1Cu;
    // 0x231c1c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231c20: 0x8c620904  lw          $v0, 0x904($v1)
    ctx->pc = 0x231c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2308)));
    // 0x231c24: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x231C24u;
    {
        const bool branch_taken_0x231c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C24u;
        // 0x231c28: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c24) {
            ctx->pc = 0x232078u;
            goto label_232078;
        }
    }
    ctx->pc = 0x231C2Cu;
label_231c2c:
    // 0x231c2c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x231c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x231c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c34: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x231c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x231c38: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231c3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231c40: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231C40u;
    SET_GPR_U32(ctx, 31, 0x231C48u);
    ctx->pc = 0x231C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C40u;
    // 0x231c44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231C40u, 0x231C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C48u;
label_231c48:
    // 0x231c48: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231c4c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231c50: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231c54: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231c54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c58: 0x8c430cdc  lw          $v1, 0xCDC($v0)
    ctx->pc = 0x231c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3292)));
    // 0x231c5c: 0x8c450cd8  lw          $a1, 0xCD8($v0)
    ctx->pc = 0x231c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3288)));
    // 0x231c60: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231c64: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231C64u;
    SET_GPR_U32(ctx, 31, 0x231C6Cu);
    ctx->pc = 0x231C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C64u;
    // 0x231c68: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231C64u, 0x231C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C6Cu;
label_231c6c:
    // 0x231c6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231c70: 0x144300fd  bne         $v0, $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x231C70u;
    {
        const bool branch_taken_0x231c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231c70) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x231C78u;
    // 0x231c78: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231c7c: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x231C7Cu;
    {
        const bool branch_taken_0x231c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C7Cu;
        // 0x231c80: 0x8c620ce0  lw          $v0, 0xCE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c7c) {
            ctx->pc = 0x232064u;
            goto label_232064;
        }
    }
    ctx->pc = 0x231C84u;
label_231c84:
    // 0x231c84: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x231c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x231c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c8c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x231c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x231c90: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231c94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c98: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231C98u;
    SET_GPR_U32(ctx, 31, 0x231CA0u);
    ctx->pc = 0x231C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C98u;
    // 0x231c9c: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231C98u, 0x231CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CA0u;
label_231ca0:
    // 0x231ca0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231ca4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231ca8: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231cac: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231cacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cb0: 0x8c4334ec  lw          $v1, 0x34EC($v0)
    ctx->pc = 0x231cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13548)));
    // 0x231cb4: 0x8c4534e8  lw          $a1, 0x34E8($v0)
    ctx->pc = 0x231cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13544)));
    // 0x231cb8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231cbc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231CBCu;
    SET_GPR_U32(ctx, 31, 0x231CC4u);
    ctx->pc = 0x231CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CBCu;
    // 0x231cc0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231CBCu, 0x231CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CC4u;
label_231cc4:
    // 0x231cc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231cc8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x231CC8u;
    {
        const bool branch_taken_0x231cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CC8u;
        // 0x231ccc: 0x8e290704  lw          $t1, 0x704($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cc8) {
            ctx->pc = 0x231CFCu;
            goto label_231cfc;
        }
    }
    ctx->pc = 0x231CD0u;
    // 0x231cd0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cd8: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x231cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x231cdc: 0x8c6234f0  lw          $v0, 0x34F0($v1)
    ctx->pc = 0x231cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13552)));
    // 0x231ce0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x231ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x231ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x231ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ce8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x231ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231cec: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x231CECu;
    SET_GPR_U32(ctx, 31, 0x231CF4u);
    ctx->pc = 0x231CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CECu;
    // 0x231cf0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x231CECu, 0x231CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CF4u;
label_231cf4:
    // 0x231cf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x231CF4u;
    {
        const bool branch_taken_0x231cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231cf4) {
            ctx->pc = 0x231D14u;
            goto label_231d14;
        }
    }
    ctx->pc = 0x231CFCu;
label_231cfc:
    // 0x231cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d00: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x231d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x231d04: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x231d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x231d08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x231d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d0c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x231D0Cu;
    SET_GPR_U32(ctx, 31, 0x231D14u);
    ctx->pc = 0x231D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D0Cu;
    // 0x231d10: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x231D0Cu, 0x231D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D14u;
label_231d14:
    // 0x231d14: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x231d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x231d18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231d1c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x231d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x231d20: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231D20u;
    SET_GPR_U32(ctx, 31, 0x231D28u);
    ctx->pc = 0x231D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D20u;
    // 0x231d24: 0xe6200608  swc1        $f0, 0x608($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231D20u, 0x231D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D28u;
label_231d28:
    // 0x231d28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231d2c: 0x144300ce  bne         $v0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x231D2Cu;
    {
        const bool branch_taken_0x231d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231d2c) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x231D34u;
    // 0x231d34: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x231d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x231d38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231d3c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x231D3Cu;
    {
        const bool branch_taken_0x231d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D3Cu;
        // 0x231d40: 0xe6200608  swc1        $f0, 0x608($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d3c) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x231D44u;
label_231d44:
    // 0x231d44: 0xc6210760  lwc1        $f1, 0x760($s1)
    ctx->pc = 0x231d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231d48: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x231d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x231d4c: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x231d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
    // 0x231d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231d54: 0x0  nop
    ctx->pc = 0x231d54u;
    // NOP
    // 0x231d58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231d5c: 0x0  nop
    ctx->pc = 0x231d5cu;
    // NOP
    // 0x231d60: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x231D60u;
    {
        const bool branch_taken_0x231d60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D60u;
        // 0x231d64: 0xc621075c  lwc1        $f1, 0x75C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d60) {
            ctx->pc = 0x231E28u;
            goto label_231e28;
        }
    }
    ctx->pc = 0x231D68u;
    // 0x231d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231d6c: 0x0  nop
    ctx->pc = 0x231d6cu;
    // NOP
    // 0x231d70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231d74: 0x0  nop
    ctx->pc = 0x231d74u;
    // NOP
    // 0x231d78: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x231D78u;
    {
        const bool branch_taken_0x231d78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D78u;
        // 0x231d7c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d78) {
            ctx->pc = 0x231DD4u;
            goto label_231dd4;
        }
    }
    ctx->pc = 0x231D80u;
    // 0x231d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d84: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x231d88: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231d8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231d90: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231D90u;
    SET_GPR_U32(ctx, 31, 0x231D98u);
    ctx->pc = 0x231D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D90u;
    // 0x231d94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231D90u, 0x231D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D98u;
label_231d98:
    // 0x231d98: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231d9c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231da0: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231da4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231da8: 0x8c4332f8  lw          $v1, 0x32F8($v0)
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13048)));
    // 0x231dac: 0x8c4532f4  lw          $a1, 0x32F4($v0)
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13044)));
    // 0x231db0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231db4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231DB4u;
    SET_GPR_U32(ctx, 31, 0x231DBCu);
    ctx->pc = 0x231DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DB4u;
    // 0x231db8: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231DB4u, 0x231DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DBCu;
label_231dbc:
    // 0x231dbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231dc0: 0x144300a9  bne         $v0, $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x231DC0u;
    {
        const bool branch_taken_0x231dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231dc0) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x231DC8u;
    // 0x231dc8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231dcc: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x231DCCu;
    {
        const bool branch_taken_0x231dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DCCu;
        // 0x231dd0: 0x8c6232fc  lw          $v0, 0x32FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dcc) {
            ctx->pc = 0x232064u;
            goto label_232064;
        }
    }
    ctx->pc = 0x231DD4u;
label_231dd4:
    // 0x231dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231dd8: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x231dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x231ddc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231de0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231de4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231DE4u;
    SET_GPR_U32(ctx, 31, 0x231DECu);
    ctx->pc = 0x231DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DE4u;
    // 0x231de8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231DE4u, 0x231DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DECu;
label_231dec:
    // 0x231dec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231df0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231df4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231df8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231df8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231dfc: 0x8c4332ec  lw          $v1, 0x32EC($v0)
    ctx->pc = 0x231dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13036)));
    // 0x231e00: 0x8c4532e8  lw          $a1, 0x32E8($v0)
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13032)));
    // 0x231e04: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231e08: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231E08u;
    SET_GPR_U32(ctx, 31, 0x231E10u);
    ctx->pc = 0x231E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E08u;
    // 0x231e0c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231E08u, 0x231E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E10u;
label_231e10:
    // 0x231e10: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231e14: 0x14430094  bne         $v0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x231E14u;
    {
        const bool branch_taken_0x231e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231e14) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x231E1Cu;
    // 0x231e1c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231e20: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x231E20u;
    {
        const bool branch_taken_0x231e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E20u;
        // 0x231e24: 0x8c6232f0  lw          $v0, 0x32F0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e20) {
            ctx->pc = 0x232064u;
            goto label_232064;
        }
    }
    ctx->pc = 0x231E28u;
label_231e28:
    // 0x231e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231e2c: 0x0  nop
    ctx->pc = 0x231e2cu;
    // NOP
    // 0x231e30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231e34: 0x0  nop
    ctx->pc = 0x231e34u;
    // NOP
    // 0x231e38: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x231E38u;
    {
        const bool branch_taken_0x231e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E38u;
        // 0x231e3c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e38) {
            ctx->pc = 0x231EA8u;
            goto label_231ea8;
        }
    }
    ctx->pc = 0x231E40u;
    // 0x231e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e44: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x231e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x231e48: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231e4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231e50: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231E50u;
    SET_GPR_U32(ctx, 31, 0x231E58u);
    ctx->pc = 0x231E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E50u;
    // 0x231e54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231E50u, 0x231E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E58u;
label_231e58:
    // 0x231e58: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231e5c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231e60: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231e64: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231e64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e68: 0x8c4332c8  lw          $v1, 0x32C8($v0)
    ctx->pc = 0x231e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13000)));
    // 0x231e6c: 0x8c4532c4  lw          $a1, 0x32C4($v0)
    ctx->pc = 0x231e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12996)));
    // 0x231e70: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231e74: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231E74u;
    SET_GPR_U32(ctx, 31, 0x231E7Cu);
    ctx->pc = 0x231E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E74u;
    // 0x231e78: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231E74u, 0x231E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E7Cu;
label_231e7c:
    // 0x231e7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231e80: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231E80u;
    {
        const bool branch_taken_0x231e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231e80) {
            ctx->pc = 0x231E94u;
            goto label_231e94;
        }
    }
    ctx->pc = 0x231E88u;
    // 0x231e88: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231e8c: 0x8c6232cc  lw          $v0, 0x32CC($v1)
    ctx->pc = 0x231e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13004)));
    // 0x231e90: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x231e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231e94:
    // 0x231e94: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x231e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x231e98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231e9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231ea0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x231EA0u;
    {
        const bool branch_taken_0x231ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231EA0u;
        // 0x231ea4: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ea0) {
            ctx->pc = 0x231F08u;
            goto label_231f08;
        }
    }
    ctx->pc = 0x231EA8u;
label_231ea8:
    // 0x231ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231eac: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x231eb0: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231eb4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231eb8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231EB8u;
    SET_GPR_U32(ctx, 31, 0x231EC0u);
    ctx->pc = 0x231EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231EB8u;
    // 0x231ebc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231EB8u, 0x231EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EC0u;
label_231ec0:
    // 0x231ec0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231ec4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231ec8: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231ecc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231eccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ed0: 0x8c4332d4  lw          $v1, 0x32D4($v0)
    ctx->pc = 0x231ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13012)));
    // 0x231ed4: 0x8c4532d0  lw          $a1, 0x32D0($v0)
    ctx->pc = 0x231ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13008)));
    // 0x231ed8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231edc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231EDCu;
    SET_GPR_U32(ctx, 31, 0x231EE4u);
    ctx->pc = 0x231EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231EDCu;
    // 0x231ee0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231EDCu, 0x231EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EE4u;
label_231ee4:
    // 0x231ee4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231ee8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231EE8u;
    {
        const bool branch_taken_0x231ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231EE8u;
        // 0x231eec: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ee8) {
            ctx->pc = 0x231EFCu;
            goto label_231efc;
        }
    }
    ctx->pc = 0x231EF0u;
    // 0x231ef0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231ef4: 0x8c6232d8  lw          $v0, 0x32D8($v1)
    ctx->pc = 0x231ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13016)));
    // 0x231ef8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x231ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231efc:
    // 0x231efc: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x231efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x231f00: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231f04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_231f08:
    // 0x231f08: 0x0  nop
    ctx->pc = 0x231f08u;
    // NOP
    // 0x231f0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231f10: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x231f10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x231f14: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x231F14u;
    SET_GPR_U32(ctx, 31, 0x231F1Cu);
    ctx->pc = 0x231F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F14u;
    // 0x231f18: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x231F14u, 0x231F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F1Cu;
label_231f1c:
    // 0x231f1c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x231F1Cu;
    {
        const bool branch_taken_0x231f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F1Cu;
        // 0x231f20: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f1c) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x231F24u;
label_231f24:
    // 0x231f24: 0xc621075c  lwc1        $f1, 0x75C($s1)
    ctx->pc = 0x231f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f2c: 0x0  nop
    ctx->pc = 0x231f2cu;
    // NOP
    // 0x231f30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231f34: 0x0  nop
    ctx->pc = 0x231f34u;
    // NOP
    // 0x231f38: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x231F38u;
    {
        const bool branch_taken_0x231f38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F38u;
        // 0x231f3c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f38) {
            ctx->pc = 0x231FA8u;
            goto label_231fa8;
        }
    }
    ctx->pc = 0x231F40u;
    // 0x231f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f44: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x231f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x231f48: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231f4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231f50: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231F50u;
    SET_GPR_U32(ctx, 31, 0x231F58u);
    ctx->pc = 0x231F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F50u;
    // 0x231f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231F50u, 0x231F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F58u;
label_231f58:
    // 0x231f58: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231f5c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231f60: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231f64: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f68: 0x8c433804  lw          $v1, 0x3804($v0)
    ctx->pc = 0x231f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14340)));
    // 0x231f6c: 0x8c453800  lw          $a1, 0x3800($v0)
    ctx->pc = 0x231f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14336)));
    // 0x231f70: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231f74: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231F74u;
    SET_GPR_U32(ctx, 31, 0x231F7Cu);
    ctx->pc = 0x231F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F74u;
    // 0x231f78: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231F74u, 0x231F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F7Cu;
label_231f7c:
    // 0x231f7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231f80: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231F80u;
    {
        const bool branch_taken_0x231f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231f80) {
            ctx->pc = 0x231F94u;
            goto label_231f94;
        }
    }
    ctx->pc = 0x231F88u;
    // 0x231f88: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231f8c: 0x8c623808  lw          $v0, 0x3808($v1)
    ctx->pc = 0x231f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14344)));
    // 0x231f90: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x231f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231f94:
    // 0x231f94: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x231f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x231f98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231f9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231fa0: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x231FA0u;
    {
        const bool branch_taken_0x231fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FA0u;
        // 0x231fa4: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fa0) {
            ctx->pc = 0x231F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231f08;
        }
    }
    ctx->pc = 0x231FA8u;
label_231fa8:
    // 0x231fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fac: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x231facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x231fb0: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x231fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x231fb4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x231fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231fb8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x231FB8u;
    SET_GPR_U32(ctx, 31, 0x231FC0u);
    ctx->pc = 0x231FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FB8u;
    // 0x231fbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x231FB8u, 0x231FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FC0u;
label_231fc0:
    // 0x231fc0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x231fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231fc4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x231fc8: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x231fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x231fcc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x231fccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fd0: 0x8c4337f8  lw          $v1, 0x37F8($v0)
    ctx->pc = 0x231fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14328)));
    // 0x231fd4: 0x8c4537f4  lw          $a1, 0x37F4($v0)
    ctx->pc = 0x231fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14324)));
    // 0x231fd8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x231fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231fdc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x231FDCu;
    SET_GPR_U32(ctx, 31, 0x231FE4u);
    ctx->pc = 0x231FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FDCu;
    // 0x231fe0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x231FDCu, 0x231FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FE4u;
label_231fe4:
    // 0x231fe4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231fe8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231FE8u;
    {
        const bool branch_taken_0x231fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231fe8) {
            ctx->pc = 0x231FFCu;
            goto label_231ffc;
        }
    }
    ctx->pc = 0x231FF0u;
    // 0x231ff0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x231ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x231ff4: 0x8c6237fc  lw          $v0, 0x37FC($v1)
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14332)));
    // 0x231ff8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x231ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231ffc:
    // 0x231ffc: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x231ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x232000: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x232000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x232004: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232008: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x232008u;
    {
        const bool branch_taken_0x232008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232008u;
        // 0x23200c: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x232008) {
            ctx->pc = 0x231F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231f08;
        }
    }
    ctx->pc = 0x232010u;
label_232010:
    // 0x232010: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x232010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232018: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x232018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23201c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x23201cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232020: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232024: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232024u;
    SET_GPR_U32(ctx, 31, 0x23202Cu);
    ctx->pc = 0x232028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232024u;
    // 0x232028: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232024u, 0x23202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23202Cu;
label_23202c:
    // 0x23202c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x23202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232030: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232034: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232038: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x232038u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23203c: 0x8c431204  lw          $v1, 0x1204($v0)
    ctx->pc = 0x23203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4612)));
    // 0x232040: 0x8c451200  lw          $a1, 0x1200($v0)
    ctx->pc = 0x232040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4608)));
    // 0x232044: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232048: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232048u;
    SET_GPR_U32(ctx, 31, 0x232050u);
    ctx->pc = 0x23204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232048u;
    // 0x23204c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232048u, 0x232050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232050u;
label_232050:
    // 0x232050: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232054: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232054u;
    {
        const bool branch_taken_0x232054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232054) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x23205Cu;
    // 0x23205c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x23205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232060: 0x8c621208  lw          $v0, 0x1208($v1)
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
label_232064:
    // 0x232064: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x232064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232068:
    // 0x232068: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x232068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x23206c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23206cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232070: 0x0  nop
    ctx->pc = 0x232070u;
    // NOP
    // 0x232074: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x232074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_232078:
    // 0x232078: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23207c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23207cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232080: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x232080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232084: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x232084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23208c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23208cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x232090: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x232090u;
    SET_GPR_U32(ctx, 31, 0x232098u);
    ctx->pc = 0x232094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232090u;
    // 0x232094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x232090u, 0x232098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232098u;
label_232098:
    // 0x232098: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x232098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23209c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x23209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x2320a0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2320A0u;
    SET_GPR_U32(ctx, 31, 0x2320A8u);
    ctx->pc = 0x2320A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320A0u;
    // 0x2320a4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2320A0u, 0x2320A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320A8u;
label_2320a8:
    // 0x2320a8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2320a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2320ac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2320acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2320b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2320B0u;
    {
        const bool branch_taken_0x2320b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320B0u;
        // 0x2320b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320b0) {
            ctx->pc = 0x2320D0u;
            goto label_2320d0;
        }
    }
    ctx->pc = 0x2320B8u;
    // 0x2320b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2320b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2320bc: 0x24429ab0  addiu       $v0, $v0, -0x6550
    ctx->pc = 0x2320bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
    // 0x2320c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2320c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2320c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2320c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2320c8: 0x800008  jr          $a0
    ctx->pc = 0x2320C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2320D0u: goto label_2320d0;
            case 0x2320E8u: goto label_2320e8;
            case 0x232104u: goto label_232104;
            case 0x232128u: goto label_232128;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2320C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2320D0u;
label_2320d0:
    // 0x2320d0: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2320d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2320d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2320d8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2320d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2320dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2320dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2320e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2320E0u;
    {
        const bool branch_taken_0x2320e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320E0u;
        // 0x2320e4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320e0) {
            ctx->pc = 0x232120u;
            goto label_232120;
        }
    }
    ctx->pc = 0x2320E8u;
label_2320e8:
    // 0x2320e8: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2320e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2320ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2320f0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2320f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2320f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2320f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2320f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2320f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2320fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2320FCu;
    {
        const bool branch_taken_0x2320fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320FCu;
        // 0x232100: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320fc) {
            ctx->pc = 0x232120u;
            goto label_232120;
        }
    }
    ctx->pc = 0x232104u;
label_232104:
    // 0x232104: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x232104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23210c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x23210cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x232110: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x232110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x232114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232118: 0x0  nop
    ctx->pc = 0x232118u;
    // NOP
    // 0x23211c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23211cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_232120:
    // 0x232120: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x232124: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x232124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_232128:
    // 0x232128: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x232128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x23212c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232130: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x232130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_232134:
    // 0x232134: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x232134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232138: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x232138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x23213c: 0x0  nop
    ctx->pc = 0x23213cu;
    // NOP
    // 0x232140: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x232140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232144: 0x0  nop
    ctx->pc = 0x232144u;
    // NOP
    // 0x232148: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x232148u;
    {
        const bool branch_taken_0x232148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232148u;
        // 0x23214c: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232148) {
            ctx->pc = 0x232168u;
            goto label_232168;
        }
    }
    ctx->pc = 0x232150u;
    // 0x232150: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x232150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232154: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x232154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x232158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x232158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23215c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23215cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x232160: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x232160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x232164: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x232164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_232168:
    // 0x232168: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x232168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x23216c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23216Cu;
    {
        const bool branch_taken_0x23216c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23216Cu;
        // 0x232170: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23216c) {
            ctx->pc = 0x2321D8u;
            goto label_2321d8;
        }
    }
    ctx->pc = 0x232174u;
    // 0x232174: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x232174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x232178: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x232178u;
    SET_GPR_U32(ctx, 31, 0x232180u);
    ctx->pc = 0x23217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232178u;
    // 0x23217c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x232178u, 0x232180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232180u;
label_232180:
    // 0x232180: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x232180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232188: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x232188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x23218c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23218cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x232190: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x232190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x232194: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x232194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x232198: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x232198u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x23219c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x23219Cu;
    SET_GPR_U32(ctx, 31, 0x2321A4u);
    ctx->pc = 0x2321A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23219Cu;
    // 0x2321a0: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x23219Cu, 0x2321A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2321A4u;
label_2321a4:
    // 0x2321a4: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x2321a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2321a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2321ac: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2321acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2321b0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2321b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2321b4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2321B4u;
    SET_GPR_U32(ctx, 31, 0x2321BCu);
    ctx->pc = 0x2321B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2321B4u;
    // 0x2321b8: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2321B4u, 0x2321BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2321BCu;
label_2321bc:
    // 0x2321bc: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x2321bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321c0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2321c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2321c4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2321c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2321c8: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2321c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2321cc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2321CCu;
    SET_GPR_U32(ctx, 31, 0x2321D4u);
    ctx->pc = 0x2321D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2321CCu;
    // 0x2321d0: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2321CCu, 0x2321D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2321D4u;
label_2321d4:
    // 0x2321d4: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2321d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_2321d8:
    // 0x2321d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2321D8u;
    SET_GPR_U32(ctx, 31, 0x2321E0u);
    ctx->pc = 0x2321DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2321D8u;
    // 0x2321dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2321D8u, 0x2321E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2321E0u;
label_2321e0:
    // 0x2321e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2321E0u;
    {
        const bool branch_taken_0x2321e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2321e0) {
            ctx->pc = 0x2321F0u;
            goto label_2321f0;
        }
    }
    ctx->pc = 0x2321E8u;
    // 0x2321e8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2321E8u;
    SET_GPR_U32(ctx, 31, 0x2321F0u);
    ctx->pc = 0x2321ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2321E8u;
    // 0x2321ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2321E8u, 0x2321F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2321F0u;
label_2321f0:
    // 0x2321f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2321f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2321f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2321f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2321f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2321f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2321fc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2321FCu;
    SET_GPR_U32(ctx, 31, 0x232204u);
    ctx->pc = 0x232200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2321FCu;
    // 0x232200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2321FCu, 0x232204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232204u;
label_232204:
    // 0x232204: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x232204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x232208: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x232208u;
    SET_GPR_U32(ctx, 31, 0x232210u);
    ctx->pc = 0x23220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232208u;
    // 0x23220c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x232208u, 0x232210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232210u;
label_232210:
    // 0x232210: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x232210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x232214: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x232218: 0x5462009c  bnel        $v1, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x232218u;
    {
        const bool branch_taken_0x232218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x232218) {
            ctx->pc = 0x23221Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232218u;
            // 0x23221c: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23248Cu;
            goto label_23248c;
        }
    }
    ctx->pc = 0x232220u;
    // 0x232220: 0xc6200608  lwc1        $f0, 0x608($s1)
    ctx->pc = 0x232220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232224: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x232224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232228: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x232228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23222c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x23222cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232230: 0x0  nop
    ctx->pc = 0x232230u;
    // NOP
    // 0x232234: 0x45000094  bc1f        . + 4 + (0x94 << 2)
    ctx->pc = 0x232234u;
    {
        const bool branch_taken_0x232234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232234u;
        // 0x232238: 0xe6200608  swc1        $f0, 0x608($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x232234) {
            ctx->pc = 0x232488u;
            goto label_232488;
        }
    }
    ctx->pc = 0x23223Cu;
    // 0x23223c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232240: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x232240u;
    {
        const bool branch_taken_0x232240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232240u;
        // 0x232244: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232240) {
            ctx->pc = 0x232488u;
            goto label_232488;
        }
    }
    ctx->pc = 0x232248u;
label_232248:
    // 0x232248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23224c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23224Cu;
    SET_GPR_U32(ctx, 31, 0x232254u);
    ctx->pc = 0x232250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23224Cu;
    // 0x232250: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23224Cu, 0x232254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232254u;
label_232254:
    // 0x232254: 0x26149b70  addiu       $s4, $s0, -0x6490
    ctx->pc = 0x232254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x232258: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x232258u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23225c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23225cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232260: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x232264: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x232264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x232268: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x232268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23226c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23226cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232270: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x232270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x232274: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232274u;
    SET_GPR_U32(ctx, 31, 0x23227Cu);
    ctx->pc = 0x232278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232274u;
    // 0x232278: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232274u, 0x23227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23227Cu;
label_23227c:
    // 0x23227c: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x23227cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232280: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232284: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x232284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232288: 0x8c4335a0  lw          $v1, 0x35A0($v0)
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13728)));
    // 0x23228c: 0x8c4535a4  lw          $a1, 0x35A4($v0)
    ctx->pc = 0x23228cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13732)));
    // 0x232290: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x232290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232294: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232294u;
    SET_GPR_U32(ctx, 31, 0x23229Cu);
    ctx->pc = 0x232298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232294u;
    // 0x232298: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232294u, 0x23229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23229Cu;
label_23229c:
    // 0x23229c: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23229Cu;
    {
        const bool branch_taken_0x23229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x23229c) {
            ctx->pc = 0x2322B0u;
            goto label_2322b0;
        }
    }
    ctx->pc = 0x2322A4u;
    // 0x2322a4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2322a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2322a8: 0x8c6235a8  lw          $v0, 0x35A8($v1)
    ctx->pc = 0x2322a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13736)));
    // 0x2322ac: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2322b0:
    // 0x2322b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2322b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2322b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2322b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2322b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2322bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322c0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2322c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2322c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2322c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2322C8u;
    SET_GPR_U32(ctx, 31, 0x2322D0u);
    ctx->pc = 0x2322CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322C8u;
    // 0x2322cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2322C8u, 0x2322D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322D0u;
label_2322d0:
    // 0x2322d0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2322D0u;
    SET_GPR_U32(ctx, 31, 0x2322D8u);
    ctx->pc = 0x2322D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322D0u;
    // 0x2322d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2322D0u, 0x2322D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322D8u;
label_2322d8:
    // 0x2322d8: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2322D8u;
    {
        const bool branch_taken_0x2322d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2322DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322D8u;
        // 0x2322dc: 0x8e290704  lw          $t1, 0x704($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322d8) {
            ctx->pc = 0x232300u;
            goto label_232300;
        }
    }
    ctx->pc = 0x2322E0u;
    // 0x2322e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2322e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322e4: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2322e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2322e8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2322e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2322ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2322ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322f0: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x2322F0u;
    SET_GPR_U32(ctx, 31, 0x2322F8u);
    ctx->pc = 0x2322F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322F0u;
    // 0x2322f4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x2322F0u, 0x2322F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322F8u;
label_2322f8:
    // 0x2322f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2322F8u;
    {
        const bool branch_taken_0x2322f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2322FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322F8u;
        // 0x2322fc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322f8) {
            ctx->pc = 0x23231Cu;
            goto label_23231c;
        }
    }
    ctx->pc = 0x232300u;
label_232300:
    // 0x232300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232304: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x232304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x232308: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x232308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x23230c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23230cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232310: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x232310u;
    SET_GPR_U32(ctx, 31, 0x232318u);
    ctx->pc = 0x232314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232310u;
    // 0x232314: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x232310u, 0x232318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232318u;
label_232318:
    // 0x232318: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23231c:
    // 0x23231c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x23231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x232320: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232320u;
    SET_GPR_U32(ctx, 31, 0x232328u);
    ctx->pc = 0x232324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232320u;
    // 0x232324: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232320u, 0x232328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232328u;
label_232328:
    // 0x232328: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x232328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23232c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23232cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x232330: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232330u;
    {
        const bool branch_taken_0x232330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232330u;
        // 0x232334: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232330) {
            ctx->pc = 0x232350u;
            goto label_232350;
        }
    }
    ctx->pc = 0x232338u;
    // 0x232338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23233c: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x23233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x232340: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232344: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232348: 0x800008  jr          $a0
    ctx->pc = 0x232348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232350u: goto label_232350;
            case 0x232368u: goto label_232368;
            case 0x232384u: goto label_232384;
            case 0x2323A8u: goto label_2323a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232348u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232350u;
label_232350:
    // 0x232350: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x232350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232358: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x232358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x23235c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23235cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232360: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x232360u;
    {
        const bool branch_taken_0x232360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232360u;
        // 0x232364: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232360) {
            ctx->pc = 0x2323A0u;
            goto label_2323a0;
        }
    }
    ctx->pc = 0x232368u;
label_232368:
    // 0x232368: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x232368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23236c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23236cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232370: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x232370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x232374: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x232374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x232378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23237c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23237Cu;
    {
        const bool branch_taken_0x23237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23237Cu;
        // 0x232380: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23237c) {
            ctx->pc = 0x2323A0u;
            goto label_2323a0;
        }
    }
    ctx->pc = 0x232384u;
label_232384:
    // 0x232384: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x232384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23238c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x23238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x232390: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x232390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x232394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232398: 0x0  nop
    ctx->pc = 0x232398u;
    // NOP
    // 0x23239c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23239cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2323a0:
    // 0x2323a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2323a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2323a4: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x2323a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_2323a8:
    // 0x2323a8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x2323a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2323ac: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2323acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2323b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2323b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2323b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2323b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2323b8: 0x0  nop
    ctx->pc = 0x2323b8u;
    // NOP
    // 0x2323bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2323bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2323c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2323c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2323c4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2323C4u;
    SET_GPR_U32(ctx, 31, 0x2323CCu);
    ctx->pc = 0x2323C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323C4u;
    // 0x2323c8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2323C4u, 0x2323CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323CCu;
label_2323cc:
    // 0x2323cc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2323ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2323d0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2323d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2323d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2323d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2323d8: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x2323d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x2323dc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2323dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2323e0: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2323e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_2323e4:
    // 0x2323e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2323E4u;
    {
        const bool branch_taken_0x2323e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323E4u;
        // 0x2323e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323e4) {
            ctx->pc = 0x232450u;
            goto label_232450;
        }
    }
    ctx->pc = 0x2323ECu;
    // 0x2323ec: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x2323ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2323f0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2323F0u;
    SET_GPR_U32(ctx, 31, 0x2323F8u);
    ctx->pc = 0x2323F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323F0u;
    // 0x2323f4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2323F0u, 0x2323F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323F8u;
label_2323f8:
    // 0x2323f8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2323f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2323fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2323fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232400: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x232400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x232404: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x232404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x232408: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x232408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23240c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23240cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x232410: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x232410u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x232414: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x232414u;
    SET_GPR_U32(ctx, 31, 0x23241Cu);
    ctx->pc = 0x232418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232414u;
    // 0x232418: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x232414u, 0x23241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23241Cu;
label_23241c:
    // 0x23241c: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x23241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232420: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x232420u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x232424: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x232424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x232428: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x232428u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x23242c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x23242Cu;
    SET_GPR_U32(ctx, 31, 0x232434u);
    ctx->pc = 0x232430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23242Cu;
    // 0x232430: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x23242Cu, 0x232434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232434u;
label_232434:
    // 0x232434: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x232434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232438: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x232438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x23243c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x23243cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x232440: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x232440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x232444: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x232444u;
    SET_GPR_U32(ctx, 31, 0x23244Cu);
    ctx->pc = 0x232448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232444u;
    // 0x232448: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x232444u, 0x23244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23244Cu;
label_23244c:
    // 0x23244c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x23244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_232450:
    // 0x232450: 0xc055f06  jal         func_157C18
    ctx->pc = 0x232450u;
    SET_GPR_U32(ctx, 31, 0x232458u);
    ctx->pc = 0x232454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232450u;
    // 0x232454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x232450u, 0x232458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232458u;
label_232458:
    // 0x232458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232458u;
    {
        const bool branch_taken_0x232458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232458) {
            ctx->pc = 0x232468u;
            goto label_232468;
        }
    }
    ctx->pc = 0x232460u;
    // 0x232460: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x232460u;
    SET_GPR_U32(ctx, 31, 0x232468u);
    ctx->pc = 0x232464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232460u;
    // 0x232464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x232460u, 0x232468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232468u;
label_232468:
    // 0x232468: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23246c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23246cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x232470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232474: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x232474u;
    SET_GPR_U32(ctx, 31, 0x23247Cu);
    ctx->pc = 0x232478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232474u;
    // 0x232478: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x232474u, 0x23247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23247Cu;
label_23247c:
    // 0x23247c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23247cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x232480: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x232480u;
    SET_GPR_U32(ctx, 31, 0x232488u);
    ctx->pc = 0x232484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232480u;
    // 0x232484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x232480u, 0x232488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232488u;
label_232488:
    // 0x232488: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x232488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
label_23248c:
    // 0x23248c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23248Cu;
    {
        const bool branch_taken_0x23248c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23248c) {
            ctx->pc = 0x232490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23248Cu;
            // 0x232490: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2324A0u;
            goto label_2324a0;
        }
    }
    ctx->pc = 0x232494u;
    // 0x232494: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x232494u;
    SET_GPR_U32(ctx, 31, 0x23249Cu);
    ctx->pc = 0x232498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232494u;
    // 0x232498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x232494u, 0x23249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23249Cu;
label_23249c:
    // 0x23249c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x23249cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2324a0:
    // 0x2324a0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2324a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2324a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2324A4u;
    {
        const bool branch_taken_0x2324a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2324A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324A4u;
        // 0x2324a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324a4) {
            ctx->pc = 0x2324B0u;
            goto label_2324b0;
        }
    }
    ctx->pc = 0x2324ACu;
    // 0x2324ac: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x2324acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_2324b0:
    // 0x2324b0: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2324b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x2324b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2324B4u;
    {
        const bool branch_taken_0x2324b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2324B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B4u;
        // 0x2324b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324b4) {
            ctx->pc = 0x2324D0u;
            goto label_2324d0;
        }
    }
    ctx->pc = 0x2324BCu;
    // 0x2324bc: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2324bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2324c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2324c4: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2324c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2324c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2324c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2324cc: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2324ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2324d0:
    // 0x2324d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2324d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2324d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2324d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2324d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2324d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2324dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2324dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2324e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2324e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2324e4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2324e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2324e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2324e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2324ec: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2324ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2324f0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2324f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2324f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2324F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2324F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324F4u;
        // 0x2324f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2324F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2324FCu;
    // 0x2324fc: 0x0  nop
    ctx->pc = 0x2324fcu;
    // NOP
    ctx->pc = 0x232500u;
}
