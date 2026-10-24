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

// Function: func_00140718
// Address: 0x140718 - 0x140860
void func_00140718_0x140718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00140718_0x140718");
#endif

    switch (ctx->pc) {
        case 0x14078cu: goto label_14078c;
        case 0x1407b0u: goto label_1407b0;
        case 0x1407c4u: goto label_1407c4;
        case 0x140808u: goto label_140808;
        case 0x14081cu: goto label_14081c;
        default: break;
    }

    ctx->pc = 0x140718u;

    // 0x140718: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x140718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14071c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x140720: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x140720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x140724: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x140724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140728: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x140728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14072c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14072cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140730: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x140730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x140734: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x140734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x140738: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x140738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14073c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x14073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x140740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140744: 0x82620384  lb          $v0, 0x384($s3)
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 900)));
    // 0x140748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140748u;
    {
        const bool branch_taken_0x140748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140748u;
        // 0x14074c: 0x92630384  lbu         $v1, 0x384($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140748) {
            ctx->pc = 0x140758u;
            goto label_140758;
        }
    }
    ctx->pc = 0x140750u;
    // 0x140750: 0x50c00039  beql        $a2, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x140750u;
    {
        const bool branch_taken_0x140750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x140750) {
            ctx->pc = 0x140754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140750u;
            // 0x140754: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140838u;
            goto label_140838;
        }
    }
    ctx->pc = 0x140758u;
label_140758:
    // 0x140758: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x140758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x14075c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x14075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x140760: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x140760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x140764: 0xa2630384  sb          $v1, 0x384($s3)
    ctx->pc = 0x140764u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 900), (uint8_t)GPR_U32(ctx, 3));
    // 0x140768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14076c: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x140770: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x140770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140774: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x140774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x140778: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x140778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x14077c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x140780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140784: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140784u;
    SET_GPR_U32(ctx, 31, 0x14078Cu);
    ctx->pc = 0x140788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140784u;
    // 0x140788: 0xae62035c  sw          $v0, 0x35C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140784u, 0x14078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14078Cu;
label_14078c:
    // 0x14078c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x140790: 0x6200011  bltz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x140790u;
    {
        const bool branch_taken_0x140790 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x140794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140790u;
        // 0x140794: 0xa043004f  sb          $v1, 0x4F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140790) {
            ctx->pc = 0x1407D8u;
            goto label_1407d8;
        }
    }
    ctx->pc = 0x140798u;
    // 0x140798: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x140798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14079c: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x14079cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1407a0: 0x26720360  addiu       $s2, $s3, 0x360
    ctx->pc = 0x1407a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
    // 0x1407a4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1407a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1407a8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1407a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1407ac: 0x0  nop
    ctx->pc = 0x1407acu;
    // NOP
label_1407b0:
    // 0x1407b0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1407b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x1407b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1407b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1407b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407bc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1407BCu;
    SET_GPR_U32(ctx, 31, 0x1407C4u);
    ctx->pc = 0x1407C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407BCu;
    // 0x1407c0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1407BCu, 0x1407C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C4u;
label_1407c4:
    // 0x1407c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1407c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1407c8: 0xa055004f  sb          $s5, 0x4F($v0)
    ctx->pc = 0x1407c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 21));
    // 0x1407cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1407ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1407d0: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1407D0u;
    {
        const bool branch_taken_0x1407d0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1407D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407D0u;
        // 0x1407d4: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407d0) {
            ctx->pc = 0x1407B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1407b0;
        }
    }
    ctx->pc = 0x1407D8u;
label_1407d8:
    // 0x1407d8: 0x92620358  lbu         $v0, 0x358($s3)
    ctx->pc = 0x1407d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 856)));
    // 0x1407dc: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1407dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407e0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1407e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1407e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1407E4u;
    {
        const bool branch_taken_0x1407e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407E4u;
        // 0x1407e8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407e4) {
            ctx->pc = 0x140834u;
            goto label_140834;
        }
    }
    ctx->pc = 0x1407ECu;
    // 0x1407ec: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1407ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1407f0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1407f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1407f4: 0x2442035c  addiu       $v0, $v0, 0x35C
    ctx->pc = 0x1407f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 860));
    // 0x1407f8: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1407fc: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x1407fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x140800: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x140800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x140804: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_140808:
    // 0x140808: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x140808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x14080c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140814: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140814u;
    SET_GPR_U32(ctx, 31, 0x14081Cu);
    ctx->pc = 0x140818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140814u;
    // 0x140818: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140814u, 0x14081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14081Cu;
label_14081c:
    // 0x14081c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14081cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x140820: 0xa054004f  sb          $s4, 0x4F($v0)
    ctx->pc = 0x140820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 20));
    // 0x140824: 0x92620358  lbu         $v0, 0x358($s3)
    ctx->pc = 0x140824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 856)));
    // 0x140828: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x140828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14082c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14082Cu;
    {
        const bool branch_taken_0x14082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14082Cu;
        // 0x140830: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14082c) {
            ctx->pc = 0x140808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140808;
        }
    }
    ctx->pc = 0x140834u;
label_140834:
    // 0x140834: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x140834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_140838:
    // 0x140838: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x140838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14083c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14083cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140840: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x140840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140844: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x140844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140848: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x140848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14084c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x14084cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140854: 0x3e00008  jr          $ra
    ctx->pc = 0x140854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140854u;
        // 0x140858: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14085Cu;
    // 0x14085c: 0x0  nop
    ctx->pc = 0x14085cu;
    // NOP
    ctx->pc = 0x140860u;
}
