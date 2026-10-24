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

// Function: func_002591F8
// Address: 0x2591f8 - 0x259548
void func_002591F8_0x2591f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002591F8_0x2591f8");
#endif

    switch (ctx->pc) {
        case 0x259244u: goto label_259244;
        case 0x259314u: goto label_259314;
        case 0x259340u: goto label_259340;
        case 0x259438u: goto label_259438;
        case 0x259440u: goto label_259440;
        case 0x259468u: goto label_259468;
        case 0x2594e8u: goto label_2594e8;
        case 0x2594f0u: goto label_2594f0;
        case 0x259500u: goto label_259500;
        case 0x259514u: goto label_259514;
        case 0x259520u: goto label_259520;
        default: break;
    }

    ctx->pc = 0x2591f8u;

    // 0x2591f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2591f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2591fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2591fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x259200: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x259200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x259204: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x259204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259208: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x259208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x25920c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x259210: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x259210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x259214: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x259214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x259218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25921c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x25921cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x259220: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x259220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x259224: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x259224u;
    {
        const bool branch_taken_0x259224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259224u;
        // 0x259228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259224) {
            ctx->pc = 0x25923Cu;
            goto label_25923c;
        }
    }
    ctx->pc = 0x25922Cu;
    // 0x25922c: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x25922Cu;
    {
        const bool branch_taken_0x25922c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x259230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25922Cu;
        // 0x259230: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25922c) {
            ctx->pc = 0x2594B8u;
            goto label_2594b8;
        }
    }
    ctx->pc = 0x259234u;
    // 0x259234: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x259234u;
    {
        const bool branch_taken_0x259234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259234u;
        // 0x259238: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259234) {
            ctx->pc = 0x259528u;
            goto label_259528;
        }
    }
    ctx->pc = 0x25923Cu;
label_25923c:
    // 0x25923c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25923Cu;
    SET_GPR_U32(ctx, 31, 0x259244u);
    ctx->pc = 0x259240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25923Cu;
    // 0x259240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25923Cu, 0x259244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259244u;
label_259244:
    // 0x259244: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x259244u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259248: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x259248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
    // 0x25924c: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25924Cu;
    {
        const bool branch_taken_0x25924c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x25924c) {
            ctx->pc = 0x259250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25924Cu;
            // 0x259250: 0x8e620564  lw          $v0, 0x564($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259260u;
            goto label_259260;
        }
    }
    ctx->pc = 0x259254u;
    // 0x259254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259258: 0xa662054a  sh          $v0, 0x54A($s3)
    ctx->pc = 0x259258u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x25925c: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x25925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
label_259260:
    // 0x259260: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x259260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x259264: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x259264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x259268: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x259268u;
    {
        const bool branch_taken_0x259268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259268u;
        // 0x25926c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259268) {
            ctx->pc = 0x259288u;
            goto label_259288;
        }
    }
    ctx->pc = 0x259270u;
    // 0x259270: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x259270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x259274: 0x24422c40  addiu       $v0, $v0, 0x2C40
    ctx->pc = 0x259274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11328));
    // 0x259278: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25927c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259280: 0x800008  jr          $a0
    ctx->pc = 0x259280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259288u: goto label_259288;
            case 0x25929Cu: goto label_25929c;
            case 0x2592B0u: goto label_2592b0;
            case 0x2592C4u: goto label_2592c4;
            case 0x2592D8u: goto label_2592d8;
            case 0x2592ECu: goto label_2592ec;
            case 0x259348u: goto label_259348;
            case 0x25935Cu: goto label_25935c;
            case 0x259370u: goto label_259370;
            case 0x259384u: goto label_259384;
            case 0x259398u: goto label_259398;
            case 0x2593ACu: goto label_2593ac;
            case 0x2593C0u: goto label_2593c0;
            case 0x2593D4u: goto label_2593d4;
            case 0x2593E8u: goto label_2593e8;
            case 0x2593FCu: goto label_2593fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259280u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259288u;
label_259288:
    // 0x259288: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x259288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25928c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x25928cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x259290: 0x8c430640  lw          $v1, 0x640($v0)
    ctx->pc = 0x259290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x259294: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x259294u;
    {
        const bool branch_taken_0x259294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259294u;
        // 0x259298: 0x8c440644  lw          $a0, 0x644($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259294) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x25929Cu;
label_25929c:
    // 0x25929c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2592a0: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2592a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2592a4: 0x8c431b98  lw          $v1, 0x1B98($v0)
    ctx->pc = 0x2592a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7064)));
    // 0x2592a8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2592A8u;
    {
        const bool branch_taken_0x2592a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592A8u;
        // 0x2592ac: 0x8c441b9c  lw          $a0, 0x1B9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592a8) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2592B0u;
label_2592b0:
    // 0x2592b0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2592b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2592b4: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2592b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2592b8: 0x8c4336b0  lw          $v1, 0x36B0($v0)
    ctx->pc = 0x2592b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14000)));
    // 0x2592bc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2592BCu;
    {
        const bool branch_taken_0x2592bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592BCu;
        // 0x2592c0: 0x8c4436b4  lw          $a0, 0x36B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592bc) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2592C4u;
label_2592c4:
    // 0x2592c4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2592c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2592c8: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2592c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2592cc: 0x8c432bc0  lw          $v1, 0x2BC0($v0)
    ctx->pc = 0x2592ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11200)));
    // 0x2592d0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2592D0u;
    {
        const bool branch_taken_0x2592d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592D0u;
        // 0x2592d4: 0x8c442bc4  lw          $a0, 0x2BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592d0) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2592D8u;
label_2592d8:
    // 0x2592d8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2592d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2592dc: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2592dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2592e0: 0x8c430b6c  lw          $v1, 0xB6C($v0)
    ctx->pc = 0x2592e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2924)));
    // 0x2592e4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2592E4u;
    {
        const bool branch_taken_0x2592e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592E4u;
        // 0x2592e8: 0x8c440b70  lw          $a0, 0xB70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592e4) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2592ECu;
label_2592ec:
    // 0x2592ec: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2592ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2592f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2592f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2592f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2592f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2592f8: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x2592f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x2592fc: 0x8c460b6c  lw          $a2, 0xB6C($v0)
    ctx->pc = 0x2592fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2924)));
    // 0x259300: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x259300u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259304: 0x8c450b70  lw          $a1, 0xB70($v0)
    ctx->pc = 0x259304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2928)));
    // 0x259308: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x259308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25930c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25930Cu;
    SET_GPR_U32(ctx, 31, 0x259314u);
    ctx->pc = 0x259310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25930Cu;
    // 0x259310: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25930Cu, 0x259314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259314u;
label_259314:
    // 0x259314: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x259314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x259318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25931c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x259320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x259320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259324: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x259328: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x259328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25932c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25932cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259330: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259334: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x259334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259338: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x259338u;
    SET_GPR_U32(ctx, 31, 0x259340u);
    ctx->pc = 0x25933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259338u;
    // 0x25933c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x259338u, 0x259340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259340u;
label_259340:
    // 0x259340: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x259340u;
    {
        const bool branch_taken_0x259340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259340) {
            ctx->pc = 0x259414u;
            goto label_259414;
        }
    }
    ctx->pc = 0x259348u;
label_259348:
    // 0x259348: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x259348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25934c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x25934cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x259350: 0x8c430b6c  lw          $v1, 0xB6C($v0)
    ctx->pc = 0x259350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2924)));
    // 0x259354: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x259354u;
    {
        const bool branch_taken_0x259354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259354u;
        // 0x259358: 0x8c440b70  lw          $a0, 0xB70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259354) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x25935Cu;
label_25935c:
    // 0x25935c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x259360: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x259360u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x259364: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x259364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x259368: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x259368u;
    {
        const bool branch_taken_0x259368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259368u;
        // 0x25936c: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259368) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x259370u;
label_259370:
    // 0x259370: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x259370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x259374: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x259374u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x259378: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x259378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x25937c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25937Cu;
    {
        const bool branch_taken_0x25937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25937Cu;
        // 0x259380: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25937c) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x259384u;
label_259384:
    // 0x259384: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x259384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x259388: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x259388u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x25938c: 0x8c4317f0  lw          $v1, 0x17F0($v0)
    ctx->pc = 0x25938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6128)));
    // 0x259390: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x259390u;
    {
        const bool branch_taken_0x259390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259390u;
        // 0x259394: 0x8c4417f4  lw          $a0, 0x17F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259390) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x259398u;
label_259398:
    // 0x259398: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x259398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x25939c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x25939cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2593a0: 0x8c433b14  lw          $v1, 0x3B14($v0)
    ctx->pc = 0x2593a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15124)));
    // 0x2593a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2593A4u;
    {
        const bool branch_taken_0x2593a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593A4u;
        // 0x2593a8: 0x8c443b18  lw          $a0, 0x3B18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593a4) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2593ACu;
label_2593ac:
    // 0x2593ac: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2593acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2593b0: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2593b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2593b4: 0x8c433474  lw          $v1, 0x3474($v0)
    ctx->pc = 0x2593b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13428)));
    // 0x2593b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2593B8u;
    {
        const bool branch_taken_0x2593b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593B8u;
        // 0x2593bc: 0x8c443478  lw          $a0, 0x3478($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593b8) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2593C0u;
label_2593c0:
    // 0x2593c0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2593c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2593c4: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2593c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2593c8: 0x8c430f24  lw          $v1, 0xF24($v0)
    ctx->pc = 0x2593c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3876)));
    // 0x2593cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2593CCu;
    {
        const bool branch_taken_0x2593cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593CCu;
        // 0x2593d0: 0x8c440f28  lw          $a0, 0xF28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593cc) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2593D4u;
label_2593d4:
    // 0x2593d4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2593d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2593d8: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2593d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2593dc: 0x8c430640  lw          $v1, 0x640($v0)
    ctx->pc = 0x2593dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x2593e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2593E0u;
    {
        const bool branch_taken_0x2593e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593E0u;
        // 0x2593e4: 0x8c440644  lw          $a0, 0x644($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593e0) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2593E8u;
label_2593e8:
    // 0x2593e8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2593e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2593ec: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2593ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2593f0: 0x8c432edc  lw          $v1, 0x2EDC($v0)
    ctx->pc = 0x2593f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11996)));
    // 0x2593f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2593F4u;
    {
        const bool branch_taken_0x2593f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593F4u;
        // 0x2593f8: 0x8c442ee0  lw          $a0, 0x2EE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593f4) {
            ctx->pc = 0x25940Cu;
            goto label_25940c;
        }
    }
    ctx->pc = 0x2593FCu;
label_2593fc:
    // 0x2593fc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x2593fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x259400: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x259400u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x259404: 0x8c4313d0  lw          $v1, 0x13D0($v0)
    ctx->pc = 0x259404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5072)));
    // 0x259408: 0x8c4413d4  lw          $a0, 0x13D4($v0)
    ctx->pc = 0x259408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5076)));
label_25940c:
    // 0x25940c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25940cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259410: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x259410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_259414:
    // 0x259414: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25941c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25941cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259420: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x259420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259424: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x259424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259428: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25942c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259430: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x259430u;
    SET_GPR_U32(ctx, 31, 0x259438u);
    ctx->pc = 0x259434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259430u;
    // 0x259434: 0x26b0ee00  addiu       $s0, $s5, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x259430u, 0x259438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259438u;
label_259438:
    // 0x259438: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x259438u;
    SET_GPR_U32(ctx, 31, 0x259440u);
    ctx->pc = 0x25943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259438u;
    // 0x25943c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x259438u, 0x259440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259440u;
label_259440:
    // 0x259440: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x259440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x259444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259448: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x259448u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25944c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259450: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x259450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25945c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25945cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259460: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x259460u;
    SET_GPR_U32(ctx, 31, 0x259468u);
    ctx->pc = 0x259464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259460u;
    // 0x259464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x259460u, 0x259468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259468u;
label_259468:
    // 0x259468: 0x8e620698  lw          $v0, 0x698($s3)
    ctx->pc = 0x259468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1688)));
    // 0x25946c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25946Cu;
    {
        const bool branch_taken_0x25946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25946Cu;
        // 0x259470: 0xae6005f0  sw          $zero, 0x5F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25946c) {
            ctx->pc = 0x2594ACu;
            goto label_2594ac;
        }
    }
    ctx->pc = 0x259474u;
    // 0x259474: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x259474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x259478: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x259478u;
    {
        const bool branch_taken_0x259478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259478u;
        // 0x25947c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259478) {
            ctx->pc = 0x2594ACu;
            goto label_2594ac;
        }
    }
    ctx->pc = 0x259480u;
    // 0x259480: 0x266305d0  addiu       $v1, $s3, 0x5D0
    ctx->pc = 0x259480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
    // 0x259484: 0xae6205f0  sw          $v0, 0x5F0($s3)
    ctx->pc = 0x259484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 2));
    // 0x259488: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x259488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x25948c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25948Cu;
    {
        const bool branch_taken_0x25948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25948c) {
            ctx->pc = 0x259490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25948Cu;
            // 0x259490: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2594B0u;
            goto label_2594b0;
        }
    }
    ctx->pc = 0x259494u;
    // 0x259494: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x259494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259498: 0xe66005d0  swc1        $f0, 0x5D0($s3)
    ctx->pc = 0x259498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1488), bits); }
    // 0x25949c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2594a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2594a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2594a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2594a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2594a8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2594a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2594ac:
    // 0x2594ac: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x2594acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_2594b0:
    // 0x2594b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2594b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2594b4: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x2594b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_2594b8:
    // 0x2594b8: 0x8e6205f0  lw          $v0, 0x5F0($s3)
    ctx->pc = 0x2594b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1520)));
    // 0x2594bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2594BCu;
    {
        const bool branch_taken_0x2594bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2594C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594BCu;
        // 0x2594c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594bc) {
            ctx->pc = 0x2594E8u;
            goto label_2594e8;
        }
    }
    ctx->pc = 0x2594C4u;
    // 0x2594c4: 0xc66c05a8  lwc1        $f12, 0x5A8($s3)
    ctx->pc = 0x2594c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2594c8: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2594c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2594cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2594ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2594d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2594d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2594d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2594d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2594d8: 0xae6205f0  sw          $v0, 0x5F0($s3)
    ctx->pc = 0x2594d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 2));
    // 0x2594dc: 0x266505d0  addiu       $a1, $s3, 0x5D0
    ctx->pc = 0x2594dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
    // 0x2594e0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2594E0u;
    SET_GPR_U32(ctx, 31, 0x2594E8u);
    ctx->pc = 0x2594E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594E0u;
    // 0x2594e4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2594E0u, 0x2594E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594E8u;
label_2594e8:
    // 0x2594e8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2594E8u;
    SET_GPR_U32(ctx, 31, 0x2594F0u);
    ctx->pc = 0x2594ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594E8u;
    // 0x2594ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2594E8u, 0x2594F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594F0u;
label_2594f0:
    // 0x2594f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2594F0u;
    {
        const bool branch_taken_0x2594f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2594f0) {
            ctx->pc = 0x259500u;
            goto label_259500;
        }
    }
    ctx->pc = 0x2594F8u;
    // 0x2594f8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2594F8u;
    SET_GPR_U32(ctx, 31, 0x259500u);
    ctx->pc = 0x2594FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594F8u;
    // 0x2594fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2594F8u, 0x259500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259500u;
label_259500:
    // 0x259500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259504: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x259504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x259508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x259508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25950c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25950Cu;
    SET_GPR_U32(ctx, 31, 0x259514u);
    ctx->pc = 0x259510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25950Cu;
    // 0x259510: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25950Cu, 0x259514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259514u;
label_259514:
    // 0x259514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x259514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259518: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x259518u;
    SET_GPR_U32(ctx, 31, 0x259520u);
    ctx->pc = 0x25951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259518u;
    // 0x25951c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x259518u, 0x259520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259520u;
label_259520:
    // 0x259520: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x259520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259524: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x259524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_259528:
    // 0x259528: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x259528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25952c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25952cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259530: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x259530u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259534: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x259534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25953c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x25953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259540: 0x3e00008  jr          $ra
    ctx->pc = 0x259540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259540u;
        // 0x259544: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259548u;
}
