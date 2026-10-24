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

// Function: func_001120A8
// Address: 0x1120a8 - 0x112318
void func_001120A8_0x1120a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001120A8_0x1120a8");
#endif

    switch (ctx->pc) {
        case 0x1120ecu: goto label_1120ec;
        case 0x1120f4u: goto label_1120f4;
        case 0x112100u: goto label_112100;
        case 0x112130u: goto label_112130;
        case 0x112148u: goto label_112148;
        case 0x112158u: goto label_112158;
        case 0x112160u: goto label_112160;
        case 0x11218cu: goto label_11218c;
        case 0x1121a0u: goto label_1121a0;
        case 0x1121bcu: goto label_1121bc;
        case 0x1121c4u: goto label_1121c4;
        case 0x1121d4u: goto label_1121d4;
        case 0x1121e4u: goto label_1121e4;
        case 0x112208u: goto label_112208;
        case 0x112214u: goto label_112214;
        case 0x112240u: goto label_112240;
        case 0x112264u: goto label_112264;
        case 0x112284u: goto label_112284;
        case 0x1122b4u: goto label_1122b4;
        case 0x1122c4u: goto label_1122c4;
        case 0x1122d4u: goto label_1122d4;
        default: break;
    }

    ctx->pc = 0x1120a8u;

    // 0x1120a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1120a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1120ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1120acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1120b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1120b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1120b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1120b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1120b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1120b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1120bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1120bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120c0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1120c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1120c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1120c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1120c8: 0x245264f0  addiu       $s2, $v0, 0x64F0
    ctx->pc = 0x1120c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x1120cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1120ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1120d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1120d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1120d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1120d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1120d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1120dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1120e0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1120e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1120e4: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1120E4u;
    SET_GPR_U32(ctx, 31, 0x1120ECu);
    ctx->pc = 0x1120E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120E4u;
    // 0x1120e8: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1120E4u, 0x1120ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1120ECu;
label_1120ec:
    // 0x1120ec: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1120ECu;
    SET_GPR_U32(ctx, 31, 0x1120F4u);
    ctx->pc = 0x1120F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120ECu;
    // 0x1120f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1120ECu, 0x1120F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1120F4u;
label_1120f4:
    // 0x1120f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1120f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120f8: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x1120F8u;
    SET_GPR_U32(ctx, 31, 0x112100u);
    ctx->pc = 0x1120FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120F8u;
    // 0x1120fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x1120F8u, 0x112100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112100u;
label_112100:
    // 0x112100: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x112100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x112104: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x112104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x112108: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x112108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x11210c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11210Cu;
    {
        const bool branch_taken_0x11210c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11210Cu;
        // 0x112110: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11210c) {
            ctx->pc = 0x112128u;
            goto label_112128;
        }
    }
    ctx->pc = 0x112114u;
    // 0x112114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112118: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x112118u;
    {
        const bool branch_taken_0x112118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112118) {
            ctx->pc = 0x1121B4u;
            goto label_1121b4;
        }
    }
    ctx->pc = 0x112120u;
    // 0x112120: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x112120u;
    {
        const bool branch_taken_0x112120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112120u;
        // 0x112124: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112120) {
            ctx->pc = 0x112218u;
            goto label_112218;
        }
    }
    ctx->pc = 0x112128u;
label_112128:
    // 0x112128: 0xc049396  jal         func_124E58
    ctx->pc = 0x112128u;
    SET_GPR_U32(ctx, 31, 0x112130u);
    ctx->pc = 0x11212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112128u;
    // 0x11212c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x112128u, 0x112130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112130u;
label_112130:
    // 0x112130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112134: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x112134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x112138: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x112138u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x11213c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112140: 0xc04a55e  jal         func_129578
    ctx->pc = 0x112140u;
    SET_GPR_U32(ctx, 31, 0x112148u);
    ctx->pc = 0x112144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112140u;
    // 0x112144: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x112140u, 0x112148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112148u;
label_112148:
    // 0x112148: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x112148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x11214c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x11214cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x112150: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x112150u;
    SET_GPR_U32(ctx, 31, 0x112158u);
    ctx->pc = 0x112154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112150u;
    // 0x112154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x112150u, 0x112158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112158u;
label_112158:
    // 0x112158: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x112158u;
    SET_GPR_U32(ctx, 31, 0x112160u);
    ctx->pc = 0x11215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112158u;
    // 0x11215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x112158u, 0x112160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112160u;
label_112160:
    // 0x112160: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x112160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x112164: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x112168: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11216c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11216cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112170: 0x8c450870  lw          $a1, 0x870($v0)
    ctx->pc = 0x112170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2160)));
    // 0x112174: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112178: 0x8c460874  lw          $a2, 0x874($v0)
    ctx->pc = 0x112178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2164)));
    // 0x11217c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112180: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x112180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x112184: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x112184u;
    SET_GPR_U32(ctx, 31, 0x11218Cu);
    ctx->pc = 0x112188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112184u;
    // 0x112188: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112184u, 0x11218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11218Cu;
label_11218c:
    // 0x11218c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x112190: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x112194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112198: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x112198u;
    SET_GPR_U32(ctx, 31, 0x1121A0u);
    ctx->pc = 0x11219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112198u;
    // 0x11219c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x112198u, 0x1121A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121A0u;
label_1121a0:
    // 0x1121a0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1121a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1121a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1121a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1121a8: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x1121a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x1121ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1121acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1121b0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1121b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1121b4:
    // 0x1121b4: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1121B4u;
    SET_GPR_U32(ctx, 31, 0x1121BCu);
    ctx->pc = 0x1121B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121B4u;
    // 0x1121b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1121B4u, 0x1121BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121BCu;
label_1121bc:
    // 0x1121bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1121BCu;
    SET_GPR_U32(ctx, 31, 0x1121C4u);
    ctx->pc = 0x1121C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121BCu;
    // 0x1121c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1121BCu, 0x1121C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121C4u;
label_1121c4:
    // 0x1121c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1121C4u;
    {
        const bool branch_taken_0x1121c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121c4) {
            ctx->pc = 0x1121F4u;
            goto label_1121f4;
        }
    }
    ctx->pc = 0x1121CCu;
    // 0x1121cc: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1121CCu;
    SET_GPR_U32(ctx, 31, 0x1121D4u);
    ctx->pc = 0x1121D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121CCu;
    // 0x1121d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1121CCu, 0x1121D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121D4u;
label_1121d4:
    // 0x1121d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1121d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1121d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1121dc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1121DCu;
    SET_GPR_U32(ctx, 31, 0x1121E4u);
    ctx->pc = 0x1121E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121DCu;
    // 0x1121e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1121DCu, 0x1121E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121E4u;
label_1121e4:
    // 0x1121e4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1121e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1121e8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1121e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1121ec: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1121ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1121f0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1121f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1121f4:
    // 0x1121f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1121f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1121f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1121f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1121fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1121fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112200: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x112200u;
    SET_GPR_U32(ctx, 31, 0x112208u);
    ctx->pc = 0x112204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112200u;
    // 0x112204: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x112200u, 0x112208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112208u;
label_112208:
    // 0x112208: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x112208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11220c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11220Cu;
    SET_GPR_U32(ctx, 31, 0x112214u);
    ctx->pc = 0x112210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11220Cu;
    // 0x112210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11220Cu, 0x112214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112214u;
label_112214:
    // 0x112214: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x112214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_112218:
    // 0x112218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x112218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11221c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11221Cu;
    {
        const bool branch_taken_0x11221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11221c) {
            ctx->pc = 0x112220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11221Cu;
            // 0x112220: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112244u;
            goto label_112244;
        }
    }
    ctx->pc = 0x112224u;
    // 0x112224: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x112224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x112228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112228u;
    {
        const bool branch_taken_0x112228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112228u;
        // 0x11222c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112228) {
            ctx->pc = 0x112240u;
            goto label_112240;
        }
    }
    ctx->pc = 0x112230u;
    // 0x112230: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x112230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x112234: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x112234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x112238: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x112238u;
    SET_GPR_U32(ctx, 31, 0x112240u);
    ctx->pc = 0x11223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112238u;
    // 0x11223c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x112238u, 0x112240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112240u;
label_112240:
    // 0x112240: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x112240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_112244:
    // 0x112244: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x112244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x112248: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x112248u;
    {
        const bool branch_taken_0x112248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112248) {
            ctx->pc = 0x11224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112248u;
            // 0x11224c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112268u;
            goto label_112268;
        }
    }
    ctx->pc = 0x112250u;
    // 0x112250: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x112254: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112258: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x112258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11225c: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x11225Cu;
    SET_GPR_U32(ctx, 31, 0x112264u);
    ctx->pc = 0x112260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11225Cu;
    // 0x112260: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x11225Cu, 0x112264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112264u;
label_112264:
    // 0x112264: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x112264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_112268:
    // 0x112268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x112268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11226c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11226Cu;
    {
        const bool branch_taken_0x11226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11226Cu;
        // 0x112270: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11226c) {
            ctx->pc = 0x1122A8u;
            goto label_1122a8;
        }
    }
    ctx->pc = 0x112274u;
    // 0x112274: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x112274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x112278: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x112278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11227c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x11227Cu;
    SET_GPR_U32(ctx, 31, 0x112284u);
    ctx->pc = 0x112280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11227Cu;
    // 0x112280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x11227Cu, 0x112284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112284u;
label_112284:
    // 0x112284: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x112284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x112288: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x112288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x11228c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x112290: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x112290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x112294: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x112294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x112298: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x112298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11229c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x11229cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1122a0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1122a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1122a4: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x1122a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_1122a8:
    // 0x1122a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1122a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122ac: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1122ACu;
    SET_GPR_U32(ctx, 31, 0x1122B4u);
    ctx->pc = 0x1122B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122ACu;
    // 0x1122b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1122ACu, 0x1122B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122B4u;
label_1122b4:
    // 0x1122b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1122B4u;
    {
        const bool branch_taken_0x1122b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122b4) {
            ctx->pc = 0x1122B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1122B4u;
            // 0x1122b8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1122DCu;
            goto label_1122dc;
        }
    }
    ctx->pc = 0x1122BCu;
    // 0x1122bc: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1122BCu;
    SET_GPR_U32(ctx, 31, 0x1122C4u);
    ctx->pc = 0x1122C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122BCu;
    // 0x1122c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1122BCu, 0x1122C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122C4u;
label_1122c4:
    // 0x1122c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1122c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1122c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1122cc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1122CCu;
    SET_GPR_U32(ctx, 31, 0x1122D4u);
    ctx->pc = 0x1122D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122CCu;
    // 0x1122d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1122CCu, 0x1122D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122D4u;
label_1122d4:
    // 0x1122d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1122D4u;
    {
        const bool branch_taken_0x1122d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122D4u;
        // 0x1122d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122d4) {
            ctx->pc = 0x1122F8u;
            goto label_1122f8;
        }
    }
    ctx->pc = 0x1122DCu;
label_1122dc:
    // 0x1122dc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1122dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1122e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1122e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1122e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1122e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1122e8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1122e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1122ec: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1122ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1122f0: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x1122f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x1122f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1122f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1122f8:
    // 0x1122f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1122f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1122fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1122fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112300: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x112300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112308: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x112308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11230c: 0x3e00008  jr          $ra
    ctx->pc = 0x11230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11230Cu;
        // 0x112310: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112314u;
    // 0x112314: 0x0  nop
    ctx->pc = 0x112314u;
    // NOP
    ctx->pc = 0x112318u;
}
