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

// Function: func_00181118
// Address: 0x181118 - 0x1812b0
void func_00181118_0x181118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181118_0x181118");
#endif

    switch (ctx->pc) {
        case 0x181118u: goto label_181118;
        case 0x18111cu: goto label_18111c;
        case 0x181120u: goto label_181120;
        case 0x181124u: goto label_181124;
        case 0x181128u: goto label_181128;
        case 0x18112cu: goto label_18112c;
        case 0x181130u: goto label_181130;
        case 0x181134u: goto label_181134;
        case 0x181138u: goto label_181138;
        case 0x18113cu: goto label_18113c;
        case 0x181140u: goto label_181140;
        case 0x181144u: goto label_181144;
        case 0x181148u: goto label_181148;
        case 0x18114cu: goto label_18114c;
        case 0x181150u: goto label_181150;
        case 0x181154u: goto label_181154;
        case 0x181158u: goto label_181158;
        case 0x18115cu: goto label_18115c;
        case 0x181160u: goto label_181160;
        case 0x181164u: goto label_181164;
        case 0x181168u: goto label_181168;
        case 0x18116cu: goto label_18116c;
        case 0x181170u: goto label_181170;
        case 0x181174u: goto label_181174;
        case 0x181178u: goto label_181178;
        case 0x18117cu: goto label_18117c;
        case 0x181180u: goto label_181180;
        case 0x181184u: goto label_181184;
        case 0x181188u: goto label_181188;
        case 0x18118cu: goto label_18118c;
        case 0x181190u: goto label_181190;
        case 0x181194u: goto label_181194;
        case 0x181198u: goto label_181198;
        case 0x18119cu: goto label_18119c;
        case 0x1811a0u: goto label_1811a0;
        case 0x1811a4u: goto label_1811a4;
        case 0x1811a8u: goto label_1811a8;
        case 0x1811acu: goto label_1811ac;
        case 0x1811b0u: goto label_1811b0;
        case 0x1811b4u: goto label_1811b4;
        case 0x1811b8u: goto label_1811b8;
        case 0x1811bcu: goto label_1811bc;
        case 0x1811c0u: goto label_1811c0;
        case 0x1811c4u: goto label_1811c4;
        case 0x1811c8u: goto label_1811c8;
        case 0x1811ccu: goto label_1811cc;
        case 0x1811d0u: goto label_1811d0;
        case 0x1811d4u: goto label_1811d4;
        case 0x1811d8u: goto label_1811d8;
        case 0x1811dcu: goto label_1811dc;
        case 0x1811e0u: goto label_1811e0;
        case 0x1811e4u: goto label_1811e4;
        case 0x1811e8u: goto label_1811e8;
        case 0x1811ecu: goto label_1811ec;
        case 0x1811f0u: goto label_1811f0;
        case 0x1811f4u: goto label_1811f4;
        case 0x1811f8u: goto label_1811f8;
        case 0x1811fcu: goto label_1811fc;
        case 0x181200u: goto label_181200;
        case 0x181204u: goto label_181204;
        case 0x181208u: goto label_181208;
        case 0x18120cu: goto label_18120c;
        case 0x181210u: goto label_181210;
        case 0x181214u: goto label_181214;
        case 0x181218u: goto label_181218;
        case 0x18121cu: goto label_18121c;
        case 0x181220u: goto label_181220;
        case 0x181224u: goto label_181224;
        case 0x181228u: goto label_181228;
        case 0x18122cu: goto label_18122c;
        case 0x181230u: goto label_181230;
        case 0x181234u: goto label_181234;
        case 0x181238u: goto label_181238;
        case 0x18123cu: goto label_18123c;
        case 0x181240u: goto label_181240;
        case 0x181244u: goto label_181244;
        case 0x181248u: goto label_181248;
        case 0x18124cu: goto label_18124c;
        case 0x181250u: goto label_181250;
        case 0x181254u: goto label_181254;
        case 0x181258u: goto label_181258;
        case 0x18125cu: goto label_18125c;
        case 0x181260u: goto label_181260;
        case 0x181264u: goto label_181264;
        case 0x181268u: goto label_181268;
        case 0x18126cu: goto label_18126c;
        case 0x181270u: goto label_181270;
        case 0x181274u: goto label_181274;
        case 0x181278u: goto label_181278;
        case 0x18127cu: goto label_18127c;
        case 0x181280u: goto label_181280;
        case 0x181284u: goto label_181284;
        case 0x181288u: goto label_181288;
        case 0x18128cu: goto label_18128c;
        case 0x181290u: goto label_181290;
        case 0x181294u: goto label_181294;
        case 0x181298u: goto label_181298;
        case 0x18129cu: goto label_18129c;
        case 0x1812a0u: goto label_1812a0;
        case 0x1812a4u: goto label_1812a4;
        case 0x1812a8u: goto label_1812a8;
        case 0x1812acu: goto label_1812ac;
        default: break;
    }

    ctx->pc = 0x181118u;

label_181118:
    // 0x181118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18111c:
    // 0x18111c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_181120:
    // 0x181120: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_181124:
    // 0x181124: 0x2446db18  addiu       $a2, $v0, -0x24E8
    ctx->pc = 0x181124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957848));
label_181128:
    // 0x181128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18112c:
    // 0x18112c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18112cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181130:
    // 0x181130: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x181130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181134:
    // 0x181134: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x181134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_181138:
    // 0x181138: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18113c:
    // 0x18113c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_181140:
    // 0x181140: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_181144:
    // 0x181144: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_181148:
    if (ctx->pc == 0x181148u) {
        ctx->pc = 0x181148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181144u;
        // 0x181148: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18114Cu;
        goto label_18114c;
    }
    ctx->pc = 0x181144u;
    {
        const bool branch_taken_0x181144 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x181148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181144u;
        // 0x181148: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181144) {
            ctx->pc = 0x181170u;
            goto label_181170;
        }
    }
    ctx->pc = 0x18114Cu;
label_18114c:
    // 0x18114c: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_181150:
    // 0x181150: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_181154:
    // 0x181154: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_181158:
    // 0x181158: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x181158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18115c:
    // 0x18115c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_181160:
    // 0x181160: 0xdc67fff8  ld          $a3, -0x8($v1)
    ctx->pc = 0x181160u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_181164:
    // 0x181164: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x181164u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_181168:
    // 0x181168: 0x10000003  b           . + 4 + (0x3 << 2)
label_18116c:
    if (ctx->pc == 0x18116Cu) {
        ctx->pc = 0x18116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181168u;
        // 0x18116c: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181170u;
        goto label_181170;
    }
    ctx->pc = 0x181168u;
    {
        const bool branch_taken_0x181168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181168u;
        // 0x18116c: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181168) {
            ctx->pc = 0x181178u;
            goto label_181178;
        }
    }
    ctx->pc = 0x181170u;
label_181170:
    // 0x181170: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x181170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_181174:
    // 0x181174: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x181174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_181178:
    // 0x181178: 0x2503db18  addiu       $v1, $t0, -0x24E8
    ctx->pc = 0x181178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957848));
label_18117c:
    // 0x18117c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18117cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_181180:
    // 0x181180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_181184:
    // 0x181184: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_181188:
    if (ctx->pc == 0x181188u) {
        ctx->pc = 0x181188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181184u;
        // 0x181188: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18118Cu;
        goto label_18118c;
    }
    ctx->pc = 0x181184u;
    {
        const bool branch_taken_0x181184 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x181188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181184u;
        // 0x181188: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181184) {
            ctx->pc = 0x1811A0u;
            goto label_1811a0;
        }
    }
    ctx->pc = 0x18118Cu;
label_18118c:
    // 0x18118c: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x18118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_181190:
    // 0x181190: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x181190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_181194:
    // 0x181194: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_181198:
    // 0x181198: 0x10000002  b           . + 4 + (0x2 << 2)
label_18119c:
    if (ctx->pc == 0x18119Cu) {
        ctx->pc = 0x18119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181198u;
        // 0x18119c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811A0u;
        goto label_1811a0;
    }
    ctx->pc = 0x181198u;
    {
        const bool branch_taken_0x181198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181198u;
        // 0x18119c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181198) {
            ctx->pc = 0x1811A4u;
            goto label_1811a4;
        }
    }
    ctx->pc = 0x1811A0u;
label_1811a0:
    // 0x1811a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1811a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1811a4:
    // 0x1811a4: 0xc0f809  jalr        $a2
label_1811a8:
    if (ctx->pc == 0x1811A8u) {
        ctx->pc = 0x1811A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811A4u;
        // 0x1811a8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811ACu;
        goto label_1811ac;
    }
    ctx->pc = 0x1811A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1811ACu);
        ctx->pc = 0x1811A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811A4u;
        // 0x1811a8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1811A4u, 0x1811ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1811ACu;
label_1811ac:
    // 0x1811ac: 0x9202060a  lbu         $v0, 0x60A($s0)
    ctx->pc = 0x1811acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1546)));
label_1811b0:
    // 0x1811b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1811b4:
    // 0x1811b4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1811b8:
    // 0x1811b8: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
label_1811bc:
    if (ctx->pc == 0x1811BCu) {
        ctx->pc = 0x1811BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811B8u;
        // 0x1811bc: 0xa202060a  sb          $v0, 0x60A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1546), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811C0u;
        goto label_1811c0;
    }
    ctx->pc = 0x1811B8u;
    {
        const bool branch_taken_0x1811b8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1811BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811B8u;
        // 0x1811bc: 0xa202060a  sb          $v0, 0x60A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1546), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811b8) {
            ctx->pc = 0x1811ECu;
            goto label_1811ec;
        }
    }
    ctx->pc = 0x1811C0u;
label_1811c0:
    // 0x1811c0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1811c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1811c4:
    // 0x1811c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1811c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1811c8:
    // 0x1811c8: 0x86030548  lh          $v1, 0x548($s0)
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
label_1811cc:
    // 0x1811cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1811ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1811d0:
    // 0x1811d0: 0xa204060a  sb          $a0, 0x60A($s0)
    ctx->pc = 0x1811d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1546), (uint8_t)GPR_U32(ctx, 4));
label_1811d4:
    // 0x1811d4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1811d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1811d8:
    // 0x1811d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1811dc:
    if (ctx->pc == 0x1811DCu) {
        ctx->pc = 0x1811DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811D8u;
        // 0x1811dc: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811E0u;
        goto label_1811e0;
    }
    ctx->pc = 0x1811D8u;
    {
        const bool branch_taken_0x1811d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1811DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811D8u;
        // 0x1811dc: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811d8) {
            ctx->pc = 0x1811E8u;
            goto label_1811e8;
        }
    }
    ctx->pc = 0x1811E0u;
label_1811e0:
    // 0x1811e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1811e4:
    if (ctx->pc == 0x1811E4u) {
        ctx->pc = 0x1811E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811E0u;
        // 0x1811e4: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811E8u;
        goto label_1811e8;
    }
    ctx->pc = 0x1811E0u;
    {
        const bool branch_taken_0x1811e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811E0u;
        // 0x1811e4: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811e0) {
            ctx->pc = 0x1811ECu;
            goto label_1811ec;
        }
    }
    ctx->pc = 0x1811E8u;
label_1811e8:
    // 0x1811e8: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1811e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_1811ec:
    // 0x1811ec: 0x8e03060c  lw          $v1, 0x60C($s0)
    ctx->pc = 0x1811ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
label_1811f0:
    // 0x1811f0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_1811f4:
    if (ctx->pc == 0x1811F4u) {
        ctx->pc = 0x1811F8u;
        goto label_1811f8;
    }
    ctx->pc = 0x1811F0u;
    {
        const bool branch_taken_0x1811f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1811f0) {
            ctx->pc = 0x181298u;
            goto label_181298;
        }
    }
    ctx->pc = 0x1811F8u;
label_1811f8:
    // 0x1811f8: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x1811f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1811fc:
    // 0x1811fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1811fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_181200:
    // 0x181200: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_181204:
    if (ctx->pc == 0x181204u) {
        ctx->pc = 0x181208u;
        goto label_181208;
    }
    ctx->pc = 0x181200u;
    {
        const bool branch_taken_0x181200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181200) {
            ctx->pc = 0x181298u;
            goto label_181298;
        }
    }
    ctx->pc = 0x181208u;
label_181208:
    // 0x181208: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_18120c:
    // 0x18120c: 0x8604054a  lh          $a0, 0x54A($s0)
    ctx->pc = 0x18120cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_181210:
    // 0x181210: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x181210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_181214:
    // 0x181214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x181214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_181218:
    // 0x181218: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
label_18121c:
    // 0x18121c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x18121cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_181220:
    // 0x181220: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x181220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_181224:
    // 0x181224: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x181224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_181228:
    // 0x181228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18122c:
    if (ctx->pc == 0x18122Cu) {
        ctx->pc = 0x18122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181228u;
        // 0x18122c: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181230u;
        goto label_181230;
    }
    ctx->pc = 0x181228u;
    {
        const bool branch_taken_0x181228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181228u;
        // 0x18122c: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181228) {
            ctx->pc = 0x181238u;
            goto label_181238;
        }
    }
    ctx->pc = 0x181230u;
label_181230:
    // 0x181230: 0x10000002  b           . + 4 + (0x2 << 2)
label_181234:
    if (ctx->pc == 0x181234u) {
        ctx->pc = 0x181234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181230u;
        // 0x181234: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181238u;
        goto label_181238;
    }
    ctx->pc = 0x181230u;
    {
        const bool branch_taken_0x181230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181230u;
        // 0x181234: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181230) {
            ctx->pc = 0x18123Cu;
            goto label_18123c;
        }
    }
    ctx->pc = 0x181238u;
label_181238:
    // 0x181238: 0xa604054a  sh          $a0, 0x54A($s0)
    ctx->pc = 0x181238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
label_18123c:
    // 0x18123c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_181240:
    // 0x181240: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_181244:
    if (ctx->pc == 0x181244u) {
        ctx->pc = 0x181244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181240u;
        // 0x181244: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181248u;
        goto label_181248;
    }
    ctx->pc = 0x181240u;
    {
        const bool branch_taken_0x181240 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x181244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181240u;
        // 0x181244: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181240) {
            ctx->pc = 0x181260u;
            goto label_181260;
        }
    }
    ctx->pc = 0x181248u;
label_181248:
    // 0x181248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18124c:
    // 0x18124c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18124cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_181250:
    // 0x181250: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x181250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_181254:
    // 0x181254: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x181254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_181258:
    // 0x181258: 0x10000005  b           . + 4 + (0x5 << 2)
label_18125c:
    if (ctx->pc == 0x18125Cu) {
        ctx->pc = 0x18125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181258u;
        // 0x18125c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181260u;
        goto label_181260;
    }
    ctx->pc = 0x181258u;
    {
        const bool branch_taken_0x181258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181258u;
        // 0x18125c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181258) {
            ctx->pc = 0x181270u;
            goto label_181270;
        }
    }
    ctx->pc = 0x181260u;
label_181260:
    // 0x181260: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x181260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_181264:
    // 0x181264: 0xa6020600  sh          $v0, 0x600($s0)
    ctx->pc = 0x181264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
label_181268:
    // 0x181268: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x181268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18126c:
    // 0x18126c: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x18126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_181270:
    // 0x181270: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_181274:
    // 0x181274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181278:
    // 0x181278: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x181278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_18127c:
    // 0x18127c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x18127cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_181280:
    // 0x181280: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x181280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181284:
    // 0x181284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181288:
    // 0x181288: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18128c:
    // 0x18128c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18128cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181290:
    // 0x181290: 0xc0b2e92  jal         func_2CBA48
label_181294:
    if (ctx->pc == 0x181294u) {
        ctx->pc = 0x181294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181290u;
        // 0x181294: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181298u;
        goto label_181298;
    }
    ctx->pc = 0x181290u;
    SET_GPR_U32(ctx, 31, 0x181298u);
    ctx->pc = 0x181294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181290u;
    // 0x181294: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x181290u, 0x181298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181298u;
label_181298:
    // 0x181298: 0xc060336  jal         func_180CD8
label_18129c:
    if (ctx->pc == 0x18129Cu) {
        ctx->pc = 0x18129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181298u;
        // 0x18129c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1812A0u;
        goto label_1812a0;
    }
    ctx->pc = 0x181298u;
    SET_GPR_U32(ctx, 31, 0x1812A0u);
    ctx->pc = 0x18129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181298u;
    // 0x18129c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180CD8u, 0x181298u, 0x1812A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1812A0u;
label_1812a0:
    // 0x1812a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1812a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1812a4:
    // 0x1812a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1812a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1812a8:
    // 0x1812a8: 0x3e00008  jr          $ra
label_1812ac:
    if (ctx->pc == 0x1812ACu) {
        ctx->pc = 0x1812ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812A8u;
        // 0x1812ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1812B0u;
        goto label_fallthrough_0x1812a8;
    }
    ctx->pc = 0x1812A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1812ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812A8u;
        // 0x1812ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1812A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1812a8:
    ctx->pc = 0x1812B0u;
}
