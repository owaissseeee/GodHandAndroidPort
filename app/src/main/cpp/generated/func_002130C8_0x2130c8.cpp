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

// Function: func_002130C8
// Address: 0x2130c8 - 0x213710
void func_002130C8_0x2130c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002130C8_0x2130c8");
#endif

    switch (ctx->pc) {
        case 0x213168u: goto label_213168;
        case 0x2132b4u: goto label_2132b4;
        case 0x2132d8u: goto label_2132d8;
        case 0x2132f8u: goto label_2132f8;
        case 0x213330u: goto label_213330;
        case 0x21335cu: goto label_21335c;
        case 0x2133d8u: goto label_2133d8;
        case 0x2133e0u: goto label_2133e0;
        case 0x213430u: goto label_213430;
        case 0x213438u: goto label_213438;
        case 0x213444u: goto label_213444;
        case 0x213450u: goto label_213450;
        case 0x2134ccu: goto label_2134cc;
        case 0x2135c4u: goto label_2135c4;
        case 0x2135ecu: goto label_2135ec;
        case 0x213618u: goto label_213618;
        case 0x213620u: goto label_213620;
        case 0x213644u: goto label_213644;
        case 0x213654u: goto label_213654;
        case 0x21366cu: goto label_21366c;
        case 0x2136d4u: goto label_2136d4;
        case 0x2136e4u: goto label_2136e4;
        default: break;
    }

    ctx->pc = 0x2130c8u;

    // 0x2130c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2130c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2130cc: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x2130ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x2130d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2130d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2130d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2130d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2130d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2130d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2130dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2130e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2130e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2130e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2130e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2130e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2130e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2130ec: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2130ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2130f0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2130f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2130f4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2130f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2130f8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2130F8u;
    {
        const bool branch_taken_0x2130f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F8u;
        // 0x2130fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130f8) {
            ctx->pc = 0x213144u;
            goto label_213144;
        }
    }
    ctx->pc = 0x213100u;
    // 0x213100: 0x28620227  slti        $v0, $v1, 0x227
    ctx->pc = 0x213100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
    // 0x213104: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213104u;
    {
        const bool branch_taken_0x213104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213104u;
        // 0x213108: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213104) {
            ctx->pc = 0x213124u;
            goto label_213124;
        }
    }
    ctx->pc = 0x21310Cu;
    // 0x21310c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21310Cu;
    {
        const bool branch_taken_0x21310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21310Cu;
        // 0x213110: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21310c) {
            ctx->pc = 0x213138u;
            goto label_213138;
        }
    }
    ctx->pc = 0x213114u;
    // 0x213114: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x213114u;
    {
        const bool branch_taken_0x213114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213114) {
            ctx->pc = 0x213118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213114u;
            // 0x213118: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21313Cu;
            goto label_21313c;
        }
    }
    ctx->pc = 0x21311Cu;
    // 0x21311c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21311Cu;
    {
        const bool branch_taken_0x21311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21311Cu;
        // 0x213120: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21311c) {
            ctx->pc = 0x213148u;
            goto label_213148;
        }
    }
    ctx->pc = 0x213124u;
label_213124:
    // 0x213124: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x213124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x213128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213128u;
    {
        const bool branch_taken_0x213128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213128u;
        // 0x21312c: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213128) {
            ctx->pc = 0x213138u;
            goto label_213138;
        }
    }
    ctx->pc = 0x213130u;
    // 0x213130: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x213130u;
    {
        const bool branch_taken_0x213130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213130) {
            ctx->pc = 0x213134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213130u;
            // 0x213134: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213148u;
            goto label_213148;
        }
    }
    ctx->pc = 0x213138u;
label_213138:
    // 0x213138: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x213138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_21313c:
    // 0x21313c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x21313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x213140: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x213140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_213144:
    // 0x213144: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x213144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_213148:
    // 0x213148: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213148u;
    {
        const bool branch_taken_0x213148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213148u;
        // 0x21314c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213148) {
            ctx->pc = 0x213160u;
            goto label_213160;
        }
    }
    ctx->pc = 0x213150u;
    // 0x213150: 0x506200ae  beql        $v1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x213150u;
    {
        const bool branch_taken_0x213150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x213150) {
            ctx->pc = 0x213154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213150u;
            // 0x213154: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21340Cu;
            goto label_21340c;
        }
    }
    ctx->pc = 0x213158u;
    // 0x213158: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x213158u;
    {
        const bool branch_taken_0x213158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213158) {
            ctx->pc = 0x213618u;
            goto label_213618;
        }
    }
    ctx->pc = 0x213160u;
label_213160:
    // 0x213160: 0xc09d91a  jal         func_276468
    ctx->pc = 0x213160u;
    SET_GPR_U32(ctx, 31, 0x213168u);
    ctx->pc = 0x213164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213160u;
    // 0x213164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x213160u, 0x213168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213168u;
label_213168:
    // 0x213168: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x213168u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21316c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x21316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x213170: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x213174: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x213174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x213178: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x213178u;
    {
        const bool branch_taken_0x213178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213178u;
        // 0x21317c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213178) {
            ctx->pc = 0x213198u;
            goto label_213198;
        }
    }
    ctx->pc = 0x213180u;
    // 0x213180: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x213180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213184: 0x244252e0  addiu       $v0, $v0, 0x52E0
    ctx->pc = 0x213184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21216));
    // 0x213188: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21318c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213190: 0x800008  jr          $a0
    ctx->pc = 0x213190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213198u: goto label_213198;
            case 0x2131A8u: goto label_2131a8;
            case 0x2131B8u: goto label_2131b8;
            case 0x2131C8u: goto label_2131c8;
            case 0x2131D8u: goto label_2131d8;
            case 0x2131E8u: goto label_2131e8;
            case 0x2131F8u: goto label_2131f8;
            case 0x213208u: goto label_213208;
            case 0x213218u: goto label_213218;
            case 0x213228u: goto label_213228;
            case 0x213238u: goto label_213238;
            case 0x213248u: goto label_213248;
            case 0x213258u: goto label_213258;
            case 0x213268u: goto label_213268;
            case 0x213278u: goto label_213278;
            case 0x213288u: goto label_213288;
            case 0x213300u: goto label_213300;
            case 0x213310u: goto label_213310;
            case 0x213320u: goto label_213320;
            case 0x213374u: goto label_213374;
            case 0x213384u: goto label_213384;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x213198u;
label_213198:
    // 0x213198: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21319c: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x21319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2131a0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2131A0u;
    {
        const bool branch_taken_0x2131a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131A0u;
        // 0x2131a4: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131a0) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x2131A8u;
label_2131a8:
    // 0x2131a8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2131ac: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x2131acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x2131b0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2131B0u;
    {
        const bool branch_taken_0x2131b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131B0u;
        // 0x2131b4: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131b0) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x2131B8u;
label_2131b8:
    // 0x2131b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2131b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2131bc: 0x8c4335d4  lw          $v1, 0x35D4($v0)
    ctx->pc = 0x2131bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13780)));
    // 0x2131c0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2131C0u;
    {
        const bool branch_taken_0x2131c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131C0u;
        // 0x2131c4: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131c0) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x2131C8u;
label_2131c8:
    // 0x2131c8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2131c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2131cc: 0x8c4325dc  lw          $v1, 0x25DC($v0)
    ctx->pc = 0x2131ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9692)));
    // 0x2131d0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2131D0u;
    {
        const bool branch_taken_0x2131d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131D0u;
        // 0x2131d4: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131d0) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x2131D8u;
label_2131d8:
    // 0x2131d8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2131d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2131dc: 0x8c4310b0  lw          $v1, 0x10B0($v0)
    ctx->pc = 0x2131dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4272)));
    // 0x2131e0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2131E0u;
    {
        const bool branch_taken_0x2131e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131E0u;
        // 0x2131e4: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131e0) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x2131E8u;
label_2131e8:
    // 0x2131e8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2131ec: 0x8c433c90  lw          $v1, 0x3C90($v0)
    ctx->pc = 0x2131ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15504)));
    // 0x2131f0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2131F0u;
    {
        const bool branch_taken_0x2131f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131F0u;
        // 0x2131f4: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131f0) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x2131F8u;
label_2131f8:
    // 0x2131f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2131f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2131fc: 0x8c430830  lw          $v1, 0x830($v0)
    ctx->pc = 0x2131fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
    // 0x213200: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x213200u;
    {
        const bool branch_taken_0x213200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213200u;
        // 0x213204: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213200) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213208u;
label_213208:
    // 0x213208: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21320c: 0x8c431fb8  lw          $v1, 0x1FB8($v0)
    ctx->pc = 0x21320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8120)));
    // 0x213210: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x213210u;
    {
        const bool branch_taken_0x213210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213210u;
        // 0x213214: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213210) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213218u;
label_213218:
    // 0x213218: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21321c: 0x8c431eb4  lw          $v1, 0x1EB4($v0)
    ctx->pc = 0x21321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7860)));
    // 0x213220: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x213220u;
    {
        const bool branch_taken_0x213220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213220u;
        // 0x213224: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213220) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213228u;
label_213228:
    // 0x213228: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21322c: 0x8c431568  lw          $v1, 0x1568($v0)
    ctx->pc = 0x21322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5480)));
    // 0x213230: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x213230u;
    {
        const bool branch_taken_0x213230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213230u;
        // 0x213234: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213230) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213238u;
label_213238:
    // 0x213238: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21323c: 0x8c433a08  lw          $v1, 0x3A08($v0)
    ctx->pc = 0x21323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14856)));
    // 0x213240: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x213240u;
    {
        const bool branch_taken_0x213240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213240u;
        // 0x213244: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213240) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213248u;
label_213248:
    // 0x213248: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21324c: 0x8c433420  lw          $v1, 0x3420($v0)
    ctx->pc = 0x21324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13344)));
    // 0x213250: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x213250u;
    {
        const bool branch_taken_0x213250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213250u;
        // 0x213254: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213250) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213258u;
label_213258:
    // 0x213258: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21325c: 0x8c4318f8  lw          $v1, 0x18F8($v0)
    ctx->pc = 0x21325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6392)));
    // 0x213260: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x213260u;
    {
        const bool branch_taken_0x213260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213260u;
        // 0x213264: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213260) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213268u;
label_213268:
    // 0x213268: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21326c: 0x8c433040  lw          $v1, 0x3040($v0)
    ctx->pc = 0x21326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12352)));
    // 0x213270: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x213270u;
    {
        const bool branch_taken_0x213270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213270u;
        // 0x213274: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213270) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213278u;
label_213278:
    // 0x213278: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21327c: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x21327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
    // 0x213280: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x213280u;
    {
        const bool branch_taken_0x213280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213280u;
        // 0x213284: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213280) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213288u;
label_213288:
    // 0x213288: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x213288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21328c: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x21328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213290: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x213290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x213294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213298: 0x8c623734  lw          $v0, 0x3734($v1)
    ctx->pc = 0x213298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14132)));
    // 0x21329c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21329cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2132a0: 0x0  nop
    ctx->pc = 0x2132a0u;
    // NOP
    // 0x2132a4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2132A4u;
    {
        const bool branch_taken_0x2132a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2132A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132A4u;
        // 0x2132a8: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132a4) {
            ctx->pc = 0x2132E0u;
            goto label_2132e0;
        }
    }
    ctx->pc = 0x2132ACu;
    // 0x2132ac: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2132ACu;
    SET_GPR_U32(ctx, 31, 0x2132B4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2132ACu, 0x2132B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132B4u;
label_2132b4:
    // 0x2132b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2132b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2132b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2132B8u;
    {
        const bool branch_taken_0x2132b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132B8u;
        // 0x2132bc: 0x8e230304  lw          $v1, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132b8) {
            ctx->pc = 0x2132E0u;
            goto label_2132e0;
        }
    }
    ctx->pc = 0x2132C0u;
    // 0x2132c0: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x2132c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x2132c4: 0x8c62373c  lw          $v0, 0x373C($v1)
    ctx->pc = 0x2132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14140)));
    // 0x2132c8: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2132C8u;
    {
        const bool branch_taken_0x2132c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132C8u;
        // 0x2132cc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132c8) {
            ctx->pc = 0x213398u;
            goto label_213398;
        }
    }
    ctx->pc = 0x2132D0u;
    // 0x2132d0: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2132D0u;
    SET_GPR_U32(ctx, 31, 0x2132D8u);
    ctx->pc = 0x2132D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132D0u;
    // 0x2132d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2132D0u, 0x2132D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132D8u;
label_2132d8:
    // 0x2132d8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2132D8u;
    {
        const bool branch_taken_0x2132d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132D8u;
        // 0x2132dc: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132d8) {
            ctx->pc = 0x21339Cu;
            goto label_21339c;
        }
    }
    ctx->pc = 0x2132E0u;
label_2132e0:
    // 0x2132e0: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x2132e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x2132e4: 0x8c623738  lw          $v0, 0x3738($v1)
    ctx->pc = 0x2132e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14136)));
    // 0x2132e8: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2132E8u;
    {
        const bool branch_taken_0x2132e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132E8u;
        // 0x2132ec: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132e8) {
            ctx->pc = 0x213398u;
            goto label_213398;
        }
    }
    ctx->pc = 0x2132F0u;
    // 0x2132f0: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2132F0u;
    SET_GPR_U32(ctx, 31, 0x2132F8u);
    ctx->pc = 0x2132F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132F0u;
    // 0x2132f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2132F0u, 0x2132F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132F8u;
label_2132f8:
    // 0x2132f8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2132F8u;
    {
        const bool branch_taken_0x2132f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132F8u;
        // 0x2132fc: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132f8) {
            ctx->pc = 0x21339Cu;
            goto label_21339c;
        }
    }
    ctx->pc = 0x213300u;
label_213300:
    // 0x213300: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213304: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x213304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x213308: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x213308u;
    {
        const bool branch_taken_0x213308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213308u;
        // 0x21330c: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213308) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213310u;
label_213310:
    // 0x213310: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213314: 0x8c430d00  lw          $v1, 0xD00($v0)
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
    // 0x213318: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x213318u;
    {
        const bool branch_taken_0x213318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213318u;
        // 0x21331c: 0x8c440d04  lw          $a0, 0xD04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213318) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213320u;
label_213320:
    // 0x213320: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x213320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x213324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213328: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x213328u;
    SET_GPR_U32(ctx, 31, 0x213330u);
    ctx->pc = 0x21332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213328u;
    // 0x21332c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x213328u, 0x213330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213330u;
label_213330:
    // 0x213330: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x213330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x213334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213338: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x213338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x21333c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213340: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x213340u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x213344: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213348: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21334c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21334cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x213350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213354: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x213354u;
    SET_GPR_U32(ctx, 31, 0x21335Cu);
    ctx->pc = 0x213358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213354u;
    // 0x213358: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x213354u, 0x21335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21335Cu;
label_21335c:
    // 0x21335c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x21335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213360: 0x8c621bc8  lw          $v0, 0x1BC8($v1)
    ctx->pc = 0x213360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7112)));
    // 0x213364: 0x8c641bcc  lw          $a0, 0x1BCC($v1)
    ctx->pc = 0x213364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7116)));
    // 0x213368: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x213368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21336c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21336Cu;
    {
        const bool branch_taken_0x21336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21336Cu;
        // 0x213370: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21336c) {
            ctx->pc = 0x213398u;
            goto label_213398;
        }
    }
    ctx->pc = 0x213374u;
label_213374:
    // 0x213374: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213378: 0x8c432d48  lw          $v1, 0x2D48($v0)
    ctx->pc = 0x213378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11592)));
    // 0x21337c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21337Cu;
    {
        const bool branch_taken_0x21337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21337Cu;
        // 0x213380: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21337c) {
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x213384u;
label_213384:
    // 0x213384: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213388: 0x8c43227c  lw          $v1, 0x227C($v0)
    ctx->pc = 0x213388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8828)));
    // 0x21338c: 0x8c442280  lw          $a0, 0x2280($v0)
    ctx->pc = 0x21338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8832)));
label_213390:
    // 0x213390: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x213390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213394: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x213394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_213398:
    // 0x213398: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x213398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_21339c:
    // 0x21339c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21339Cu;
    {
        const bool branch_taken_0x21339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21339c) {
            ctx->pc = 0x2133B8u;
            goto label_2133b8;
        }
    }
    ctx->pc = 0x2133A4u;
    // 0x2133a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2133a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2133a8: 0x8c430454  lw          $v1, 0x454($v0)
    ctx->pc = 0x2133a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1108)));
    // 0x2133ac: 0x8c440458  lw          $a0, 0x458($v0)
    ctx->pc = 0x2133acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1112)));
    // 0x2133b0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2133b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2133b4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2133b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2133b8:
    // 0x2133b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2133b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2133bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2133bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2133c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2133c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133c8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2133c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133cc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2133ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2133d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2133D0u;
    SET_GPR_U32(ctx, 31, 0x2133D8u);
    ctx->pc = 0x2133D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133D0u;
    // 0x2133d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2133D0u, 0x2133D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2133D8u;
label_2133d8:
    // 0x2133d8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2133D8u;
    SET_GPR_U32(ctx, 31, 0x2133E0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2133D8u, 0x2133E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2133E0u;
label_2133e0:
    // 0x2133e0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2133e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2133e4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2133e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2133e8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2133E8u;
    {
        const bool branch_taken_0x2133e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2133e8) {
            ctx->pc = 0x2133ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2133E8u;
            // 0x2133ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2133F0u;
            goto label_2133f0;
        }
    }
    ctx->pc = 0x2133F0u;
label_2133f0:
    // 0x2133f0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2133f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2133f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2133f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2133f8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2133f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2133fc: 0x2010  mfhi        $a0
    ctx->pc = 0x2133fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x213400: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x213400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x213404: 0xae2405f4  sw          $a0, 0x5F4($s1)
    ctx->pc = 0x213404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    // 0x213408: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x213408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21340c:
    // 0x21340c: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x21340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x213410: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x213410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x213414: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x213414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x213418: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21341c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213424: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213428: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x213428u;
    SET_GPR_U32(ctx, 31, 0x213430u);
    ctx->pc = 0x21342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213428u;
    // 0x21342c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x213428u, 0x213430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213430u;
label_213430:
    // 0x213430: 0xc055f06  jal         func_157C18
    ctx->pc = 0x213430u;
    SET_GPR_U32(ctx, 31, 0x213438u);
    ctx->pc = 0x213434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213430u;
    // 0x213434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x213430u, 0x213438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213438u;
label_213438:
    // 0x213438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21343c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x21343Cu;
    SET_GPR_U32(ctx, 31, 0x213444u);
    ctx->pc = 0x213440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21343Cu;
    // 0x213440: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x21343Cu, 0x213444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213444u;
label_213444:
    // 0x213444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213448: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x213448u;
    SET_GPR_U32(ctx, 31, 0x213450u);
    ctx->pc = 0x21344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213448u;
    // 0x21344c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x213448u, 0x213450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213450u;
label_213450:
    // 0x213450: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x213450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x213454: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x213454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x213458: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x213458u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x21345c: 0x1260004c  beqz        $s3, . + 4 + (0x4C << 2)
    ctx->pc = 0x21345Cu;
    {
        const bool branch_taken_0x21345c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x213460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21345Cu;
        // 0x213460: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21345c) {
            ctx->pc = 0x213590u;
            goto label_213590;
        }
    }
    ctx->pc = 0x213464u;
    // 0x213464: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x213464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x213468: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x21346c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21346cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213470: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x213470u;
    {
        const bool branch_taken_0x213470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213470u;
        // 0x213474: 0x28620266  slti        $v0, $v1, 0x266 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213470) {
            ctx->pc = 0x2134BCu;
            goto label_2134bc;
        }
    }
    ctx->pc = 0x213478u;
    // 0x213478: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x213478u;
    {
        const bool branch_taken_0x213478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213478u;
        // 0x21347c: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213478) {
            ctx->pc = 0x2134C0u;
            goto label_2134c0;
        }
    }
    ctx->pc = 0x213480u;
    // 0x213480: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x213480u;
    {
        const bool branch_taken_0x213480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x213484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213480u;
        // 0x213484: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213480) {
            ctx->pc = 0x2134C4u;
            goto label_2134c4;
        }
    }
    ctx->pc = 0x213488u;
    // 0x213488: 0xc621075c  lwc1        $f1, 0x75C($s1)
    ctx->pc = 0x213488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21348c: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x21348cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x213490: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x213490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x213494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213498: 0x0  nop
    ctx->pc = 0x213498u;
    // NOP
    // 0x21349c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21349cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2134a0: 0x0  nop
    ctx->pc = 0x2134a0u;
    // NOP
    // 0x2134a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2134A4u;
    {
        const bool branch_taken_0x2134a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2134A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134A4u;
        // 0x2134a8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134a4) {
            ctx->pc = 0x2134C4u;
            goto label_2134c4;
        }
    }
    ctx->pc = 0x2134ACu;
    // 0x2134ac: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2134acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2134b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2134b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2134b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2134B4u;
    {
        const bool branch_taken_0x2134b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2134b4) {
            ctx->pc = 0x2134C4u;
            goto label_2134c4;
        }
    }
    ctx->pc = 0x2134BCu;
label_2134bc:
    // 0x2134bc: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x2134bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_2134c0:
    // 0x2134c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2134c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2134c4:
    // 0x2134c4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2134C4u;
    SET_GPR_U32(ctx, 31, 0x2134CCu);
    ctx->pc = 0x2134C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134C4u;
    // 0x2134c8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2134C4u, 0x2134CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134CCu;
label_2134cc:
    // 0x2134cc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2134ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2134d0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2134d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2134d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2134D4u;
    {
        const bool branch_taken_0x2134d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134D4u;
        // 0x2134d8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134d4) {
            ctx->pc = 0x2134F4u;
            goto label_2134f4;
        }
    }
    ctx->pc = 0x2134DCu;
    // 0x2134dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2134dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2134e0: 0x244254e0  addiu       $v0, $v0, 0x54E0
    ctx->pc = 0x2134e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21728));
    // 0x2134e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2134e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2134e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2134e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2134ec: 0x800008  jr          $a0
    ctx->pc = 0x2134ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2134F4u: goto label_2134f4;
            case 0x213508u: goto label_213508;
            case 0x213524u: goto label_213524;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2134ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2134F4u;
label_2134f4:
    // 0x2134f4: 0x8e2316d8  lw          $v1, 0x16D8($s1)
    ctx->pc = 0x2134f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
    // 0x2134f8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2134F8u;
    {
        const bool branch_taken_0x2134f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2134FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134F8u;
        // 0x2134fc: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134f8) {
            ctx->pc = 0x213544u;
            goto label_213544;
        }
    }
    ctx->pc = 0x213500u;
    // 0x213500: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x213500u;
    {
        const bool branch_taken_0x213500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213500) {
            ctx->pc = 0x213538u;
            goto label_213538;
        }
    }
    ctx->pc = 0x213508u;
label_213508:
    // 0x213508: 0x8e2216d8  lw          $v0, 0x16D8($s1)
    ctx->pc = 0x213508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
    // 0x21350c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21350cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213510: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x213510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x213514: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x213514u;
    {
        const bool branch_taken_0x213514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213514u;
        // 0x213518: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213514) {
            ctx->pc = 0x213544u;
            goto label_213544;
        }
    }
    ctx->pc = 0x21351Cu;
    // 0x21351c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21351Cu;
    {
        const bool branch_taken_0x21351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21351c) {
            ctx->pc = 0x213538u;
            goto label_213538;
        }
    }
    ctx->pc = 0x213524u;
label_213524:
    // 0x213524: 0x8e2216d8  lw          $v0, 0x16D8($s1)
    ctx->pc = 0x213524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
    // 0x213528: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x213528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21352c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x21352cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x213530: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213530u;
    {
        const bool branch_taken_0x213530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213530) {
            ctx->pc = 0x21354Cu;
            goto label_21354c;
        }
    }
    ctx->pc = 0x213538u;
label_213538:
    // 0x213538: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x213538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x21353c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21353cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213540: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x213540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_213544:
    // 0x213544: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213544u;
    {
        const bool branch_taken_0x213544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213544u;
        // 0x213548: 0x2c620006  sltiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213544) {
            ctx->pc = 0x213558u;
            goto label_213558;
        }
    }
    ctx->pc = 0x21354Cu;
label_21354c:
    // 0x21354c: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x21354cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x213550: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213554: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x213554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_213558:
    // 0x213558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213558u;
    {
        const bool branch_taken_0x213558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213558u;
        // 0x21355c: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213558) {
            ctx->pc = 0x213568u;
            goto label_213568;
        }
    }
    ctx->pc = 0x213560u;
    // 0x213560: 0x3c0142f2  lui         $at, 0x42F2
    ctx->pc = 0x213560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17138 << 16));
    // 0x213564: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_213568:
    // 0x213568: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x213568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x21356c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21356Cu;
    {
        const bool branch_taken_0x21356c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x213570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21356Cu;
        // 0x213570: 0xc6200618  lwc1        $f0, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21356c) {
            ctx->pc = 0x21357Cu;
            goto label_21357c;
        }
    }
    ctx->pc = 0x213574u;
    // 0x213574: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x213574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x213578: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21357c:
    // 0x21357c: 0x0  nop
    ctx->pc = 0x21357cu;
    // NOP
    // 0x213580: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x213580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213584: 0x0  nop
    ctx->pc = 0x213584u;
    // NOP
    // 0x213588: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x213588u;
    {
        const bool branch_taken_0x213588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213588) {
            ctx->pc = 0x21364Cu;
            goto label_21364c;
        }
    }
    ctx->pc = 0x213590u;
label_213590:
    // 0x213590: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x213590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x213594: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x213594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x213598: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x213598u;
    {
        const bool branch_taken_0x213598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213598u;
        // 0x21359c: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213598) {
            ctx->pc = 0x213618u;
            goto label_213618;
        }
    }
    ctx->pc = 0x2135A0u;
    // 0x2135a0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2135A0u;
    {
        const bool branch_taken_0x2135a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2135a0) {
            ctx->pc = 0x213618u;
            goto label_213618;
        }
    }
    ctx->pc = 0x2135A8u;
    // 0x2135a8: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x2135a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x2135ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2135ACu;
    {
        const bool branch_taken_0x2135ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135ACu;
        // 0x2135b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135ac) {
            ctx->pc = 0x2135BCu;
            goto label_2135bc;
        }
    }
    ctx->pc = 0x2135B4u;
    // 0x2135b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2135B4u;
    {
        const bool branch_taken_0x2135b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135B4u;
        // 0x2135b8: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135b4) {
            ctx->pc = 0x213618u;
            goto label_213618;
        }
    }
    ctx->pc = 0x2135BCu;
label_2135bc:
    // 0x2135bc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2135BCu;
    SET_GPR_U32(ctx, 31, 0x2135C4u);
    ctx->pc = 0x2135C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135BCu;
    // 0x2135c0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2135BCu, 0x2135C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135C4u;
label_2135c4:
    // 0x2135c4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2135c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2135c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2135c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2135cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2135CCu;
    {
        const bool branch_taken_0x2135cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2135cc) {
            ctx->pc = 0x2135D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2135CCu;
            // 0x2135d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2135D4u;
            goto label_2135d4;
        }
    }
    ctx->pc = 0x2135D4u;
label_2135d4:
    // 0x2135d4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2135d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2135d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2135d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135dc: 0x2810  mfhi        $a1
    ctx->pc = 0x2135dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2135e0: 0x24a50078  addiu       $a1, $a1, 0x78
    ctx->pc = 0x2135e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x2135e4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2135E4u;
    SET_GPR_U32(ctx, 31, 0x2135ECu);
    ctx->pc = 0x2135E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135E4u;
    // 0x2135e8: 0xae2505f4  sw          $a1, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2135E4u, 0x2135ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135ECu;
label_2135ec:
    // 0x2135ec: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2135ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2135f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2135f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2135f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2135f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2135fc: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2135fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x213600: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213608: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21360c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21360cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213610: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x213610u;
    SET_GPR_U32(ctx, 31, 0x213618u);
    ctx->pc = 0x213614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213610u;
    // 0x213614: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x213610u, 0x213618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213618u;
label_213618:
    // 0x213618: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x213618u;
    SET_GPR_U32(ctx, 31, 0x213620u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x213618u, 0x213620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213620u;
label_213620:
    // 0x213620: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x213620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x213624: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x213624u;
    {
        const bool branch_taken_0x213624 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x213628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213624u;
        // 0x213628: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213624) {
            ctx->pc = 0x21364Cu;
            goto label_21364c;
        }
    }
    ctx->pc = 0x21362Cu;
    // 0x21362c: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x21362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x213630: 0x908305b5  lbu         $v1, 0x5B5($a0)
    ctx->pc = 0x213630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1461)));
    // 0x213634: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213634u;
    {
        const bool branch_taken_0x213634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213634) {
            ctx->pc = 0x21364Cu;
            goto label_21364c;
        }
    }
    ctx->pc = 0x21363Cu;
    // 0x21363c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x21363Cu;
    SET_GPR_U32(ctx, 31, 0x213644u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x21363Cu, 0x213644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213644u;
label_213644:
    // 0x213644: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213644u;
    {
        const bool branch_taken_0x213644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213644) {
            ctx->pc = 0x21365Cu;
            goto label_21365c;
        }
    }
    ctx->pc = 0x21364Cu;
label_21364c:
    // 0x21364c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x21364Cu;
    SET_GPR_U32(ctx, 31, 0x213654u);
    ctx->pc = 0x213650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21364Cu;
    // 0x213650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x21364Cu, 0x213654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213654u;
label_213654:
    // 0x213654: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x213654u;
    {
        const bool branch_taken_0x213654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213654u;
        // 0x213658: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213654) {
            ctx->pc = 0x2136E8u;
            goto label_2136e8;
        }
    }
    ctx->pc = 0x21365Cu;
label_21365c:
    // 0x21365c: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21365Cu;
    {
        const bool branch_taken_0x21365c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x21365c) {
            ctx->pc = 0x213660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21365Cu;
            // 0x213660: 0x8e2216ec  lw          $v0, 0x16EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213678u;
            goto label_213678;
        }
    }
    ctx->pc = 0x213664u;
    // 0x213664: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x213664u;
    SET_GPR_U32(ctx, 31, 0x21366Cu);
    ctx->pc = 0x213668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213664u;
    // 0x213668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x213664u, 0x21366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21366Cu;
label_21366c:
    // 0x21366c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x21366Cu;
    {
        const bool branch_taken_0x21366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21366Cu;
        // 0x213670: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21366c) {
            ctx->pc = 0x2136E8u;
            goto label_2136e8;
        }
    }
    ctx->pc = 0x213674u;
    // 0x213674: 0x8e2216ec  lw          $v0, 0x16EC($s1)
    ctx->pc = 0x213674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5868)));
label_213678:
    // 0x213678: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x213678u;
    {
        const bool branch_taken_0x213678 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x213678) {
            ctx->pc = 0x2136CCu;
            goto label_2136cc;
        }
    }
    ctx->pc = 0x213680u;
    // 0x213680: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x213680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213684: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x213684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x213688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21368c: 0x0  nop
    ctx->pc = 0x21368cu;
    // NOP
    // 0x213690: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213694: 0x0  nop
    ctx->pc = 0x213694u;
    // NOP
    // 0x213698: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x213698u;
    {
        const bool branch_taken_0x213698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213698u;
        // 0x21369c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213698) {
            ctx->pc = 0x2136B8u;
            goto label_2136b8;
        }
    }
    ctx->pc = 0x2136A0u;
    // 0x2136a0: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2136a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2136a4: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x2136a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x2136a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2136a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2136ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2136ACu;
    {
        const bool branch_taken_0x2136ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2136B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136ACu;
        // 0x2136b0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136ac) {
            ctx->pc = 0x2136B8u;
            goto label_2136b8;
        }
    }
    ctx->pc = 0x2136B4u;
    // 0x2136b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2136b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2136b8:
    // 0x2136b8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2136b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2136bc: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x2136bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2136c0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2136c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2136c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2136C4u;
    {
        const bool branch_taken_0x2136c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136C4u;
        // 0x2136c8: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136c4) {
            ctx->pc = 0x2136E4u;
            goto label_2136e4;
        }
    }
    ctx->pc = 0x2136CCu;
label_2136cc:
    // 0x2136cc: 0xc092eda  jal         func_24BB68
    ctx->pc = 0x2136CCu;
    SET_GPR_U32(ctx, 31, 0x2136D4u);
    ctx->pc = 0x2136D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136CCu;
    // 0x2136d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB68u, 0x2136CCu, 0x2136D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136D4u;
label_2136d4:
    // 0x2136d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2136D4u;
    {
        const bool branch_taken_0x2136d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2136D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136D4u;
        // 0x2136d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136d4) {
            ctx->pc = 0x2136E8u;
            goto label_2136e8;
        }
    }
    ctx->pc = 0x2136DCu;
    // 0x2136dc: 0xc092f68  jal         func_24BDA0
    ctx->pc = 0x2136DCu;
    SET_GPR_U32(ctx, 31, 0x2136E4u);
    ctx->pc = 0x2136E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136DCu;
    // 0x2136e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BDA0u, 0x2136DCu, 0x2136E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136E4u;
label_2136e4:
    // 0x2136e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2136e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2136e8:
    // 0x2136e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2136e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2136ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2136ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2136f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2136f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2136f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2136f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2136f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2136f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2136fc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2136fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x213700: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x213700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x213704: 0x3e00008  jr          $ra
    ctx->pc = 0x213704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213704u;
        // 0x213708: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21370Cu;
    // 0x21370c: 0x0  nop
    ctx->pc = 0x21370cu;
    // NOP
    ctx->pc = 0x213710u;
}
