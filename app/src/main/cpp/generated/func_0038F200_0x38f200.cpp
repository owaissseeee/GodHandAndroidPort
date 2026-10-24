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

// Function: func_0038F200
// Address: 0x38f200 - 0x38f3d8
void func_0038F200_0x38f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F200_0x38f200");
#endif

    switch (ctx->pc) {
        case 0x38f240u: goto label_38f240;
        case 0x38f280u: goto label_38f280;
        case 0x38f2c8u: goto label_38f2c8;
        case 0x38f2fcu: goto label_38f2fc;
        case 0x38f344u: goto label_38f344;
        case 0x38f37cu: goto label_38f37c;
        default: break;
    }

    ctx->pc = 0x38f200u;

    // 0x38f200: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x38f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x38f204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f208: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x38f208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x38f20c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f210: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x38f210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x38f214: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x38f214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x38f218: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x38f218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x38f21c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x38f21cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x38f220: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x38f220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x38f224: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x38f224u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x38f228: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x38f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x38f22c: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x38f22cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x38f230: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x38f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x38f234: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x38f234u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x38f238: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x38F238u;
    SET_GPR_U32(ctx, 31, 0x38F240u);
    ctx->pc = 0x38F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F238u;
    // 0x38f23c: 0xffb00060  sd          $s0, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x38F238u, 0x38F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F240u;
label_38f240:
    // 0x38f240: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x38f240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x38f244: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x38f248: 0x24424f80  addiu       $v0, $v0, 0x4F80
    ctx->pc = 0x38f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x38f24c: 0x3463208a  ori         $v1, $v1, 0x208A
    ctx->pc = 0x38f24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8330);
    // 0x38f250: 0x2664dae8  addiu       $a0, $s3, -0x2518
    ctx->pc = 0x38f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957800));
    // 0x38f254: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38f254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38f258: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x38f258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x38f25c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x38f25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38f260: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x38f260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x38f264: 0x26424fd8  addiu       $v0, $s2, 0x4FD8
    ctx->pc = 0x38f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20440));
    // 0x38f268: 0x8e83a62c  lw          $v1, -0x59D4($s4)
    ctx->pc = 0x38f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944300)));
    // 0x38f26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38f26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38f270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f278: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x38f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38f27c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x38f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_38f280:
    // 0x38f280: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x38f280u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38f284: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x38f284u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38f288: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x38f288u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38f28c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x38f28cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38f290: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x38f290u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x38f294: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x38f294u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x38f298: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x38f298u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x38f29c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x38f29cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x38f2a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x38f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x38f2a4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x38f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x38f2a8: 0x0  nop
    ctx->pc = 0x38f2a8u;
    // NOP
    // 0x38f2ac: 0x1486fff4  bne         $a0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x38F2ACu;
    {
        const bool branch_taken_0x38f2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x38f2ac) {
            ctx->pc = 0x38F280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f280;
        }
    }
    ctx->pc = 0x38F2B4u;
    // 0x38f2b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2bc: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x38f2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x38f2c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x38F2C0u;
    SET_GPR_U32(ctx, 31, 0x38F2C8u);
    ctx->pc = 0x38F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F2C0u;
    // 0x38f2c4: 0x26b05038  addiu       $s0, $s5, 0x5038 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x38F2C0u, 0x38F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F2C8u;
label_38f2c8:
    // 0x38f2c8: 0x26424fd8  addiu       $v0, $s2, 0x4FD8
    ctx->pc = 0x38f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20440));
    // 0x38f2cc: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x38f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x38f2d0: 0x34632086  ori         $v1, $v1, 0x2086
    ctx->pc = 0x38f2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8326);
    // 0x38f2d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f2d8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x38f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x38f2dc: 0x2665dae8  addiu       $a1, $s3, -0x2518
    ctx->pc = 0x38f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957800));
    // 0x38f2e0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x38f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x38f2e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38f2e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2ec: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x38f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x38f2f0: 0x8e82a62c  lw          $v0, -0x59D4($s4)
    ctx->pc = 0x38f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944300)));
    // 0x38f2f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x38f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38f2f8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x38f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_38f2fc:
    // 0x38f2fc: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x38f2fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38f300: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x38f300u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38f304: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x38f304u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38f308: 0xdc860018  ld          $a2, 0x18($a0)
    ctx->pc = 0x38f308u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38f30c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x38f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x38f310: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x38f310u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x38f314: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x38f314u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x38f318: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x38f318u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x38f31c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x38f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x38f320: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x38f320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x38f324: 0x0  nop
    ctx->pc = 0x38f324u;
    // NOP
    // 0x38f328: 0x1491fff4  bne         $a0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x38F328u;
    {
        const bool branch_taken_0x38f328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x38f328) {
            ctx->pc = 0x38F2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f2fc;
        }
    }
    ctx->pc = 0x38F330u;
    // 0x38f330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f338: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x38f338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x38f33c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x38F33Cu;
    SET_GPR_U32(ctx, 31, 0x38F344u);
    ctx->pc = 0x38F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F33Cu;
    // 0x38f340: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x38F33Cu, 0x38F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F344u;
label_38f344:
    // 0x38f344: 0x26105098  addiu       $s0, $s0, 0x5098
    ctx->pc = 0x38f344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20632));
    // 0x38f348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f34c: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x38f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x38f350: 0x26a45038  addiu       $a0, $s5, 0x5038
    ctx->pc = 0x38f350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20536));
    // 0x38f354: 0x34632086  ori         $v1, $v1, 0x2086
    ctx->pc = 0x38f354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8326);
    // 0x38f358: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x38f358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x38f35c: 0x2665dae8  addiu       $a1, $s3, -0x2518
    ctx->pc = 0x38f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957800));
    // 0x38f360: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x38f360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x38f364: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38f364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38f368: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f36c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x38f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x38f370: 0x8e82a62c  lw          $v0, -0x59D4($s4)
    ctx->pc = 0x38f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944300)));
    // 0x38f374: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x38f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x38f378: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x38f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_38f37c:
    // 0x38f37c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x38f37cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38f380: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x38f380u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38f384: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x38f384u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38f388: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x38f388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38f38c: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x38f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x38f390: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x38f390u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x38f394: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x38f394u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x38f398: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x38f398u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x38f39c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x38f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x38f3a0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x38f3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x38f3a4: 0x0  nop
    ctx->pc = 0x38f3a4u;
    // NOP
    // 0x38f3a8: 0x1491fff4  bne         $a0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x38F3A8u;
    {
        const bool branch_taken_0x38f3a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x38f3a8) {
            ctx->pc = 0x38F37Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f37c;
        }
    }
    ctx->pc = 0x38F3B0u;
    // 0x38f3b0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x38f3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38f3b4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x38f3b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38f3b8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x38f3b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38f3bc: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x38f3bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38f3c0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x38f3c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38f3c4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x38f3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38f3c8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x38f3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38f3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x38F3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3CCu;
        // 0x38f3d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F3D4u;
    // 0x38f3d4: 0x0  nop
    ctx->pc = 0x38f3d4u;
    // NOP
    ctx->pc = 0x38f3d8u;
}
