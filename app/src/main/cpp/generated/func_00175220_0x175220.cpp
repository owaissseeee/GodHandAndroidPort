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

// Function: func_00175220
// Address: 0x175220 - 0x175450
void func_00175220_0x175220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175220_0x175220");
#endif

    switch (ctx->pc) {
        case 0x17524cu: goto label_17524c;
        case 0x175258u: goto label_175258;
        case 0x175274u: goto label_175274;
        case 0x175294u: goto label_175294;
        case 0x1752acu: goto label_1752ac;
        case 0x1752f0u: goto label_1752f0;
        case 0x1753a0u: goto label_1753a0;
        case 0x175408u: goto label_175408;
        case 0x175418u: goto label_175418;
        default: break;
    }

    ctx->pc = 0x175220u;

    // 0x175220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x175220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x175224: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x175224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x175228: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x175228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17522c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17522cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175230: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x175230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x175234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x175234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x175238: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x175238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x17523c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17523Cu;
    {
        const bool branch_taken_0x17523c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17523c) {
            ctx->pc = 0x175240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17523Cu;
            // 0x175240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175250u;
            goto label_175250;
        }
    }
    ctx->pc = 0x175244u;
    // 0x175244: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x175244u;
    SET_GPR_U32(ctx, 31, 0x17524Cu);
    ctx->pc = 0x175248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175244u;
    // 0x175248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x175244u, 0x17524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17524Cu;
label_17524c:
    // 0x17524c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175250:
    // 0x175250: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x175250u;
    SET_GPR_U32(ctx, 31, 0x175258u);
    ctx->pc = 0x175254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175250u;
    // 0x175254: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x175250u, 0x175258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175258u;
label_175258:
    // 0x175258: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x17525c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x17525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x175260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175268: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x175268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17526c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x17526Cu;
    SET_GPR_U32(ctx, 31, 0x175274u);
    ctx->pc = 0x175270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17526Cu;
    // 0x175270: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x17526Cu, 0x175274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175274u;
label_175274:
    // 0x175274: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x175274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x175278: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x175278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x17527c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x17527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x175280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175284: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x175284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x175288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17528c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x17528Cu;
    SET_GPR_U32(ctx, 31, 0x175294u);
    ctx->pc = 0x175290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17528Cu;
    // 0x175290: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x17528Cu, 0x175294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175294u;
label_175294:
    // 0x175294: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x175294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x175298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17529c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1752a0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1752a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1752a4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1752A4u;
    SET_GPR_U32(ctx, 31, 0x1752ACu);
    ctx->pc = 0x1752A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752A4u;
    // 0x1752a8: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1752A4u, 0x1752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752ACu;
label_1752ac:
    // 0x1752ac: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1752b0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1752b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1752b4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1752b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1752b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1752b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1752bc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1752bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1752c0: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x1752c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x1752c4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1752c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1752c8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1752c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1752cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1752ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1752d0: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1752D0u;
    {
        const bool branch_taken_0x1752d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1752D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752D0u;
        // 0x1752d4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752d0) {
            ctx->pc = 0x175398u;
            goto label_175398;
        }
    }
    ctx->pc = 0x1752D8u;
    // 0x1752d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1752d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752dc: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1752dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1752e0: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1752e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1752e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1752e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1752e8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1752e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1752ec: 0x0  nop
    ctx->pc = 0x1752ecu;
    // NOP
label_1752f0:
    // 0x1752f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1752f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752f4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1752f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1752f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1752F8u;
    {
        const bool branch_taken_0x1752f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1752FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752F8u;
        // 0x1752fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752f8) {
            ctx->pc = 0x175308u;
            goto label_175308;
        }
    }
    ctx->pc = 0x175300u;
    // 0x175300: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x175300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175308:
    // 0x175308: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x175308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17530c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17530Cu;
    {
        const bool branch_taken_0x17530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17530Cu;
        // 0x175310: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17530c) {
            ctx->pc = 0x175324u;
            goto label_175324;
        }
    }
    ctx->pc = 0x175314u;
    // 0x175314: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x175314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x175318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17531c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17531Cu;
    {
        const bool branch_taken_0x17531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17531Cu;
        // 0x175320: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17531c) {
            ctx->pc = 0x175328u;
            goto label_175328;
        }
    }
    ctx->pc = 0x175324u;
label_175324:
    // 0x175324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x175324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175328:
    // 0x175328: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x175328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17532c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175330: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x175330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x175334: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x175334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x175338: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x175338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x17533c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17533cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x175340: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175340u;
    {
        const bool branch_taken_0x175340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175340u;
        // 0x175344: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175340) {
            ctx->pc = 0x175350u;
            goto label_175350;
        }
    }
    ctx->pc = 0x175348u;
    // 0x175348: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x175348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17534c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17534cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175350:
    // 0x175350: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x175350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x175354: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175354u;
    {
        const bool branch_taken_0x175354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175354u;
        // 0x175358: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175354) {
            ctx->pc = 0x17536Cu;
            goto label_17536c;
        }
    }
    ctx->pc = 0x17535Cu;
    // 0x17535c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x17535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x175360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175364: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175364u;
    {
        const bool branch_taken_0x175364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175364u;
        // 0x175368: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175364) {
            ctx->pc = 0x175370u;
            goto label_175370;
        }
    }
    ctx->pc = 0x17536Cu;
label_17536c:
    // 0x17536c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175370:
    // 0x175370: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x175370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x175374: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x175374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x175378: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17537c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x17537cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x175380: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x175380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x175384: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175384u;
    {
        const bool branch_taken_0x175384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175384u;
        // 0x175388: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175384) {
            ctx->pc = 0x175398u;
            goto label_175398;
        }
    }
    ctx->pc = 0x17538Cu;
    // 0x17538c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17538cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x175390: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x175390u;
    {
        const bool branch_taken_0x175390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x175390) {
            ctx->pc = 0x175394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175390u;
            // 0x175394: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1752F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1752f0;
        }
    }
    ctx->pc = 0x175398u;
label_175398:
    // 0x175398: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x175398u;
    SET_GPR_U32(ctx, 31, 0x1753A0u);
    ctx->pc = 0x17539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175398u;
    // 0x17539c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x175398u, 0x1753A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753A0u;
label_1753a0:
    // 0x1753a0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1753a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1753a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1753a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1753a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1753a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1753ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1753acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1753b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1753b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1753b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1753b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1753b8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1753b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1753bc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1753bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1753c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1753c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1753c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1753c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1753c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1753c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1753cc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1753ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753d0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1753d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1753d4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1753d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1753d8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1753d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1753dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1753dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1753e0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1753e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1753e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1753e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1753e8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1753e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1753ec: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1753ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1753f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1753f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1753f4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1753f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1753f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1753f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1753fc: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1753FCu;
    {
        const bool branch_taken_0x1753fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x175400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753FCu;
        // 0x175400: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753fc) {
            ctx->pc = 0x175434u;
            goto label_175434;
        }
    }
    ctx->pc = 0x175404u;
    // 0x175404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175408:
    // 0x175408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17540c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x175410: 0xc05d3f4  jal         func_174FD0
    ctx->pc = 0x175410u;
    SET_GPR_U32(ctx, 31, 0x175418u);
    ctx->pc = 0x175414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175410u;
    // 0x175414: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FD0u, 0x175410u, 0x175418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175418u;
label_175418:
    // 0x175418: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x175418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17541c: 0x2a02000d  slti        $v0, $s0, 0xD
    ctx->pc = 0x17541cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x175420: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x175420u;
    {
        const bool branch_taken_0x175420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175420) {
            ctx->pc = 0x175424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175420u;
            // 0x175424: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175438u;
            goto label_175438;
        }
    }
    ctx->pc = 0x175428u;
    // 0x175428: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x175428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17542c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17542Cu;
    {
        const bool branch_taken_0x17542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x175430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17542Cu;
        // 0x175430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17542c) {
            ctx->pc = 0x175408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175408;
        }
    }
    ctx->pc = 0x175434u;
label_175434:
    // 0x175434: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x175434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_175438:
    // 0x175438: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x175438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17543c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17543cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x175440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175444: 0x3e00008  jr          $ra
    ctx->pc = 0x175444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175444u;
        // 0x175448: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17544Cu;
    // 0x17544c: 0x0  nop
    ctx->pc = 0x17544cu;
    // NOP
    ctx->pc = 0x175450u;
}
