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

// Function: func_0032F580
// Address: 0x32f580 - 0x32f938
void func_0032F580_0x32f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F580_0x32f580");
#endif

    switch (ctx->pc) {
        case 0x32f5b8u: goto label_32f5b8;
        case 0x32f60cu: goto label_32f60c;
        case 0x32f65cu: goto label_32f65c;
        case 0x32f708u: goto label_32f708;
        case 0x32f818u: goto label_32f818;
        case 0x32f8b8u: goto label_32f8b8;
        default: break;
    }

    ctx->pc = 0x32f580u;

    // 0x32f580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f584: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x32f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x32f588: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32f588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32f58c: 0x24543010  addiu       $s4, $v0, 0x3010
    ctx->pc = 0x32f58cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x32f590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32f594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f598: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32f59c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32f59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f5a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32f5ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x32f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x32f5b0: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x32F5B0u;
    SET_GPR_U32(ctx, 31, 0x32F5B8u);
    ctx->pc = 0x32F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5B0u;
    // 0x32f5b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x32F5B0u, 0x32F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5B8u;
label_32f5b8:
    // 0x32f5b8: 0x2a101800  slti        $s0, $s0, 0x1800
    ctx->pc = 0x32f5b8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6144) ? 1 : 0);
    // 0x32f5bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x32f5bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5c0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x32f5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5c4: 0x160000d3  bnez        $s0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x32F5C4u;
    {
        const bool branch_taken_0x32f5c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5C4u;
        // 0x32f5c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5c4) {
            ctx->pc = 0x32F914u;
            goto label_32f914;
        }
    }
    ctx->pc = 0x32F5CCu;
    // 0x32f5cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f5ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f5d0: 0x3c054149  lui         $a1, 0x4149
    ctx->pc = 0x32f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16713 << 16));
    // 0x32f5d4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x32f5d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f5d8: 0x34a55846  ori         $a1, $a1, 0x5846
    ctx->pc = 0x32f5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22598);
    // 0x32f5dc: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x32f5dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f5e0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f5e4: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x32f5e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f5e8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f5ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x32f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f5f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32f5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32f5f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f5f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f5fc: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32F5FCu;
    {
        const bool branch_taken_0x32f5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x32f5fc) {
            ctx->pc = 0x32F600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F5FCu;
            // 0x32f600: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F618u;
            goto label_32f618;
        }
    }
    ctx->pc = 0x32F604u;
    // 0x32f604: 0xc0cbe4e  jal         func_32F938
    ctx->pc = 0x32F604u;
    SET_GPR_U32(ctx, 31, 0x32F60Cu);
    ctx->pc = 0x32F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F604u;
    // 0x32f608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F938u, 0x32F604u, 0x32F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F60Cu;
label_32f60c:
    // 0x32f60c: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x32F60Cu;
    {
        const bool branch_taken_0x32f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F60Cu;
        // 0x32f610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f60c) {
            ctx->pc = 0x32F914u;
            goto label_32f914;
        }
    }
    ctx->pc = 0x32F614u;
    // 0x32f614: 0x0  nop
    ctx->pc = 0x32f614u;
    // NOP
label_32f618:
    // 0x32f618: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x32f618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f61c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x32f61cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f620: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x32f620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f624: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x32f624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f628: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f62c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x32f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x32f630: 0x92270003  lbu         $a3, 0x3($s1)
    ctx->pc = 0x32f630u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f634: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32f634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f638: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f63c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f640: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x32f640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x32f644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f648: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x32f648u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32f64c: 0x2082023  subu        $a0, $s0, $t0
    ctx->pc = 0x32f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x32f650: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x32f650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x32f654: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x32F654u;
    SET_GPR_U32(ctx, 31, 0x32F65Cu);
    ctx->pc = 0x32F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F654u;
    // 0x32f658: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x32F654u, 0x32F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F65Cu;
label_32f65c:
    // 0x32f65c: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x32F65Cu;
    {
        const bool branch_taken_0x32f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F65Cu;
        // 0x32f660: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f65c) {
            ctx->pc = 0x32F914u;
            goto label_32f914;
        }
    }
    ctx->pc = 0x32F664u;
    // 0x32f664: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32f668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32f66c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32f66cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f670: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x32f670u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32f674: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x32f674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32f678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32f67c: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x32f67cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x32f680: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f684: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f688: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x32f688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x32f68c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f690: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x32f690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f69c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f6a0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x32f6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x32f6a4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x32f6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f6a8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x32f6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f6ac: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x32f6acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f6b0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f6b4: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x32f6b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f6b8: 0x24d10008  addiu       $s1, $a2, 0x8
    ctx->pc = 0x32f6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x32f6bc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f6c0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x32f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f6c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32f6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f6c8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x32f6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32f6cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f6d0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x32f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x32f6d4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f6d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f6d8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f6dc: 0x24d10010  addiu       $s1, $a2, 0x10
    ctx->pc = 0x32f6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x32f6e0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f6e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f6e8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x32F6E8u;
    {
        const bool branch_taken_0x32f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6E8u;
        // 0x32f6ec: 0xae420210  sw          $v0, 0x210($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6e8) {
            ctx->pc = 0x32F7ECu;
            goto label_32f7ec;
        }
    }
    ctx->pc = 0x32F6F0u;
    // 0x32f6f0: 0x264f0004  addiu       $t7, $s2, 0x4
    ctx->pc = 0x32f6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x32f6f4: 0x264e0008  addiu       $t6, $s2, 0x8
    ctx->pc = 0x32f6f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x32f6f8: 0x264d000c  addiu       $t5, $s2, 0xC
    ctx->pc = 0x32f6f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x32f6fc: 0x264c0010  addiu       $t4, $s2, 0x10
    ctx->pc = 0x32f6fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f700: 0x240a0210  addiu       $t2, $zero, 0x210
    ctx->pc = 0x32f700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x32f704: 0x0  nop
    ctx->pc = 0x32f704u;
    // NOP
label_32f708:
    // 0x32f708: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f70c: 0x1ea3021  addu        $a2, $t7, $t2
    ctx->pc = 0x32f70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x32f710: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x32f710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f714: 0x1ca3821  addu        $a3, $t6, $t2
    ctx->pc = 0x32f714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x32f718: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x32f718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f71c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f720: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x32f720u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f724: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32f724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f728: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x32f728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f72c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f730: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32f730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f734: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x32f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32f738: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f73c: 0x1aa4021  addu        $t0, $t5, $t2
    ctx->pc = 0x32f73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x32f740: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32f740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32f744: 0x18a4821  addu        $t1, $t4, $t2
    ctx->pc = 0x32f744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x32f748: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x32f748u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x32f74c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x32f74cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x32f750: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f754: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x32f754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f758: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x32f758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f75c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f760: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x32f760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f764: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32f764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f768: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x32f768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f76c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f770: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32f770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f774: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x32f774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32f778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f77c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x32f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x32f780: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x32f780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f784: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x32f784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f788: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x32f788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f78c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f790: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x32f790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f794: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32f794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f798: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x32f798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f79c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f7a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32f7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f7a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x32f7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32f7a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f7ac: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x32f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x32f7b0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x32f7b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f7b4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x32f7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f7b8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f7bc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x32f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x32f7c0: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x32f7c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f7c4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f7c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f7cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f7d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32f7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32f7d4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32f7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32f7d8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x32f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x32f7dc: 0x8e420210  lw          $v0, 0x210($s2)
    ctx->pc = 0x32f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x32f7e0: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x32f7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32f7e4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x32F7E4u;
    {
        const bool branch_taken_0x32f7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7E4u;
        // 0x32f7e8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7e4) {
            ctx->pc = 0x32F708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f708;
        }
    }
    ctx->pc = 0x32F7ECu;
label_32f7ec:
    // 0x32f7ec: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x32f7ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f7f0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x32f7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x32f7f4: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32F7F4u;
    {
        const bool branch_taken_0x32f7f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7F4u;
        // 0x32f7f8: 0xae421894  sw          $v0, 0x1894($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7f4) {
            ctx->pc = 0x32F894u;
            goto label_32f894;
        }
    }
    ctx->pc = 0x32F7FCu;
    // 0x32f7fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x32f7fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f800: 0x264d0008  addiu       $t5, $s2, 0x8
    ctx->pc = 0x32f800u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x32f804: 0x264c000a  addiu       $t4, $s2, 0xA
    ctx->pc = 0x32f804u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x32f808: 0x264a000c  addiu       $t2, $s2, 0xC
    ctx->pc = 0x32f808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x32f80c: 0x2649000e  addiu       $t1, $s2, 0xE
    ctx->pc = 0x32f80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
    // 0x32f810: 0x24081890  addiu       $t0, $zero, 0x1890
    ctx->pc = 0x32f810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6288));
    // 0x32f814: 0x0  nop
    ctx->pc = 0x32f814u;
    // NOP
label_32f818:
    // 0x32f818: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f81c: 0x1a82021  addu        $a0, $t5, $t0
    ctx->pc = 0x32f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x32f820: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f824: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x32f824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x32f828: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f82c: 0x1882821  addu        $a1, $t4, $t0
    ctx->pc = 0x32f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x32f830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f834: 0x1483021  addu        $a2, $t2, $t0
    ctx->pc = 0x32f834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x32f838: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x32f838u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32f83c: 0x1283821  addu        $a3, $t1, $t0
    ctx->pc = 0x32f83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x32f840: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x32f840u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x32f844: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x32f844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x32f848: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f84c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f84cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f850: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x32f850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x32f854: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f858: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f85c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x32f85cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32f860: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f864: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f868: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x32f868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x32f86c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f874: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x32f874u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32f878: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f87c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32f87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f880: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x32f880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x32f884: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f888: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f88c: 0x1560ffe2  bnez        $t3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x32F88Cu;
    {
        const bool branch_taken_0x32f88c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F88Cu;
        // 0x32f890: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f88c) {
            ctx->pc = 0x32F818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f818;
        }
    }
    ctx->pc = 0x32F894u;
label_32f894:
    // 0x32f894: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x32f894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f898: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x32f898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x32f89c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32f89cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8a0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x32f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f8a4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32F8A4u;
    {
        const bool branch_taken_0x32f8a4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8A4u;
        // 0x32f8a8: 0xa243000c  sb          $v1, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f8a4) {
            ctx->pc = 0x32F910u;
            goto label_32f910;
        }
    }
    ctx->pc = 0x32F8ACu;
    // 0x32f8ac: 0x26490004  addiu       $t1, $s2, 0x4
    ctx->pc = 0x32f8acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x32f8b0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x32f8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32f8b4: 0x0  nop
    ctx->pc = 0x32f8b4u;
    // NOP
label_32f8b8:
    // 0x32f8b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x32f8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f8bc: 0x1283021  addu        $a2, $t1, $t0
    ctx->pc = 0x32f8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x32f8c0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x32f8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f8c4: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x32f8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x32f8c8: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x32f8c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32f8cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f8d0: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x32f8d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32f8d4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32f8d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f8d8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f8dc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x32f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f8e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32f8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f8e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x32f8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32f8e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f8ec: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x32f8ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x32f8f0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32f8f4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x32f8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x32f8f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x32f8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f8fc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x32f8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32f900: 0x8242000c  lb          $v0, 0xC($s2)
    ctx->pc = 0x32f900u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x32f904: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x32f904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32f908: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x32F908u;
    {
        const bool branch_taken_0x32f908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F908u;
        // 0x32f90c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f908) {
            ctx->pc = 0x32F8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f8b8;
        }
    }
    ctx->pc = 0x32F910u;
label_32f910:
    // 0x32f910: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x32f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_32f914:
    // 0x32f914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f91c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32f920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f924: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32f924u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f928: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32f928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F92Cu;
        // 0x32f930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F934u;
    // 0x32f934: 0x0  nop
    ctx->pc = 0x32f934u;
    // NOP
    ctx->pc = 0x32f938u;
}
