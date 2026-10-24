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

// Function: sceGsSetDefDBuffDc
// Address: 0x396158 - 0x396440
void sceGsSetDefDBuffDc_0x396158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefDBuffDc_0x396158");
#endif

    switch (ctx->pc) {
        case 0x3961b4u: goto label_3961b4;
        case 0x3961dcu: goto label_3961dc;
        case 0x3961f8u: goto label_3961f8;
        case 0x396214u: goto label_396214;
        case 0x396230u: goto label_396230;
        case 0x39624cu: goto label_39624c;
        case 0x396268u: goto label_396268;
        case 0x3962b0u: goto label_3962b0;
        case 0x3962e0u: goto label_3962e0;
        case 0x396388u: goto label_396388;
        default: break;
    }

    ctx->pc = 0x396158u;

    // 0x396158: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x396158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x39615c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x39615cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x396160: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x396160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x396164: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x396164u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x396168: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x396168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x39616c: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x39616cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x396170: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x396170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x396174: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x396174u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x396178: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x396178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x39617c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x39617cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x396180: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x396180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x396184: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x396184u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
    // 0x396188: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x396188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x39618c: 0x5ac03  sra         $s5, $a1, 16
    ctx->pc = 0x39618cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 16));
    // 0x396190: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x396190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x396194: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x396194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396198: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x396198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x39619c: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x39619cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
    // 0x3961a0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x3961a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x3961a4: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x3961a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3961a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3961a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3961ac: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x3961ACu;
    SET_GPR_U32(ctx, 31, 0x3961B4u);
    ctx->pc = 0x3961B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3961ACu;
    // 0x3961b0: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x3961ACu, 0x3961B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961B4u;
label_3961b4:
    // 0x3961b4: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x3961b4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3961b8: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x3961b8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
    // 0x3961bc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3961bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x3961c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3961c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3961c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3961c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3961ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3961d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961d4: 0xc0e595c  jal         func_396570
    ctx->pc = 0x3961D4u;
    SET_GPR_U32(ctx, 31, 0x3961DCu);
    ctx->pc = 0x3961D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3961D4u;
    // 0x3961d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396570u, 0x3961D4u, 0x3961DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961DCu;
label_3961dc:
    // 0x3961dc: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x3961dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x3961e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3961e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3961e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961e8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3961e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3961ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3961f0: 0xc0e595c  jal         func_396570
    ctx->pc = 0x3961F0u;
    SET_GPR_U32(ctx, 31, 0x3961F8u);
    ctx->pc = 0x3961F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3961F0u;
    // 0x3961f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396570u, 0x3961F0u, 0x3961F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961F8u;
label_3961f8:
    // 0x3961f8: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3961f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x3961fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3961fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396200: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x396200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396204: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x396204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396208: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x396208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39620c: 0xc0e5a9c  jal         func_396A70
    ctx->pc = 0x39620Cu;
    SET_GPR_U32(ctx, 31, 0x396214u);
    ctx->pc = 0x396210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39620Cu;
    // 0x396210: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396A70u, 0x39620Cu, 0x396214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396214u;
label_396214:
    // 0x396214: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x396214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x396218: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x396218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39621c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x39621cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396220: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x396220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396224: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x396224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396228: 0xc0e5b92  jal         func_396E48
    ctx->pc = 0x396228u;
    SET_GPR_U32(ctx, 31, 0x396230u);
    ctx->pc = 0x39622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396228u;
    // 0x39622c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E48u, 0x396228u, 0x396230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396230u;
label_396230:
    // 0x396230: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x396230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x396234: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x396234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396238: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x396238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39623c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x39623cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396240: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x396240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396244: 0xc0e5a9c  jal         func_396A70
    ctx->pc = 0x396244u;
    SET_GPR_U32(ctx, 31, 0x39624Cu);
    ctx->pc = 0x396248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396244u;
    // 0x396248: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396A70u, 0x396244u, 0x39624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39624Cu;
label_39624c:
    // 0x39624c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x39624cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396250: 0x26440250  addiu       $a0, $s2, 0x250
    ctx->pc = 0x396250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x396254: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x396254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396258: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x396258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39625c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x39625cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396260: 0xc0e5b92  jal         func_396E48
    ctx->pc = 0x396260u;
    SET_GPR_U32(ctx, 31, 0x396268u);
    ctx->pc = 0x396264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396260u;
    // 0x396264: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E48u, 0x396260u, 0x396268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396268u;
label_396268:
    // 0x396268: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
    ctx->pc = 0x396268u;
    {
        const bool branch_taken_0x396268 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x39626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396268u;
        // 0x39626c: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396268) {
            ctx->pc = 0x3962E0u;
            goto label_3962e0;
        }
    }
    ctx->pc = 0x396270u;
    // 0x396270: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x396270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x396274: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x396274u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
    // 0x396278: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x396278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x39627c: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x39627cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x396280: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x396280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x396284: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x396284u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x396288: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x396288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x39628c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39628cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x396290: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x396290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396294: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x396294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396298: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x396298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39629c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x39629cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962a0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3962a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3962a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962a8: 0xc0e5b16  jal         func_396C58
    ctx->pc = 0x3962A8u;
    SET_GPR_U32(ctx, 31, 0x3962B0u);
    ctx->pc = 0x3962ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962A8u;
    // 0x3962ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396C58u, 0x3962A8u, 0x3962B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962B0u;
label_3962b0:
    // 0x3962b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3962b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3962b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3962b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3962bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3962c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3962c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3962c4: 0x264402d0  addiu       $a0, $s2, 0x2D0
    ctx->pc = 0x3962c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
    // 0x3962c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3962c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3962cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3962ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962d0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3962d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3962d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3962d8: 0xc0e5b16  jal         func_396C58
    ctx->pc = 0x3962D8u;
    SET_GPR_U32(ctx, 31, 0x3962E0u);
    ctx->pc = 0x3962DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962D8u;
    // 0x3962dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396C58u, 0x3962D8u, 0x3962E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962E0u;
label_3962e0:
    // 0x3962e0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x3962e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3962e4: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x3962e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3962e8: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x3962e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x3962ec: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x3962ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3962f0: 0x7e4201c0  sq          $v0, 0x1C0($s2)
    ctx->pc = 0x3962f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 448), GPR_VEC(ctx, 2));
    // 0x3962f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3962f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3962f8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x3962f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x3962fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3962fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x396300: 0xde4501c0  ld          $a1, 0x1C0($s2)
    ctx->pc = 0x396300u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x396304: 0xf7100b  movn        $v0, $a3, $s7
    ctx->pc = 0x396304u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x396308: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x396308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x39630c: 0xf7180b  movn        $v1, $a3, $s7
    ctx->pc = 0x39630cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x396310: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x396310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x396314: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x396314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x396318: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x396318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39631c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x39631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x396320: 0xde460058  ld          $a2, 0x58($s2)
    ctx->pc = 0x396320u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x396324: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x396324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x396328: 0xde4701c8  ld          $a3, 0x1C8($s2)
    ctx->pc = 0x396328u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x39632c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x39632cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x396330: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x396330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x396334: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x396334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x396338: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x396338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x39633c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x39633cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x396340: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x396340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x396344: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x396344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x396348: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x396348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x39634c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x39634cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x396350: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x396350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x396354: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x396354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x396358: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x396358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39635c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39635cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x396360: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x396360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x396364: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x396364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x396368: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x396368u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x39636c: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x39636cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
    // 0x396370: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x396370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396374: 0xfe4501c0  sd          $a1, 0x1C0($s2)
    ctx->pc = 0x396374u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 448), GPR_U64(ctx, 5));
    // 0x396378: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x396378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39637c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39637cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396380: 0xc0e5a6a  jal         func_3969A8
    ctx->pc = 0x396380u;
    SET_GPR_U32(ctx, 31, 0x396388u);
    ctx->pc = 0x396384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396380u;
    // 0x396384: 0xfe4701c8  sd          $a3, 0x1C8($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 456), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3969A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3969A8u, 0x396380u, 0x396388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396388u;
label_396388:
    // 0x396388: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x396388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39638c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39638cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396390: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x396390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396394: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x396394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x396398: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x396398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x39639c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x39639cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3963a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3963a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3963a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3963a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3963a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3963a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3963ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3963acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3963b0: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3963B0u;
    {
        const bool branch_taken_0x3963b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3963B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963B0u;
        // 0x3963b4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3963b0) {
            ctx->pc = 0x3963C4u;
            goto label_3963c4;
        }
    }
    ctx->pc = 0x3963B8u;
    // 0x3963b8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3963b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3963bc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3963BCu;
    {
        const bool branch_taken_0x3963bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3963C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963BCu;
        // 0x3963c0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3963bc) {
            ctx->pc = 0x396410u;
            goto label_396410;
        }
    }
    ctx->pc = 0x3963C4u;
label_3963c4:
    // 0x3963c4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3963c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x3963c8: 0xde460038  ld          $a2, 0x38($s2)
    ctx->pc = 0x3963c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3963cc: 0xde470060  ld          $a3, 0x60($s2)
    ctx->pc = 0x3963ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x3963d0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x3963d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3963d4: 0xde4400e0  ld          $a0, 0xE0($s2)
    ctx->pc = 0x3963d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x3963d8: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x3963d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x3963dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3963dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3963e0: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x3963e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x3963e4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3963e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3963e8: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x3963e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x3963ec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x3963ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3963f0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x3963f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3963f4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3963f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3963f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3963f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3963fc: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x3963fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x396400: 0xfe4400e0  sd          $a0, 0xE0($s2)
    ctx->pc = 0x396400u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 4));
    // 0x396404: 0xfe460038  sd          $a2, 0x38($s2)
    ctx->pc = 0x396404u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 6));
    // 0x396408: 0xfe470060  sd          $a3, 0x60($s2)
    ctx->pc = 0x396408u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 7));
    // 0x39640c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x39640cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_396410:
    // 0x396410: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x396410u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x396414: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x396414u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x396418: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x396418u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39641c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x39641cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x396420: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x396420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x396424: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x396424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x396428: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x396428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39642c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x39642cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x396430: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x396430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396434: 0x3e00008  jr          $ra
    ctx->pc = 0x396434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396434u;
        // 0x396438: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39643Cu;
    // 0x39643c: 0x0  nop
    ctx->pc = 0x39643cu;
    // NOP
    ctx->pc = 0x396440u;
}
