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

// Function: dmaRefImage
// Address: 0x39ef68 - 0x39f0e8
void dmaRefImage_0x39ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dmaRefImage_0x39ef68");
#endif

    switch (ctx->pc) {
        case 0x39efd8u: goto label_39efd8;
        case 0x39f064u: goto label_39f064;
        default: break;
    }

    ctx->pc = 0x39ef68u;

    // 0x39ef68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39ef68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39ef6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ef70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39ef74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ef74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ef78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39ef7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39ef80: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x39ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x39ef84: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x39EF84u;
    {
        const bool branch_taken_0x39ef84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF84u;
        // 0x39ef88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef84) {
            ctx->pc = 0x39F0D0u;
            goto label_39f0d0;
        }
    }
    ctx->pc = 0x39EF8Cu;
    // 0x39ef8c: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x39ef8cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39ef90: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x39ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39ef94: 0x3c120078  lui         $s2, 0x78
    ctx->pc = 0x39ef94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
    // 0x39ef98: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x39ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x39ef9c: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x39ef9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39efa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39efa4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x39efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x39efa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39efa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39efac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x39efacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x39efb0: 0x2643c680  addiu       $v1, $s2, -0x3980
    ctx->pc = 0x39efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952576));
    // 0x39efb4: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x39efb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x39efb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39efb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x39efbc: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x39EFBCu;
    {
        const bool branch_taken_0x39efbc = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x39EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EFBCu;
        // 0x39efc0: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39efbc) {
            ctx->pc = 0x39F058u;
            goto label_39f058;
        }
    }
    ctx->pc = 0x39EFC4u;
    // 0x39efc4: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x39efc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x39efc8: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x39efc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x39efcc: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x39efccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x39efd0: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x39efd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x39efd4: 0x0  nop
    ctx->pc = 0x39efd4u;
    // NOP
label_39efd8:
    // 0x39efd8: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x39efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39efdc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x39efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x39efe0: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x39efe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39efe4: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x39efe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x39efe8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x39efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39efec: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x39efecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x39eff0: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x39eff0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x39eff4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x39eff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x39eff8: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x39eff8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x39effc: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x39effcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x39f000: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39f000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39f004: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x39f004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x39f008: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x39f008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x39f00c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39f00cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x39f010: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x39f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x39f014: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x39f014u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x39f018: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39f01c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f020: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x39f020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x39f024: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x39f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x39f028: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39f028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39f02c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39f030: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x39f030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x39f034: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x39f034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x39f038: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x39f038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x39f03c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x39f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x39f040: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x39f040u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x39f044: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x39f044u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x39f048: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x39F048u;
    {
        const bool branch_taken_0x39f048 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F048u;
        // 0x39f04c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f048) {
            ctx->pc = 0x39EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39efd8;
        }
    }
    ctx->pc = 0x39F050u;
    // 0x39f050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39F050u;
    {
        const bool branch_taken_0x39f050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f050) {
            ctx->pc = 0x39F05Cu;
            goto label_39f05c;
        }
    }
    ctx->pc = 0x39F058u;
label_39f058:
    // 0x39f058: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x39f058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_39f05c:
    // 0x39f05c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39F05Cu;
    SET_GPR_U32(ctx, 31, 0x39F064u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39F05Cu, 0x39F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F064u;
label_39f064:
    // 0x39f064: 0xf  sync
    ctx->pc = 0x39f064u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x39f068: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x39f068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39f06c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x39f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39f070: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x39f070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x39f074: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x39f074u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x39f078: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x39f078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39f07c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x39f07cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x39f080: 0x264ac680  addiu       $t2, $s2, -0x3980
    ctx->pc = 0x39f080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952576));
    // 0x39f084: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x39f084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x39f088: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39f088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39f08c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x39f08cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x39f090: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x39f090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x39f094: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x39f094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x39f098: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x39f098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f09c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39f0a0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x39f0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x39f0a4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x39f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x39f0a8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x39f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x39f0ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39f0acu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x39f0b0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x39f0b0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9));
    // 0x39f0b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39F0B4u;
    {
        const bool branch_taken_0x39f0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0B4u;
        // 0x39f0b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0b4) {
            ctx->pc = 0x39F0D0u;
            goto label_39f0d0;
        }
    }
    ctx->pc = 0x39F0BCu;
    // 0x39f0bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39f0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f0c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39f0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f0c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f0c8: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x39F0C8u;
    ctx->pc = 0x39F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F0C8u;
    // 0x39f0cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39F0C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39F0D0u;
label_39f0d0:
    // 0x39f0d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39f0d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f0d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39f0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x39F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0DCu;
        // 0x39f0e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F0E4u;
    // 0x39f0e4: 0x0  nop
    ctx->pc = 0x39f0e4u;
    // NOP
    ctx->pc = 0x39f0e8u;
}
