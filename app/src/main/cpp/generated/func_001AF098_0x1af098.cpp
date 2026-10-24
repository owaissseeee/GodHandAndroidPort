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

// Function: func_001AF098
// Address: 0x1af098 - 0x1af230
void func_001AF098_0x1af098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AF098_0x1af098");
#endif

    switch (ctx->pc) {
        case 0x1af098u: goto label_1af098;
        case 0x1af09cu: goto label_1af09c;
        case 0x1af0a0u: goto label_1af0a0;
        case 0x1af0a4u: goto label_1af0a4;
        case 0x1af0a8u: goto label_1af0a8;
        case 0x1af0acu: goto label_1af0ac;
        case 0x1af0b0u: goto label_1af0b0;
        case 0x1af0b4u: goto label_1af0b4;
        case 0x1af0b8u: goto label_1af0b8;
        case 0x1af0bcu: goto label_1af0bc;
        case 0x1af0c0u: goto label_1af0c0;
        case 0x1af0c4u: goto label_1af0c4;
        case 0x1af0c8u: goto label_1af0c8;
        case 0x1af0ccu: goto label_1af0cc;
        case 0x1af0d0u: goto label_1af0d0;
        case 0x1af0d4u: goto label_1af0d4;
        case 0x1af0d8u: goto label_1af0d8;
        case 0x1af0dcu: goto label_1af0dc;
        case 0x1af0e0u: goto label_1af0e0;
        case 0x1af0e4u: goto label_1af0e4;
        case 0x1af0e8u: goto label_1af0e8;
        case 0x1af0ecu: goto label_1af0ec;
        case 0x1af0f0u: goto label_1af0f0;
        case 0x1af0f4u: goto label_1af0f4;
        case 0x1af0f8u: goto label_1af0f8;
        case 0x1af0fcu: goto label_1af0fc;
        case 0x1af100u: goto label_1af100;
        case 0x1af104u: goto label_1af104;
        case 0x1af108u: goto label_1af108;
        case 0x1af10cu: goto label_1af10c;
        case 0x1af110u: goto label_1af110;
        case 0x1af114u: goto label_1af114;
        case 0x1af118u: goto label_1af118;
        case 0x1af11cu: goto label_1af11c;
        case 0x1af120u: goto label_1af120;
        case 0x1af124u: goto label_1af124;
        case 0x1af128u: goto label_1af128;
        case 0x1af12cu: goto label_1af12c;
        case 0x1af130u: goto label_1af130;
        case 0x1af134u: goto label_1af134;
        case 0x1af138u: goto label_1af138;
        case 0x1af13cu: goto label_1af13c;
        case 0x1af140u: goto label_1af140;
        case 0x1af144u: goto label_1af144;
        case 0x1af148u: goto label_1af148;
        case 0x1af14cu: goto label_1af14c;
        case 0x1af150u: goto label_1af150;
        case 0x1af154u: goto label_1af154;
        case 0x1af158u: goto label_1af158;
        case 0x1af15cu: goto label_1af15c;
        case 0x1af160u: goto label_1af160;
        case 0x1af164u: goto label_1af164;
        case 0x1af168u: goto label_1af168;
        case 0x1af16cu: goto label_1af16c;
        case 0x1af170u: goto label_1af170;
        case 0x1af174u: goto label_1af174;
        case 0x1af178u: goto label_1af178;
        case 0x1af17cu: goto label_1af17c;
        case 0x1af180u: goto label_1af180;
        case 0x1af184u: goto label_1af184;
        case 0x1af188u: goto label_1af188;
        case 0x1af18cu: goto label_1af18c;
        case 0x1af190u: goto label_1af190;
        case 0x1af194u: goto label_1af194;
        case 0x1af198u: goto label_1af198;
        case 0x1af19cu: goto label_1af19c;
        case 0x1af1a0u: goto label_1af1a0;
        case 0x1af1a4u: goto label_1af1a4;
        case 0x1af1a8u: goto label_1af1a8;
        case 0x1af1acu: goto label_1af1ac;
        case 0x1af1b0u: goto label_1af1b0;
        case 0x1af1b4u: goto label_1af1b4;
        case 0x1af1b8u: goto label_1af1b8;
        case 0x1af1bcu: goto label_1af1bc;
        case 0x1af1c0u: goto label_1af1c0;
        case 0x1af1c4u: goto label_1af1c4;
        case 0x1af1c8u: goto label_1af1c8;
        case 0x1af1ccu: goto label_1af1cc;
        case 0x1af1d0u: goto label_1af1d0;
        case 0x1af1d4u: goto label_1af1d4;
        case 0x1af1d8u: goto label_1af1d8;
        case 0x1af1dcu: goto label_1af1dc;
        case 0x1af1e0u: goto label_1af1e0;
        case 0x1af1e4u: goto label_1af1e4;
        case 0x1af1e8u: goto label_1af1e8;
        case 0x1af1ecu: goto label_1af1ec;
        case 0x1af1f0u: goto label_1af1f0;
        case 0x1af1f4u: goto label_1af1f4;
        case 0x1af1f8u: goto label_1af1f8;
        case 0x1af1fcu: goto label_1af1fc;
        case 0x1af200u: goto label_1af200;
        case 0x1af204u: goto label_1af204;
        case 0x1af208u: goto label_1af208;
        case 0x1af20cu: goto label_1af20c;
        case 0x1af210u: goto label_1af210;
        case 0x1af214u: goto label_1af214;
        case 0x1af218u: goto label_1af218;
        case 0x1af21cu: goto label_1af21c;
        case 0x1af220u: goto label_1af220;
        case 0x1af224u: goto label_1af224;
        case 0x1af228u: goto label_1af228;
        case 0x1af22cu: goto label_1af22c;
        default: break;
    }

    ctx->pc = 0x1af098u;

label_1af098:
    // 0x1af098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af09c:
    // 0x1af09c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af0a0:
    // 0x1af0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af0a4:
    // 0x1af0a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1af0a8:
    // 0x1af0a8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1af0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1af0ac:
    // 0x1af0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af0b0:
    // 0x1af0b0: 0xc0a4bd4  jal         func_292F50
label_1af0b4:
    if (ctx->pc == 0x1AF0B4u) {
        ctx->pc = 0x1AF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0B0u;
        // 0x1af0b4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0B8u;
        goto label_1af0b8;
    }
    ctx->pc = 0x1AF0B0u;
    SET_GPR_U32(ctx, 31, 0x1AF0B8u);
    ctx->pc = 0x1AF0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0B0u;
    // 0x1af0b4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1AF0B0u, 0x1AF0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0B8u;
label_1af0b8:
    // 0x1af0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af0bc:
    // 0x1af0bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1af0bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1af0c0:
    // 0x1af0c0: 0xc0560a2  jal         func_158288
label_1af0c4:
    if (ctx->pc == 0x1AF0C4u) {
        ctx->pc = 0x1AF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0C0u;
        // 0x1af0c4: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0C8u;
        goto label_1af0c8;
    }
    ctx->pc = 0x1AF0C0u;
    SET_GPR_U32(ctx, 31, 0x1AF0C8u);
    ctx->pc = 0x1AF0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0C0u;
    // 0x1af0c4: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1AF0C0u, 0x1AF0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0C8u;
label_1af0c8:
    // 0x1af0c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1af0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1af0cc:
    // 0x1af0cc: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1af0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1af0d0:
    // 0x1af0d0: 0x2446dc80  addiu       $a2, $v0, -0x2380
    ctx->pc = 0x1af0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958208));
label_1af0d4:
    // 0x1af0d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1af0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af0d8:
    // 0x1af0d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1af0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1af0dc:
    // 0x1af0dc: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1af0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1af0e0:
    // 0x1af0e0: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1af0e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1af0e4:
    // 0x1af0e4: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1af0e8:
    if (ctx->pc == 0x1AF0E8u) {
        ctx->pc = 0x1AF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0E4u;
        // 0x1af0e8: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0ECu;
        goto label_1af0ec;
    }
    ctx->pc = 0x1AF0E4u;
    {
        const bool branch_taken_0x1af0e4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0E4u;
        // 0x1af0e8: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0e4) {
            ctx->pc = 0x1AF110u;
            goto label_1af110;
        }
    }
    ctx->pc = 0x1AF0ECu;
label_1af0ec:
    // 0x1af0ec: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1af0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1af0f0:
    // 0x1af0f0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1af0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1af0f4:
    // 0x1af0f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1af0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af0f8:
    // 0x1af0f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1af0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1af0fc:
    // 0x1af0fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1af100:
    // 0x1af100: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x1af100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1af104:
    // 0x1af104: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x1af104u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_1af108:
    // 0x1af108: 0x10000003  b           . + 4 + (0x3 << 2)
label_1af10c:
    if (ctx->pc == 0x1AF10Cu) {
        ctx->pc = 0x1AF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF108u;
        // 0x1af10c: 0x922202f5  lbu         $v0, 0x2F5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF110u;
        goto label_1af110;
    }
    ctx->pc = 0x1AF108u;
    {
        const bool branch_taken_0x1af108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF108u;
        // 0x1af10c: 0x922202f5  lbu         $v0, 0x2F5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af108) {
            ctx->pc = 0x1AF118u;
            goto label_1af118;
        }
    }
    ctx->pc = 0x1AF110u;
label_1af110:
    // 0x1af110: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1af110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1af114:
    // 0x1af114: 0x922202f5  lbu         $v0, 0x2F5($s1)
    ctx->pc = 0x1af114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1af118:
    // 0x1af118: 0x24e3dc80  addiu       $v1, $a3, -0x2380
    ctx->pc = 0x1af118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958208));
label_1af11c:
    // 0x1af11c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1af11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1af120:
    // 0x1af120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1af124:
    // 0x1af124: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1af128:
    if (ctx->pc == 0x1AF128u) {
        ctx->pc = 0x1AF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF124u;
        // 0x1af128: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF12Cu;
        goto label_1af12c;
    }
    ctx->pc = 0x1AF124u;
    {
        const bool branch_taken_0x1af124 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF124u;
        // 0x1af128: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af124) {
            ctx->pc = 0x1AF140u;
            goto label_1af140;
        }
    }
    ctx->pc = 0x1AF12Cu;
label_1af12c:
    // 0x1af12c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1af12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1af130:
    // 0x1af130: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1af130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1af134:
    // 0x1af134: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1af134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1af138:
    // 0x1af138: 0x10000002  b           . + 4 + (0x2 << 2)
label_1af13c:
    if (ctx->pc == 0x1AF13Cu) {
        ctx->pc = 0x1AF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF138u;
        // 0x1af13c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF140u;
        goto label_1af140;
    }
    ctx->pc = 0x1AF138u;
    {
        const bool branch_taken_0x1af138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF138u;
        // 0x1af13c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af138) {
            ctx->pc = 0x1AF144u;
            goto label_1af144;
        }
    }
    ctx->pc = 0x1AF140u;
label_1af140:
    // 0x1af140: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1af140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1af144:
    // 0x1af144: 0xc0f809  jalr        $a2
label_1af148:
    if (ctx->pc == 0x1AF148u) {
        ctx->pc = 0x1AF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF144u;
        // 0x1af148: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF14Cu;
        goto label_1af14c;
    }
    ctx->pc = 0x1AF144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1AF14Cu);
        ctx->pc = 0x1AF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF144u;
        // 0x1af148: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF144u, 0x1AF14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF14Cu;
label_1af14c:
    // 0x1af14c: 0x8e250600  lw          $a1, 0x600($s1)
    ctx->pc = 0x1af14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_1af150:
    // 0x1af150: 0xc06dce0  jal         func_1B7380
label_1af154:
    if (ctx->pc == 0x1AF154u) {
        ctx->pc = 0x1AF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF150u;
        // 0x1af154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF158u;
        goto label_1af158;
    }
    ctx->pc = 0x1AF150u;
    SET_GPR_U32(ctx, 31, 0x1AF158u);
    ctx->pc = 0x1AF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF150u;
    // 0x1af154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1AF150u, 0x1AF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF158u;
label_1af158:
    // 0x1af158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1af158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af15c:
    // 0x1af15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af160:
    // 0x1af160: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_1af164:
    if (ctx->pc == 0x1AF164u) {
        ctx->pc = 0x1AF168u;
        goto label_1af168;
    }
    ctx->pc = 0x1AF160u;
    {
        const bool branch_taken_0x1af160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af160) {
            ctx->pc = 0x1AF1ECu;
            goto label_1af1ec;
        }
    }
    ctx->pc = 0x1AF168u;
label_1af168:
    // 0x1af168: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x1af168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_1af16c:
    // 0x1af16c: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_1af170:
    if (ctx->pc == 0x1AF170u) {
        ctx->pc = 0x1AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF16Cu;
        // 0x1af170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF174u;
        goto label_1af174;
    }
    ctx->pc = 0x1AF16Cu;
    {
        const bool branch_taken_0x1af16c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF16Cu;
        // 0x1af170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af16c) {
            ctx->pc = 0x1AF194u;
            goto label_1af194;
        }
    }
    ctx->pc = 0x1AF174u;
label_1af174:
    // 0x1af174: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_1af178:
    // 0x1af178: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x1af178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_1af17c:
    // 0x1af17c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1af17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1af180:
    // 0x1af180: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1af180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1af184:
    // 0x1af184: 0xae2205b0  sw          $v0, 0x5B0($s1)
    ctx->pc = 0x1af184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 2));
label_1af188:
    // 0x1af188: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1af188u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1af18c:
    // 0x1af18c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1af190:
    if (ctx->pc == 0x1AF190u) {
        ctx->pc = 0x1AF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF18Cu;
        // 0x1af190: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF194u;
        goto label_1af194;
    }
    ctx->pc = 0x1AF18Cu;
    {
        const bool branch_taken_0x1af18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF18Cu;
        // 0x1af190: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af18c) {
            ctx->pc = 0x1AF1ECu;
            goto label_1af1ec;
        }
    }
    ctx->pc = 0x1AF194u;
label_1af194:
    // 0x1af194: 0xc06bbaa  jal         func_1AEEA8
label_1af198:
    if (ctx->pc == 0x1AF198u) {
        ctx->pc = 0x1AF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF194u;
        // 0x1af198: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF19Cu;
        goto label_1af19c;
    }
    ctx->pc = 0x1AF194u;
    SET_GPR_U32(ctx, 31, 0x1AF19Cu);
    ctx->pc = 0x1AF198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF194u;
    // 0x1af198: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEEA8u, 0x1AF194u, 0x1AF19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF19Cu;
label_1af19c:
    // 0x1af19c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1af19cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1af1a0:
    // 0x1af1a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1af1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af1a4:
    // 0x1af1a4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1af1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1af1a8:
    // 0x1af1a8: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x1af1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1af1ac:
    // 0x1af1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af1b0:
    // 0x1af1b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1af1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af1b4:
    // 0x1af1b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af1b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af1b8:
    // 0x1af1b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af1b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af1bc:
    // 0x1af1bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1af1bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af1c0:
    // 0x1af1c0: 0xc0b2e92  jal         func_2CBA48
label_1af1c4:
    if (ctx->pc == 0x1AF1C4u) {
        ctx->pc = 0x1AF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1C0u;
        // 0x1af1c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF1C8u;
        goto label_1af1c8;
    }
    ctx->pc = 0x1AF1C0u;
    SET_GPR_U32(ctx, 31, 0x1AF1C8u);
    ctx->pc = 0x1AF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1C0u;
    // 0x1af1c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AF1C0u, 0x1AF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF1C8u;
label_1af1c8:
    // 0x1af1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af1cc:
    // 0x1af1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af1d0:
    // 0x1af1d0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1af1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1af1d4:
    // 0x1af1d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1af1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af1d8:
    // 0x1af1d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af1d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af1dc:
    // 0x1af1dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af1dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af1e0:
    // 0x1af1e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1af1e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af1e4:
    // 0x1af1e4: 0xc0b2e92  jal         func_2CBA48
label_1af1e8:
    if (ctx->pc == 0x1AF1E8u) {
        ctx->pc = 0x1AF1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1E4u;
        // 0x1af1e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF1ECu;
        goto label_1af1ec;
    }
    ctx->pc = 0x1AF1E4u;
    SET_GPR_U32(ctx, 31, 0x1AF1ECu);
    ctx->pc = 0x1AF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1E4u;
    // 0x1af1e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AF1E4u, 0x1AF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF1ECu;
label_1af1ec:
    // 0x1af1ec: 0xc06c01e  jal         func_1B0078
label_1af1f0:
    if (ctx->pc == 0x1AF1F0u) {
        ctx->pc = 0x1AF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1ECu;
        // 0x1af1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF1F4u;
        goto label_1af1f4;
    }
    ctx->pc = 0x1AF1ECu;
    SET_GPR_U32(ctx, 31, 0x1AF1F4u);
    ctx->pc = 0x1AF1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1ECu;
    // 0x1af1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x1AF1ECu, 0x1AF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF1F4u;
label_1af1f4:
    // 0x1af1f4: 0x92230af0  lbu         $v1, 0xAF0($s1)
    ctx->pc = 0x1af1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2800)));
label_1af1f8:
    // 0x1af1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af1fc:
    // 0x1af1fc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1af200:
    if (ctx->pc == 0x1AF200u) {
        ctx->pc = 0x1AF204u;
        goto label_1af204;
    }
    ctx->pc = 0x1AF1FCu;
    {
        const bool branch_taken_0x1af1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af1fc) {
            ctx->pc = 0x1AF214u;
            goto label_1af214;
        }
    }
    ctx->pc = 0x1AF204u;
label_1af204:
    // 0x1af204: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1af204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1af208:
    // 0x1af208: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1af208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1af20c:
    // 0x1af20c: 0xc06dfb8  jal         func_1B7EE0
label_1af210:
    if (ctx->pc == 0x1AF210u) {
        ctx->pc = 0x1AF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF20Cu;
        // 0x1af210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF214u;
        goto label_1af214;
    }
    ctx->pc = 0x1AF20Cu;
    SET_GPR_U32(ctx, 31, 0x1AF214u);
    ctx->pc = 0x1AF210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF20Cu;
    // 0x1af210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x1AF20Cu, 0x1AF214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF214u;
label_1af214:
    // 0x1af214: 0xc06bbd0  jal         func_1AEF40
label_1af218:
    if (ctx->pc == 0x1AF218u) {
        ctx->pc = 0x1AF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF214u;
        // 0x1af218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF21Cu;
        goto label_1af21c;
    }
    ctx->pc = 0x1AF214u;
    SET_GPR_U32(ctx, 31, 0x1AF21Cu);
    ctx->pc = 0x1AF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF214u;
    // 0x1af218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF40u, 0x1AF214u, 0x1AF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF21Cu;
label_1af21c:
    // 0x1af21c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af220:
    // 0x1af220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af224:
    // 0x1af224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af228:
    // 0x1af228: 0x3e00008  jr          $ra
label_1af22c:
    if (ctx->pc == 0x1AF22Cu) {
        ctx->pc = 0x1AF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF228u;
        // 0x1af22c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF230u;
        goto label_fallthrough_0x1af228;
    }
    ctx->pc = 0x1AF228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF228u;
        // 0x1af22c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af228:
    ctx->pc = 0x1AF230u;
}
