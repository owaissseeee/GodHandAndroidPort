#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_0079A0A0
// Address: 0x79a0a0 - 0x79a288
void func_0079A0A0_0x79a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A0A0_0x79a0a0");
#endif

    switch (ctx->pc) {
        case 0x79a0a0u: goto label_79a0a0;
        case 0x79a0a4u: goto label_79a0a4;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0acu: goto label_79a0ac;
        case 0x79a0b0u: goto label_79a0b0;
        case 0x79a0b4u: goto label_79a0b4;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0d8u: goto label_79a0d8;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e0u: goto label_79a0e0;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0f8u: goto label_79a0f8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a100u: goto label_79a100;
        case 0x79a104u: goto label_79a104;
        case 0x79a108u: goto label_79a108;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a110u: goto label_79a110;
        case 0x79a114u: goto label_79a114;
        case 0x79a118u: goto label_79a118;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a120u: goto label_79a120;
        case 0x79a124u: goto label_79a124;
        case 0x79a128u: goto label_79a128;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a130u: goto label_79a130;
        case 0x79a134u: goto label_79a134;
        case 0x79a138u: goto label_79a138;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a140u: goto label_79a140;
        case 0x79a144u: goto label_79a144;
        case 0x79a148u: goto label_79a148;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a150u: goto label_79a150;
        case 0x79a154u: goto label_79a154;
        case 0x79a158u: goto label_79a158;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a160u: goto label_79a160;
        case 0x79a164u: goto label_79a164;
        case 0x79a168u: goto label_79a168;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a170u: goto label_79a170;
        case 0x79a174u: goto label_79a174;
        case 0x79a178u: goto label_79a178;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a180u: goto label_79a180;
        case 0x79a184u: goto label_79a184;
        case 0x79a188u: goto label_79a188;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a190u: goto label_79a190;
        case 0x79a194u: goto label_79a194;
        case 0x79a198u: goto label_79a198;
        case 0x79a19cu: goto label_79a19c;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1bcu: goto label_79a1bc;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1d4u: goto label_79a1d4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a1fcu: goto label_79a1fc;
        case 0x79a200u: goto label_79a200;
        case 0x79a204u: goto label_79a204;
        case 0x79a208u: goto label_79a208;
        case 0x79a20cu: goto label_79a20c;
        case 0x79a210u: goto label_79a210;
        case 0x79a214u: goto label_79a214;
        case 0x79a218u: goto label_79a218;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a220u: goto label_79a220;
        case 0x79a224u: goto label_79a224;
        case 0x79a228u: goto label_79a228;
        case 0x79a22cu: goto label_79a22c;
        case 0x79a230u: goto label_79a230;
        case 0x79a234u: goto label_79a234;
        case 0x79a238u: goto label_79a238;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a240u: goto label_79a240;
        case 0x79a244u: goto label_79a244;
        case 0x79a248u: goto label_79a248;
        case 0x79a24cu: goto label_79a24c;
        case 0x79a250u: goto label_79a250;
        case 0x79a254u: goto label_79a254;
        case 0x79a258u: goto label_79a258;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a260u: goto label_79a260;
        case 0x79a264u: goto label_79a264;
        case 0x79a268u: goto label_79a268;
        case 0x79a26cu: goto label_79a26c;
        case 0x79a270u: goto label_79a270;
        case 0x79a274u: goto label_79a274;
        case 0x79a278u: goto label_79a278;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a280u: goto label_79a280;
        case 0x79a284u: goto label_79a284;
        default: break;
    }

    ctx->pc = 0x79a0a0u;

label_79a0a0:
    // 0x79a0a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_79a0a4:
    // 0x79a0a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x79a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_79a0a8:
    // 0x79a0a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x79a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_79a0ac:
    // 0x79a0ac: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_79a0b0:
    // 0x79a0b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x79a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_79a0b4:
    // 0x79a0b4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_79a0b8:
    // 0x79a0b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x79a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_79a0bc:
    // 0x79a0bc: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a0c0:
    // 0x79a0c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x79a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_79a0c4:
    // 0x79a0c4: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_79a0c8:
    // 0x79a0c8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x79a0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_79a0cc:
    // 0x79a0cc: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x79a0ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_79a0d0:
    // 0x79a0d0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x79a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_79a0d4:
    // 0x79a0d4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_79a0d8:
    // 0x79a0d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_79a0dc:
    // 0x79a0dc: 0x3c17005f  lui         $s7, 0x5F
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)95 << 16));
label_79a0e0:
    // 0x79a0e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a0e4:
    if (ctx->pc == 0x79A0E4u) {
        ctx->pc = 0x79A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0E0u;
        // 0x79a0e4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E8u;
        goto label_79a0e8;
    }
    ctx->pc = 0x79A0E0u;
    {
        const bool branch_taken_0x79a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0E0u;
        // 0x79a0e4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0e0) {
            ctx->pc = 0x79A0F8u;
            goto label_79a0f8;
        }
    }
    ctx->pc = 0x79A0E8u;
label_79a0e8:
    // 0x79a0e8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a0ec:
    // 0x79a0ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a0f0:
    // 0x79a0f0: 0xc0b56a8  jal         func_2D5AA0
label_79a0f4:
    if (ctx->pc == 0x79A0F4u) {
        ctx->pc = 0x79A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F0u;
        // 0x79a0f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0F8u;
        goto label_79a0f8;
    }
    ctx->pc = 0x79A0F0u;
    SET_GPR_U32(ctx, 31, 0x79A0F8u);
    ctx->pc = 0x79A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F0u;
    // 0x79a0f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0F0u, 0x79A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0F8u;
label_79a0f8:
    // 0x79a0f8: 0xc0b0f90  jal         func_2C3E40
label_79a0fc:
    if (ctx->pc == 0x79A0FCu) {
        ctx->pc = 0x79A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F8u;
        // 0x79a0fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A100u;
        goto label_79a100;
    }
    ctx->pc = 0x79A0F8u;
    SET_GPR_U32(ctx, 31, 0x79A100u);
    ctx->pc = 0x79A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F8u;
    // 0x79a0fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A0F8u, 0x79A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A100u;
label_79a100:
    // 0x79a100: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79a104:
    if (ctx->pc == 0x79A104u) {
        ctx->pc = 0x79A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A100u;
        // 0x79a104: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A108u;
        goto label_79a108;
    }
    ctx->pc = 0x79A100u;
    {
        const bool branch_taken_0x79a100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A100u;
        // 0x79a104: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a100) {
            ctx->pc = 0x79A0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0e8;
        }
    }
    ctx->pc = 0x79A108u;
label_79a108:
    // 0x79a108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a10c:
    // 0x79a10c: 0xc0b0e6c  jal         func_2C39B0
label_79a110:
    if (ctx->pc == 0x79A110u) {
        ctx->pc = 0x79A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A10Cu;
        // 0x79a110: 0x2691aa80  addiu       $s1, $s4, -0x5580 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A114u;
        goto label_79a114;
    }
    ctx->pc = 0x79A10Cu;
    SET_GPR_U32(ctx, 31, 0x79A114u);
    ctx->pc = 0x79A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A10Cu;
    // 0x79a110: 0x2691aa80  addiu       $s1, $s4, -0x5580 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A10Cu, 0x79A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A114u;
label_79a114:
    // 0x79a114: 0x8e10aac0  lw          $s0, -0x5540($s0)
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945472)));
label_79a118:
    // 0x79a118: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x79a118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_79a11c:
    // 0x79a11c: 0xc0c3ea6  jal         func_30FA98
label_79a120:
    if (ctx->pc == 0x79A120u) {
        ctx->pc = 0x79A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A11Cu;
        // 0x79a120: 0x240403bd  addiu       $a0, $zero, 0x3BD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 957));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A124u;
        goto label_79a124;
    }
    ctx->pc = 0x79A11Cu;
    SET_GPR_U32(ctx, 31, 0x79A124u);
    ctx->pc = 0x79A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A11Cu;
    // 0x79a120: 0x240403bd  addiu       $a0, $zero, 0x3BD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 957));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a128:
    // 0x79a128: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_79a12c:
    if (ctx->pc == 0x79A12Cu) {
        ctx->pc = 0x79A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A128u;
        // 0x79a12c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A130u;
        goto label_79a130;
    }
    ctx->pc = 0x79A128u;
    {
        const bool branch_taken_0x79a128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A128u;
        // 0x79a12c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a128) {
            ctx->pc = 0x79A17Cu;
            goto label_79a17c;
        }
    }
    ctx->pc = 0x79A130u;
label_79a130:
    // 0x79a130: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79a134:
    // 0x79a134: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a138:
    // 0x79a138: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a13c:
    // 0x79a13c: 0x40f809  jalr        $v0
label_79a140:
    if (ctx->pc == 0x79A140u) {
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A144u;
        goto label_79a144;
    }
    ctx->pc = 0x79A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A144u);
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A13Cu, 0x79A144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A144u;
label_79a144:
    // 0x79a144: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a148:
    // 0x79a148: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_79a14c:
    // 0x79a14c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_79a150:
    if (ctx->pc == 0x79A150u) {
        ctx->pc = 0x79A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A14Cu;
        // 0x79a150: 0xc680aa80  lwc1        $f0, -0x5580($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294945408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A154u;
        goto label_79a154;
    }
    ctx->pc = 0x79A14Cu;
    {
        const bool branch_taken_0x79a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A14Cu;
        // 0x79a150: 0xc680aa80  lwc1        $f0, -0x5580($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294945408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a14c) {
            ctx->pc = 0x79A168u;
            goto label_79a168;
        }
    }
    ctx->pc = 0x79A154u;
label_79a154:
    // 0x79a154: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79a158:
    // 0x79a158: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x79a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79a15c:
    // 0x79a15c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79a160:
    // 0x79a160: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x79a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a164:
    // 0x79a164: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a168:
    // 0x79a168: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a16c:
    // 0x79a16c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x79a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_79a170:
    // 0x79a170: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_79a174:
    // 0x79a174: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79a174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_79a178:
    // 0x79a178: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_79a17c:
    // 0x79a17c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_79a180:
    // 0x79a180: 0x26a5aa38  addiu       $a1, $s5, -0x55C8
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945336));
label_79a184:
    // 0x79a184: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x79a184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_79a188:
    // 0x79a188: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_79a18c:
    // 0x79a18c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x79a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_79a190:
    // 0x79a190: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_79a194:
    // 0x79a194: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x79a194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_79a198:
    // 0x79a198: 0xc0b0fb6  jal         func_2C3ED8
label_79a19c:
    if (ctx->pc == 0x79A19Cu) {
        ctx->pc = 0x79A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A198u;
        // 0x79a19c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1A0u;
        goto label_79a1a0;
    }
    ctx->pc = 0x79A198u;
    SET_GPR_U32(ctx, 31, 0x79A1A0u);
    ctx->pc = 0x79A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A198u;
    // 0x79a19c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A198u, 0x79A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A0u;
label_79a1a0:
    // 0x79a1a0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_79a1a4:
    // 0x79a1a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a1a8:
    // 0x79a1a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a1ac:
    // 0x79a1ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a1acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a1b0:
    // 0x79a1b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a1b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a1b4:
    // 0x79a1b4: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
label_79a1b8:
    // 0x79a1b8: 0xc0b2e28  jal         func_2CB8A0
label_79a1bc:
    if (ctx->pc == 0x79A1BCu) {
        ctx->pc = 0x79A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B8u;
        // 0x79a1bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1C0u;
        goto label_79a1c0;
    }
    ctx->pc = 0x79A1B8u;
    SET_GPR_U32(ctx, 31, 0x79A1C0u);
    ctx->pc = 0x79A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B8u;
    // 0x79a1bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A1B8u, 0x79A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C0u;
label_79a1c0:
    // 0x79a1c0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79a1c4:
    // 0x79a1c4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79a1c8:
    // 0x79a1c8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79a1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_79a1cc:
    // 0x79a1cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a1d0:
    // 0x79a1d0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a1d4:
    // 0x79a1d4: 0xc0a588c  jal         func_296230
label_79a1d8:
    if (ctx->pc == 0x79A1D8u) {
        ctx->pc = 0x79A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D4u;
        // 0x79a1d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1DCu;
        goto label_79a1dc;
    }
    ctx->pc = 0x79A1D4u;
    SET_GPR_U32(ctx, 31, 0x79A1DCu);
    ctx->pc = 0x79A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D4u;
    // 0x79a1d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79A1D4u, 0x79A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1DCu;
label_79a1dc:
    // 0x79a1dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a1e0:
    // 0x79a1e0: 0xc0a588c  jal         func_296230
label_79a1e4:
    if (ctx->pc == 0x79A1E4u) {
        ctx->pc = 0x79A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E0u;
        // 0x79a1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E8u;
        goto label_79a1e8;
    }
    ctx->pc = 0x79A1E0u;
    SET_GPR_U32(ctx, 31, 0x79A1E8u);
    ctx->pc = 0x79A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E0u;
    // 0x79a1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79A1E0u, 0x79A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E8u;
label_79a1e8:
    // 0x79a1e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a1ec:
    // 0x79a1ec: 0xc0a56f0  jal         func_295BC0
label_79a1f0:
    if (ctx->pc == 0x79A1F0u) {
        ctx->pc = 0x79A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ECu;
        // 0x79a1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1F4u;
        goto label_79a1f4;
    }
    ctx->pc = 0x79A1ECu;
    SET_GPR_U32(ctx, 31, 0x79A1F4u);
    ctx->pc = 0x79A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1ECu;
    // 0x79a1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A1ECu, 0x79A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F4u;
label_79a1f4:
    // 0x79a1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a1f8:
    // 0x79a1f8: 0xc0a56f0  jal         func_295BC0
label_79a1fc:
    if (ctx->pc == 0x79A1FCu) {
        ctx->pc = 0x79A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F8u;
        // 0x79a1fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A200u;
        goto label_79a200;
    }
    ctx->pc = 0x79A1F8u;
    SET_GPR_U32(ctx, 31, 0x79A200u);
    ctx->pc = 0x79A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F8u;
    // 0x79a1fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A1F8u, 0x79A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A200u;
label_79a200:
    // 0x79a200: 0xc0a573a  jal         func_295CE8
label_79a204:
    if (ctx->pc == 0x79A204u) {
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A208u;
        goto label_79a208;
    }
    ctx->pc = 0x79A200u;
    SET_GPR_U32(ctx, 31, 0x79A208u);
    ctx->pc = 0x79A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A200u;
    // 0x79a204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A200u, 0x79A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A208u;
label_79a208:
    // 0x79a208: 0xc0a573a  jal         func_295CE8
label_79a20c:
    if (ctx->pc == 0x79A20Cu) {
        ctx->pc = 0x79A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A208u;
        // 0x79a20c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A210u;
        goto label_79a210;
    }
    ctx->pc = 0x79A208u;
    SET_GPR_U32(ctx, 31, 0x79A210u);
    ctx->pc = 0x79A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A208u;
    // 0x79a20c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A208u, 0x79A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A210u;
label_79a210:
    // 0x79a210: 0xc0b101e  jal         func_2C4078
label_79a214:
    if (ctx->pc == 0x79A214u) {
        ctx->pc = 0x79A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A210u;
        // 0x79a214: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A218u;
        goto label_79a218;
    }
    ctx->pc = 0x79A210u;
    SET_GPR_U32(ctx, 31, 0x79A218u);
    ctx->pc = 0x79A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A210u;
    // 0x79a214: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A210u, 0x79A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A218u;
label_79a218:
    // 0x79a218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a21c:
    // 0x79a21c: 0xc0a588c  jal         func_296230
label_79a220:
    if (ctx->pc == 0x79A220u) {
        ctx->pc = 0x79A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A21Cu;
        // 0x79a220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A224u;
        goto label_79a224;
    }
    ctx->pc = 0x79A21Cu;
    SET_GPR_U32(ctx, 31, 0x79A224u);
    ctx->pc = 0x79A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A21Cu;
    // 0x79a220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79A21Cu, 0x79A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A224u;
label_79a224:
    // 0x79a224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a228:
    // 0x79a228: 0xc0a588c  jal         func_296230
label_79a22c:
    if (ctx->pc == 0x79A22Cu) {
        ctx->pc = 0x79A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A228u;
        // 0x79a22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A230u;
        goto label_79a230;
    }
    ctx->pc = 0x79A228u;
    SET_GPR_U32(ctx, 31, 0x79A230u);
    ctx->pc = 0x79A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A228u;
    // 0x79a22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79A228u, 0x79A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A230u;
label_79a230:
    // 0x79a230: 0xc0b0f04  jal         func_2C3C10
label_79a234:
    if (ctx->pc == 0x79A234u) {
        ctx->pc = 0x79A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A230u;
        // 0x79a234: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A238u;
        goto label_79a238;
    }
    ctx->pc = 0x79A230u;
    SET_GPR_U32(ctx, 31, 0x79A238u);
    ctx->pc = 0x79A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A230u;
    // 0x79a234: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A230u, 0x79A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A238u;
label_79a238:
    // 0x79a238: 0x8ee48658  lw          $a0, -0x79A8($s7)
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936152)));
label_79a23c:
    // 0x79a23c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_79a240:
    // 0x79a240: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79a244:
    // 0x79a244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a248:
    // 0x79a248: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_79a24c:
    // 0x79a24c: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a250:
    // 0x79a250: 0xc0b5692  jal         func_2D5A48
label_79a254:
    if (ctx->pc == 0x79A254u) {
        ctx->pc = 0x79A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A250u;
        // 0x79a254: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A258u;
        goto label_79a258;
    }
    ctx->pc = 0x79A250u;
    SET_GPR_U32(ctx, 31, 0x79A258u);
    ctx->pc = 0x79A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A250u;
    // 0x79a254: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A250u, 0x79A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A258u;
label_79a258:
    // 0x79a258: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x79a258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79a25c:
    // 0x79a25c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79a25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a260:
    // 0x79a260: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x79a260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a264:
    // 0x79a264: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x79a264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a268:
    // 0x79a268: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x79a268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a26c:
    // 0x79a26c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x79a26cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a270:
    // 0x79a270: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x79a270u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a274:
    // 0x79a274: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x79a274u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a278:
    // 0x79a278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a27c:
    // 0x79a27c: 0x3e00008  jr          $ra
label_79a280:
    if (ctx->pc == 0x79A280u) {
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A284u;
        goto label_79a284;
    }
    ctx->pc = 0x79A27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A284u;
label_79a284:
    // 0x79a284: 0x0  nop
    ctx->pc = 0x79a284u;
    // NOP
    ctx->pc = 0x79a288u;
}
} // namespace gh_r200
