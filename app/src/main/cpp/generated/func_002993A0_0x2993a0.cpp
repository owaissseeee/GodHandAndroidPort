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

// Function: func_002993A0
// Address: 0x2993a0 - 0x299860
void func_002993A0_0x2993a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002993A0_0x2993a0");
#endif

    switch (ctx->pc) {
        case 0x2993e8u: goto label_2993e8;
        case 0x299414u: goto label_299414;
        case 0x299454u: goto label_299454;
        case 0x2997e0u: goto label_2997e0;
        case 0x2997fcu: goto label_2997fc;
        case 0x299830u: goto label_299830;
        default: break;
    }

    ctx->pc = 0x2993a0u;

    // 0x2993a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2993a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2993a4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2993a8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2993a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2993ac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2993acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2993b0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2993b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993b4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2993b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2993b8: 0x8c447a4c  lw          $a0, 0x7A4C($v0)
    ctx->pc = 0x2993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x2993bc: 0x24a5ac80  addiu       $a1, $a1, -0x5380
    ctx->pc = 0x2993bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945920));
    // 0x2993c0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2993c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2993c4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2993c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2993c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2993c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2993cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2993d0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2993d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2993d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2993d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2993d8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2993d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2993dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2993dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2993e0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2993E0u;
    SET_GPR_U32(ctx, 31, 0x2993E8u);
    ctx->pc = 0x2993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993E0u;
    // 0x2993e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2993E0u, 0x2993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993E8u;
label_2993e8:
    // 0x2993e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2993e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2993f0: 0x2e2f021  addu        $fp, $s7, $v0
    ctx->pc = 0x2993f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2993f4: 0xafc040a8  sw          $zero, 0x40A8($fp)
    ctx->pc = 0x2993f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16552), GPR_U32(ctx, 0));
    // 0x2993f8: 0xafc040ac  sw          $zero, 0x40AC($fp)
    ctx->pc = 0x2993f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16556), GPR_U32(ctx, 0));
    // 0x2993fc: 0xafc040b0  sw          $zero, 0x40B0($fp)
    ctx->pc = 0x2993fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16560), GPR_U32(ctx, 0));
    // 0x299400: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x299400u;
    {
        const bool branch_taken_0x299400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299400u;
        // 0x299404: 0xafc040a4  sw          $zero, 0x40A4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299400) {
            ctx->pc = 0x2994E8u;
            goto label_2994e8;
        }
    }
    ctx->pc = 0x299408u;
    // 0x299408: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x299408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29940c: 0x27c343a0  addiu       $v1, $fp, 0x43A0
    ctx->pc = 0x29940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 17312));
    // 0x299410: 0x24445180  addiu       $a0, $v0, 0x5180
    ctx->pc = 0x299410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
label_299414:
    // 0x299414: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x299414u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299418: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x299418u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29941c: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x29941cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x299420: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x299420u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x299424: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x299424u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x299428: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x299428u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x29942c: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x29942cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x299430: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x299430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x299434: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x299434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x299438: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x299438u;
    {
        const bool branch_taken_0x299438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x29943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299438u;
        // 0x29943c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299438) {
            ctx->pc = 0x299414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299414;
        }
    }
    ctx->pc = 0x299440u;
    // 0x299440: 0xdc490000  ld          $t1, 0x0($v0)
    ctx->pc = 0x299440u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299444: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x299444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299448: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x299448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x29944c: 0xc0a8a06  jal         func_2A2818
    ctx->pc = 0x29944Cu;
    SET_GPR_U32(ctx, 31, 0x299454u);
    ctx->pc = 0x299450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29944Cu;
    // 0x299450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2818u, 0x29944Cu, 0x299454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299454u;
label_299454:
    // 0x299454: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x299454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x299458: 0x3c041010  lui         $a0, 0x1010
    ctx->pc = 0x299458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4112 << 16));
    // 0x29945c: 0x3c053030  lui         $a1, 0x3030
    ctx->pc = 0x29945cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12336 << 16));
    // 0x299460: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x299460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x299464: 0x3c07a0a0  lui         $a3, 0xA0A0
    ctx->pc = 0x299464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41120 << 16));
    // 0x299468: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x299468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x29946c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x29946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x299470: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x299470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x299474: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x299474u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299478: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x299478u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29947c: 0x34841010  ori         $a0, $a0, 0x1010
    ctx->pc = 0x29947cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    // 0x299480: 0x34a53030  ori         $a1, $a1, 0x3030
    ctx->pc = 0x299480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12336);
    // 0x299484: 0x34c64040  ori         $a2, $a2, 0x4040
    ctx->pc = 0x299484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16448);
    // 0x299488: 0x34e7a0a0  ori         $a3, $a3, 0xA0A0
    ctx->pc = 0x299488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)41120);
    // 0x29948c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x29948cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x299490: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x299490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x299494: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x299494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x299498: 0x240b00c8  addiu       $t3, $zero, 0xC8
    ctx->pc = 0x299498u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29949c: 0xa46d432a  sh          $t5, 0x432A($v1)
    ctx->pc = 0x29949cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17194), (uint16_t)GPR_U32(ctx, 13));
    // 0x2994a0: 0xac6442d4  sw          $a0, 0x42D4($v1)
    ctx->pc = 0x2994a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17108), GPR_U32(ctx, 4));
    // 0x2994a4: 0xac6542d8  sw          $a1, 0x42D8($v1)
    ctx->pc = 0x2994a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17112), GPR_U32(ctx, 5));
    // 0x2994a8: 0xac6642dc  sw          $a2, 0x42DC($v1)
    ctx->pc = 0x2994a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17116), GPR_U32(ctx, 6));
    // 0x2994ac: 0xac6742e0  sw          $a3, 0x42E0($v1)
    ctx->pc = 0x2994acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17120), GPR_U32(ctx, 7));
    // 0x2994b0: 0xa46842f6  sh          $t0, 0x42F6($v1)
    ctx->pc = 0x2994b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17142), (uint16_t)GPR_U32(ctx, 8));
    // 0x2994b4: 0xa46942f8  sh          $t1, 0x42F8($v1)
    ctx->pc = 0x2994b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17144), (uint16_t)GPR_U32(ctx, 9));
    // 0x2994b8: 0xa46c42d2  sh          $t4, 0x42D2($v1)
    ctx->pc = 0x2994b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17106), (uint16_t)GPR_U32(ctx, 12));
    // 0x2994bc: 0xac624310  sw          $v0, 0x4310($v1)
    ctx->pc = 0x2994bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17168), GPR_U32(ctx, 2));
    // 0x2994c0: 0xa46a4326  sh          $t2, 0x4326($v1)
    ctx->pc = 0x2994c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17190), (uint16_t)GPR_U32(ctx, 10));
    // 0x2994c4: 0xa46b4328  sh          $t3, 0x4328($v1)
    ctx->pc = 0x2994c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17192), (uint16_t)GPR_U32(ctx, 11));
    // 0x2994c8: 0xa46c42d0  sh          $t4, 0x42D0($v1)
    ctx->pc = 0x2994c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17104), (uint16_t)GPR_U32(ctx, 12));
    // 0x2994cc: 0xa46042f4  sh          $zero, 0x42F4($v1)
    ctx->pc = 0x2994ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17140), (uint16_t)GPR_U32(ctx, 0));
    // 0x2994d0: 0xa46d42fa  sh          $t5, 0x42FA($v1)
    ctx->pc = 0x2994d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17146), (uint16_t)GPR_U32(ctx, 13));
    // 0x2994d4: 0xac624304  sw          $v0, 0x4304($v1)
    ctx->pc = 0x2994d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17156), GPR_U32(ctx, 2));
    // 0x2994d8: 0xac624308  sw          $v0, 0x4308($v1)
    ctx->pc = 0x2994d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17160), GPR_U32(ctx, 2));
    // 0x2994dc: 0xac62430c  sw          $v0, 0x430C($v1)
    ctx->pc = 0x2994dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17164), GPR_U32(ctx, 2));
    // 0x2994e0: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2994E0u;
    {
        const bool branch_taken_0x2994e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2994E0u;
        // 0x2994e4: 0xa4604324  sh          $zero, 0x4324($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 17188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2994e0) {
            ctx->pc = 0x299830u;
            goto label_299830;
        }
    }
    ctx->pc = 0x2994E8u;
label_2994e8:
    // 0x2994e8: 0xdfc24098  ld          $v0, 0x4098($fp)
    ctx->pc = 0x2994e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 16536)));
    // 0x2994ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2994ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2994f0: 0x3c056060  lui         $a1, 0x6060
    ctx->pc = 0x2994f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24672 << 16));
    // 0x2994f4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2994f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2994f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2994f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2994fc: 0x34a56060  ori         $a1, $a1, 0x6060
    ctx->pc = 0x2994fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24672);
    // 0x299500: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x299500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x299504: 0xafc5417c  sw          $a1, 0x417C($fp)
    ctx->pc = 0x299504u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16764), GPR_U32(ctx, 5));
    // 0x299508: 0x3c01c503  lui         $at, 0xC503
    ctx->pc = 0x299508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50435 << 16));
    // 0x29950c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x29950cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x299510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299514: 0x3c079090  lui         $a3, 0x9090
    ctx->pc = 0x299514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37008 << 16));
    // 0x299518: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x299518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
    // 0x29951c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x29951cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x299520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x299520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299524: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x299524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x299528: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x299528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x29952c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x29952cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299530: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x299530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x299534: 0x240b0064  addiu       $t3, $zero, 0x64
    ctx->pc = 0x299534u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x299538: 0x34e79090  ori         $a3, $a3, 0x9090
    ctx->pc = 0x299538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)37008);
    // 0x29953c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x29953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x299540: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x299540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x299544: 0xffc24098  sd          $v0, 0x4098($fp)
    ctx->pc = 0x299544u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16536), GPR_U64(ctx, 2));
    // 0x299548: 0xa3c440d8  sb          $a0, 0x40D8($fp)
    ctx->pc = 0x299548u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 16600), (uint8_t)GPR_U32(ctx, 4));
    // 0x29954c: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x29954cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x299550: 0xa3c640d9  sb          $a2, 0x40D9($fp)
    ctx->pc = 0x299550u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 16601), (uint8_t)GPR_U32(ctx, 6));
    // 0x299554: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x299554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x299558: 0xa3c840da  sb          $t0, 0x40DA($fp)
    ctx->pc = 0x299558u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 16602), (uint8_t)GPR_U32(ctx, 8));
    // 0x29955c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x29955cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x299560: 0xafc74118  sw          $a3, 0x4118($fp)
    ctx->pc = 0x299560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 7));
    // 0x299564: 0x3c0dc0c0  lui         $t5, 0xC0C0
    ctx->pc = 0x299564u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)49344 << 16));
    // 0x299568: 0xafc740e8  sw          $a3, 0x40E8($fp)
    ctx->pc = 0x299568u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16616), GPR_U32(ctx, 7));
    // 0x29956c: 0x3c0680f0  lui         $a2, 0x80F0
    ctx->pc = 0x29956cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33008 << 16));
    // 0x299570: 0xa7c54102  sh          $a1, 0x4102($fp)
    ctx->pc = 0x299570u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16642), (uint16_t)GPR_U32(ctx, 5));
    // 0x299574: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x299574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299578: 0xa7c54132  sh          $a1, 0x4132($fp)
    ctx->pc = 0x299578u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16690), (uint16_t)GPR_U32(ctx, 5));
    // 0x29957c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x29957cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x299580: 0xe7c040d0  swc1        $f0, 0x40D0($fp)
    ctx->pc = 0x299580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16592), bits); }
    // 0x299584: 0x240c0096  addiu       $t4, $zero, 0x96
    ctx->pc = 0x299584u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x299588: 0xe7c140d4  swc1        $f1, 0x40D4($fp)
    ctx->pc = 0x299588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16596), bits); }
    // 0x29958c: 0x241300c8  addiu       $s3, $zero, 0xC8
    ctx->pc = 0x29958cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x299590: 0xa7d240dc  sh          $s2, 0x40DC($fp)
    ctx->pc = 0x299590u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16604), (uint16_t)GPR_U32(ctx, 18));
    // 0x299594: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x299594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299598: 0xafc040e0  sw          $zero, 0x40E0($fp)
    ctx->pc = 0x299598u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16608), GPR_U32(ctx, 0));
    // 0x29959c: 0x354af080  ori         $t2, $t2, 0xF080
    ctx->pc = 0x29959cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)61568);
    // 0x2995a0: 0xafc040e4  sw          $zero, 0x40E4($fp)
    ctx->pc = 0x2995a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16612), GPR_U32(ctx, 0));
    // 0x2995a4: 0x35adc0c0  ori         $t5, $t5, 0xC0C0
    ctx->pc = 0x2995a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)49344);
    // 0x2995a8: 0xa7c04100  sh          $zero, 0x4100($fp)
    ctx->pc = 0x2995a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16640), (uint16_t)GPR_U32(ctx, 0));
    // 0x2995ac: 0x24180032  addiu       $t8, $zero, 0x32
    ctx->pc = 0x2995acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2995b0: 0xa7c94104  sh          $t1, 0x4104($fp)
    ctx->pc = 0x2995b0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16644), (uint16_t)GPR_U32(ctx, 9));
    // 0x2995b4: 0x344280f0  ori         $v0, $v0, 0x80F0
    ctx->pc = 0x2995b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33008);
    // 0x2995b8: 0xa7d240de  sh          $s2, 0x40DE($fp)
    ctx->pc = 0x2995b8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16606), (uint16_t)GPR_U32(ctx, 18));
    // 0x2995bc: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x2995bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2995c0: 0xafc04110  sw          $zero, 0x4110($fp)
    ctx->pc = 0x2995c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16656), GPR_U32(ctx, 0));
    // 0x2995c4: 0x3c078060  lui         $a3, 0x8060
    ctx->pc = 0x2995c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32864 << 16));
    // 0x2995c8: 0xafc04114  sw          $zero, 0x4114($fp)
    ctx->pc = 0x2995c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16660), GPR_U32(ctx, 0));
    // 0x2995cc: 0x34e780a0  ori         $a3, $a3, 0x80A0
    ctx->pc = 0x2995ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32928);
    // 0x2995d0: 0xa7c04130  sh          $zero, 0x4130($fp)
    ctx->pc = 0x2995d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16688), (uint16_t)GPR_U32(ctx, 0));
    // 0x2995d4: 0x3c0f2020  lui         $t7, 0x2020
    ctx->pc = 0x2995d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8224 << 16));
    // 0x2995d8: 0xa7c94134  sh          $t1, 0x4134($fp)
    ctx->pc = 0x2995d8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16692), (uint16_t)GPR_U32(ctx, 9));
    // 0x2995dc: 0x3c0e3020  lui         $t6, 0x3020
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)12320 << 16));
    // 0x2995e0: 0xa7d24140  sh          $s2, 0x4140($fp)
    ctx->pc = 0x2995e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16704), (uint16_t)GPR_U32(ctx, 18));
    // 0x2995e4: 0x3c05ff60  lui         $a1, 0xFF60
    ctx->pc = 0x2995e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65376 << 16));
    // 0x2995e8: 0xafc34144  sw          $v1, 0x4144($fp)
    ctx->pc = 0x2995e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16708), GPR_U32(ctx, 3));
    // 0x2995ec: 0x34a58098  ori         $a1, $a1, 0x8098
    ctx->pc = 0x2995ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32920);
    // 0x2995f0: 0xafc34148  sw          $v1, 0x4148($fp)
    ctx->pc = 0x2995f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16712), GPR_U32(ctx, 3));
    // 0x2995f4: 0x35ef2b2b  ori         $t7, $t7, 0x2B2B
    ctx->pc = 0x2995f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)11051);
    // 0x2995f8: 0xafc3414c  sw          $v1, 0x414C($fp)
    ctx->pc = 0x2995f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16716), GPR_U32(ctx, 3));
    // 0x2995fc: 0x35ce3240  ori         $t6, $t6, 0x3240
    ctx->pc = 0x2995fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)12864);
    // 0x299600: 0xa7c04164  sh          $zero, 0x4164($fp)
    ctx->pc = 0x299600u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16740), (uint16_t)GPR_U32(ctx, 0));
    // 0x299604: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x299608: 0xa7cb4166  sh          $t3, 0x4166($fp)
    ctx->pc = 0x299608u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16742), (uint16_t)GPR_U32(ctx, 11));
    // 0x29960c: 0x3c1070ff  lui         $s0, 0x70FF
    ctx->pc = 0x29960cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28927 << 16));
    // 0x299610: 0xa7c94168  sh          $t1, 0x4168($fp)
    ctx->pc = 0x299610u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16744), (uint16_t)GPR_U32(ctx, 9));
    // 0x299614: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x299614u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x299618: 0xa7d24142  sh          $s2, 0x4142($fp)
    ctx->pc = 0x299618u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16706), (uint16_t)GPR_U32(ctx, 18));
    // 0x29961c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x29961cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x299620: 0xafc04174  sw          $zero, 0x4174($fp)
    ctx->pc = 0x299620u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16756), GPR_U32(ctx, 0));
    // 0x299624: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x299624u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
    // 0x299628: 0xafc04178  sw          $zero, 0x4178($fp)
    ctx->pc = 0x299628u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16760), GPR_U32(ctx, 0));
    // 0x29962c: 0x3c160001  lui         $s6, 0x1
    ctx->pc = 0x29962cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1 << 16));
    // 0x299630: 0xa7c04194  sh          $zero, 0x4194($fp)
    ctx->pc = 0x299630u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16788), (uint16_t)GPR_U32(ctx, 0));
    // 0x299634: 0x24190020  addiu       $t9, $zero, 0x20
    ctx->pc = 0x299634u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x299638: 0xa7cb4196  sh          $t3, 0x4196($fp)
    ctx->pc = 0x299638u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16790), (uint16_t)GPR_U32(ctx, 11));
    // 0x29963c: 0x36b543b0  ori         $s5, $s5, 0x43B0
    ctx->pc = 0x29963cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)17328);
    // 0x299640: 0xafc241ac  sw          $v0, 0x41AC($fp)
    ctx->pc = 0x299640u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16812), GPR_U32(ctx, 2));
    // 0x299644: 0x36d640c8  ori         $s6, $s6, 0x40C8
    ctx->pc = 0x299644u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16584);
    // 0x299648: 0xafc6421c  sw          $a2, 0x421C($fp)
    ctx->pc = 0x299648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16924), GPR_U32(ctx, 6));
    // 0x29964c: 0xa7c841a6  sh          $t0, 0x41A6($fp)
    ctx->pc = 0x29964cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16806), (uint16_t)GPR_U32(ctx, 8));
    // 0x299650: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x299650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x299654: 0xa7c8420a  sh          $t0, 0x420A($fp)
    ctx->pc = 0x299654u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16906), (uint16_t)GPR_U32(ctx, 8));
    // 0x299658: 0xa7d44208  sh          $s4, 0x4208($fp)
    ctx->pc = 0x299658u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16904), (uint16_t)GPR_U32(ctx, 20));
    // 0x29965c: 0xafca4214  sw          $t2, 0x4214($fp)
    ctx->pc = 0x29965cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16916), GPR_U32(ctx, 10));
    // 0x299660: 0xa7cb422e  sh          $t3, 0x422E($fp)
    ctx->pc = 0x299660u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16942), (uint16_t)GPR_U32(ctx, 11));
    // 0x299664: 0xa7c94198  sh          $t1, 0x4198($fp)
    ctx->pc = 0x299664u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16792), (uint16_t)GPR_U32(ctx, 9));
    // 0x299668: 0xa7d441a4  sh          $s4, 0x41A4($fp)
    ctx->pc = 0x299668u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16804), (uint16_t)GPR_U32(ctx, 20));
    // 0x29966c: 0xafc341a8  sw          $v1, 0x41A8($fp)
    ctx->pc = 0x29966cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16808), GPR_U32(ctx, 3));
    // 0x299670: 0xafc341b8  sw          $v1, 0x41B8($fp)
    ctx->pc = 0x299670u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16824), GPR_U32(ctx, 3));
    // 0x299674: 0xafca41b0  sw          $t2, 0x41B0($fp)
    ctx->pc = 0x299674u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16816), GPR_U32(ctx, 10));
    // 0x299678: 0xafc341b4  sw          $v1, 0x41B4($fp)
    ctx->pc = 0x299678u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16820), GPR_U32(ctx, 3));
    // 0x29967c: 0xa7c041c8  sh          $zero, 0x41C8($fp)
    ctx->pc = 0x29967cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16840), (uint16_t)GPR_U32(ctx, 0));
    // 0x299680: 0xa7cb41d0  sh          $t3, 0x41D0($fp)
    ctx->pc = 0x299680u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16848), (uint16_t)GPR_U32(ctx, 11));
    // 0x299684: 0xa7cc41cc  sh          $t4, 0x41CC($fp)
    ctx->pc = 0x299684u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16844), (uint16_t)GPR_U32(ctx, 12));
    // 0x299688: 0xa7d341ce  sh          $s3, 0x41CE($fp)
    ctx->pc = 0x299688u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16846), (uint16_t)GPR_U32(ctx, 19));
    // 0x29968c: 0xa7c941ca  sh          $t1, 0x41CA($fp)
    ctx->pc = 0x29968cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16842), (uint16_t)GPR_U32(ctx, 9));
    // 0x299690: 0xafc041d8  sw          $zero, 0x41D8($fp)
    ctx->pc = 0x299690u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16856), GPR_U32(ctx, 0));
    // 0x299694: 0xafc441dc  sw          $a0, 0x41DC($fp)
    ctx->pc = 0x299694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16860), GPR_U32(ctx, 4));
    // 0x299698: 0xafc341e0  sw          $v1, 0x41E0($fp)
    ctx->pc = 0x299698u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16864), GPR_U32(ctx, 3));
    // 0x29969c: 0xafcd41e4  sw          $t5, 0x41E4($fp)
    ctx->pc = 0x29969cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16868), GPR_U32(ctx, 13));
    // 0x2996a0: 0xa7c041f8  sh          $zero, 0x41F8($fp)
    ctx->pc = 0x2996a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16888), (uint16_t)GPR_U32(ctx, 0));
    // 0x2996a4: 0xa7d841fa  sh          $t8, 0x41FA($fp)
    ctx->pc = 0x2996a4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16890), (uint16_t)GPR_U32(ctx, 24));
    // 0x2996a8: 0xa7cc41fc  sh          $t4, 0x41FC($fp)
    ctx->pc = 0x2996a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16892), (uint16_t)GPR_U32(ctx, 12));
    // 0x2996ac: 0xa7c941fe  sh          $t1, 0x41FE($fp)
    ctx->pc = 0x2996acu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16894), (uint16_t)GPR_U32(ctx, 9));
    // 0x2996b0: 0xafc3420c  sw          $v1, 0x420C($fp)
    ctx->pc = 0x2996b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16908), GPR_U32(ctx, 3));
    // 0x2996b4: 0xafc34210  sw          $v1, 0x4210($fp)
    ctx->pc = 0x2996b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16912), GPR_U32(ctx, 3));
    // 0x2996b8: 0xafc34218  sw          $v1, 0x4218($fp)
    ctx->pc = 0x2996b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16920), GPR_U32(ctx, 3));
    // 0x2996bc: 0xa7c0422c  sh          $zero, 0x422C($fp)
    ctx->pc = 0x2996bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16940), (uint16_t)GPR_U32(ctx, 0));
    // 0x2996c0: 0xa7cc4230  sh          $t4, 0x4230($fp)
    ctx->pc = 0x2996c0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16944), (uint16_t)GPR_U32(ctx, 12));
    // 0x2996c4: 0xa7d34232  sh          $s3, 0x4232($fp)
    ctx->pc = 0x2996c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16946), (uint16_t)GPR_U32(ctx, 19));
    // 0x2996c8: 0xa7c94234  sh          $t1, 0x4234($fp)
    ctx->pc = 0x2996c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16948), (uint16_t)GPR_U32(ctx, 9));
    // 0x2996cc: 0xafc0423c  sw          $zero, 0x423C($fp)
    ctx->pc = 0x2996ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16956), GPR_U32(ctx, 0));
    // 0x2996d0: 0xdfc240c8  ld          $v0, 0x40C8($fp)
    ctx->pc = 0x2996d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 16584)));
    // 0x2996d4: 0xafc742dc  sw          $a3, 0x42DC($fp)
    ctx->pc = 0x2996d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17116), GPR_U32(ctx, 7));
    // 0x2996d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2996d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2996dc: 0xafc542e0  sw          $a1, 0x42E0($fp)
    ctx->pc = 0x2996dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17120), GPR_U32(ctx, 5));
    // 0x2996e0: 0xffc240c8  sd          $v0, 0x40C8($fp)
    ctx->pc = 0x2996e0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16584), GPR_U64(ctx, 2));
    // 0x2996e4: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2996e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2996e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2996e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2996ec: 0xa7c642c4  sh          $a2, 0x42C4($fp)
    ctx->pc = 0x2996ecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17092), (uint16_t)GPR_U32(ctx, 6));
    // 0x2996f0: 0xa7c242c2  sh          $v0, 0x42C2($fp)
    ctx->pc = 0x2996f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17090), (uint16_t)GPR_U32(ctx, 2));
    // 0x2996f4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2996f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2996f8: 0xa7c8426c  sh          $t0, 0x426C($fp)
    ctx->pc = 0x2996f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17004), (uint16_t)GPR_U32(ctx, 8));
    // 0x2996fc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2996fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x299700: 0xa7c24292  sh          $v0, 0x4292($fp)
    ctx->pc = 0x299700u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17042), (uint16_t)GPR_U32(ctx, 2));
    // 0x299704: 0xa7c64294  sh          $a2, 0x4294($fp)
    ctx->pc = 0x299704u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17044), (uint16_t)GPR_U32(ctx, 6));
    // 0x299708: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x299708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29970c: 0xa7c8426e  sh          $t0, 0x426E($fp)
    ctx->pc = 0x29970cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17006), (uint16_t)GPR_U32(ctx, 8));
    // 0x299710: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x299710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x299714: 0xa7c842d0  sh          $t0, 0x42D0($fp)
    ctx->pc = 0x299714u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17104), (uint16_t)GPR_U32(ctx, 8));
    // 0x299718: 0xafcd4248  sw          $t5, 0x4248($fp)
    ctx->pc = 0x299718u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16968), GPR_U32(ctx, 13));
    // 0x29971c: 0xa7d8425e  sh          $t8, 0x425E($fp)
    ctx->pc = 0x29971cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16990), (uint16_t)GPR_U32(ctx, 24));
    // 0x299720: 0xa7cc4260  sh          $t4, 0x4260($fp)
    ctx->pc = 0x299720u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16992), (uint16_t)GPR_U32(ctx, 12));
    // 0x299724: 0xafc442a4  sw          $a0, 0x42A4($fp)
    ctx->pc = 0x299724u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17060), GPR_U32(ctx, 4));
    // 0x299728: 0xafcf42d4  sw          $t7, 0x42D4($fp)
    ctx->pc = 0x299728u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17108), GPR_U32(ctx, 15));
    // 0x29972c: 0xafce42d8  sw          $t6, 0x42D8($fp)
    ctx->pc = 0x29972cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17112), GPR_U32(ctx, 14));
    // 0x299730: 0xafc44240  sw          $a0, 0x4240($fp)
    ctx->pc = 0x299730u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16960), GPR_U32(ctx, 4));
    // 0x299734: 0xafc34244  sw          $v1, 0x4244($fp)
    ctx->pc = 0x299734u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16964), GPR_U32(ctx, 3));
    // 0x299738: 0xa7c0425c  sh          $zero, 0x425C($fp)
    ctx->pc = 0x299738u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16988), (uint16_t)GPR_U32(ctx, 0));
    // 0x29973c: 0xa7c94262  sh          $t1, 0x4262($fp)
    ctx->pc = 0x29973cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16994), (uint16_t)GPR_U32(ctx, 9));
    // 0x299740: 0xafc44270  sw          $a0, 0x4270($fp)
    ctx->pc = 0x299740u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17008), GPR_U32(ctx, 4));
    // 0x299744: 0xafc44274  sw          $a0, 0x4274($fp)
    ctx->pc = 0x299744u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17012), GPR_U32(ctx, 4));
    // 0x299748: 0xafc04278  sw          $zero, 0x4278($fp)
    ctx->pc = 0x299748u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17016), GPR_U32(ctx, 0));
    // 0x29974c: 0xafc0427c  sw          $zero, 0x427C($fp)
    ctx->pc = 0x29974cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17020), GPR_U32(ctx, 0));
    // 0x299750: 0xa7c04290  sh          $zero, 0x4290($fp)
    ctx->pc = 0x299750u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17040), (uint16_t)GPR_U32(ctx, 0));
    // 0x299754: 0xa7c94296  sh          $t1, 0x4296($fp)
    ctx->pc = 0x299754u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17046), (uint16_t)GPR_U32(ctx, 9));
    // 0x299758: 0xafc442a0  sw          $a0, 0x42A0($fp)
    ctx->pc = 0x299758u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17056), GPR_U32(ctx, 4));
    // 0x29975c: 0xafc042a8  sw          $zero, 0x42A8($fp)
    ctx->pc = 0x29975cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17064), GPR_U32(ctx, 0));
    // 0x299760: 0xafc042ac  sw          $zero, 0x42AC($fp)
    ctx->pc = 0x299760u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17068), GPR_U32(ctx, 0));
    // 0x299764: 0xa7c042c0  sh          $zero, 0x42C0($fp)
    ctx->pc = 0x299764u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17088), (uint16_t)GPR_U32(ctx, 0));
    // 0x299768: 0xa7c942c6  sh          $t1, 0x42C6($fp)
    ctx->pc = 0x299768u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17094), (uint16_t)GPR_U32(ctx, 9));
    // 0x29976c: 0xa7c042f4  sh          $zero, 0x42F4($fp)
    ctx->pc = 0x29976cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17140), (uint16_t)GPR_U32(ctx, 0));
    // 0x299770: 0xa7c742f6  sh          $a3, 0x42F6($fp)
    ctx->pc = 0x299770u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17142), (uint16_t)GPR_U32(ctx, 7));
    // 0x299774: 0xa7c842d2  sh          $t0, 0x42D2($fp)
    ctx->pc = 0x299774u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17106), (uint16_t)GPR_U32(ctx, 8));
    // 0x299778: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x299778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29977c: 0xa7c94394  sh          $t1, 0x4394($fp)
    ctx->pc = 0x29977cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17300), (uint16_t)GPR_U32(ctx, 9));
    // 0x299780: 0xafc34310  sw          $v1, 0x4310($fp)
    ctx->pc = 0x299780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17168), GPR_U32(ctx, 3));
    // 0x299784: 0xa7c74326  sh          $a3, 0x4326($fp)
    ctx->pc = 0x299784u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17190), (uint16_t)GPR_U32(ctx, 7));
    // 0x299788: 0xa7d34328  sh          $s3, 0x4328($fp)
    ctx->pc = 0x299788u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17192), (uint16_t)GPR_U32(ctx, 19));
    // 0x29978c: 0xa3c84334  sb          $t0, 0x4334($fp)
    ctx->pc = 0x29978cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 17204), (uint8_t)GPR_U32(ctx, 8));
    // 0x299790: 0xa7c2433a  sh          $v0, 0x433A($fp)
    ctx->pc = 0x299790u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17210), (uint16_t)GPR_U32(ctx, 2));
    // 0x299794: 0xa7d2433e  sh          $s2, 0x433E($fp)
    ctx->pc = 0x299794u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17214), (uint16_t)GPR_U32(ctx, 18));
    // 0x299798: 0xafd14370  sw          $s1, 0x4370($fp)
    ctx->pc = 0x299798u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17264), GPR_U32(ctx, 17));
    // 0x29979c: 0xafd04374  sw          $s0, 0x4374($fp)
    ctx->pc = 0x29979cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17268), GPR_U32(ctx, 16));
    // 0x2997a0: 0xafc54378  sw          $a1, 0x4378($fp)
    ctx->pc = 0x2997a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17272), GPR_U32(ctx, 5));
    // 0x2997a4: 0xa7c64392  sh          $a2, 0x4392($fp)
    ctx->pc = 0x2997a4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17298), (uint16_t)GPR_U32(ctx, 6));
    // 0x2997a8: 0xa7d342f8  sh          $s3, 0x42F8($fp)
    ctx->pc = 0x2997a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17144), (uint16_t)GPR_U32(ctx, 19));
    // 0x2997ac: 0xa7c942fa  sh          $t1, 0x42FA($fp)
    ctx->pc = 0x2997acu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17146), (uint16_t)GPR_U32(ctx, 9));
    // 0x2997b0: 0xafc34304  sw          $v1, 0x4304($fp)
    ctx->pc = 0x2997b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17156), GPR_U32(ctx, 3));
    // 0x2997b4: 0xafc34308  sw          $v1, 0x4308($fp)
    ctx->pc = 0x2997b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17160), GPR_U32(ctx, 3));
    // 0x2997b8: 0xafc3430c  sw          $v1, 0x430C($fp)
    ctx->pc = 0x2997b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17164), GPR_U32(ctx, 3));
    // 0x2997bc: 0xa7c04324  sh          $zero, 0x4324($fp)
    ctx->pc = 0x2997bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17188), (uint16_t)GPR_U32(ctx, 0));
    // 0x2997c0: 0xa7c9432a  sh          $t1, 0x432A($fp)
    ctx->pc = 0x2997c0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17194), (uint16_t)GPR_U32(ctx, 9));
    // 0x2997c4: 0xa7c04336  sh          $zero, 0x4336($fp)
    ctx->pc = 0x2997c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17206), (uint16_t)GPR_U32(ctx, 0));
    // 0x2997c8: 0xa7c04338  sh          $zero, 0x4338($fp)
    ctx->pc = 0x2997c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17208), (uint16_t)GPR_U32(ctx, 0));
    // 0x2997cc: 0xa3c04335  sb          $zero, 0x4335($fp)
    ctx->pc = 0x2997ccu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 17205), (uint8_t)GPR_U32(ctx, 0));
    // 0x2997d0: 0xa7c0433c  sh          $zero, 0x433C($fp)
    ctx->pc = 0x2997d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17212), (uint16_t)GPR_U32(ctx, 0));
    // 0x2997d4: 0xa7c04390  sh          $zero, 0x4390($fp)
    ctx->pc = 0x2997d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 17296), (uint16_t)GPR_U32(ctx, 0));
    // 0x2997d8: 0x24020278  addiu       $v0, $zero, 0x278
    ctx->pc = 0x2997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x2997dc: 0x0  nop
    ctx->pc = 0x2997dcu;
    // NOP
label_2997e0:
    // 0x2997e0: 0x7fb90000  sq          $t9, 0x0($sp)
    ctx->pc = 0x2997e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 25));
    // 0x2997e4: 0x3221018  mult        $v0, $t9, $v0
    ctx->pc = 0x2997e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2997e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2997e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997ec: 0x2f63021  addu        $a2, $s7, $s6
    ctx->pc = 0x2997ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x2997f0: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x2997f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2997f4: 0xc0a88d6  jal         func_2A2358
    ctx->pc = 0x2997F4u;
    SET_GPR_U32(ctx, 31, 0x2997FCu);
    ctx->pc = 0x2997F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997F4u;
    // 0x2997f8: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2358u, 0x2997F4u, 0x2997FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997FCu;
label_2997fc:
    // 0x2997fc: 0x7bb90000  lq          $t9, 0x0($sp)
    ctx->pc = 0x2997fcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299800: 0x2722ffff  addiu       $v0, $t9, -0x1
    ctx->pc = 0x299800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x299804: 0x305900ff  andi        $t9, $v0, 0xFF
    ctx->pc = 0x299804u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299808: 0x1720fff5  bnez        $t9, . + 4 + (-0xB << 2)
    ctx->pc = 0x299808u;
    {
        const bool branch_taken_0x299808 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x29980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299808u;
        // 0x29980c: 0x24020278  addiu       $v0, $zero, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299808) {
            ctx->pc = 0x2997E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2997e0;
        }
    }
    ctx->pc = 0x299810u;
    // 0x299810: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x299810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x299814: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x299814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x299818: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x299818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29981c: 0x34a543b0  ori         $a1, $a1, 0x43B0
    ctx->pc = 0x29981cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17328);
    // 0x299820: 0x34c640c8  ori         $a2, $a2, 0x40C8
    ctx->pc = 0x299820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16584);
    // 0x299824: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x299824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x299828: 0xc0a88d6  jal         func_2A2358
    ctx->pc = 0x299828u;
    SET_GPR_U32(ctx, 31, 0x299830u);
    ctx->pc = 0x29982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299828u;
    // 0x29982c: 0x863021  addu        $a2, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2358u, 0x299828u, 0x299830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299830u;
label_299830:
    // 0x299830: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x299830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x299834: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x299834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299838: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x299838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29983c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x29983cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299840: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x299840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299844: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x299844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299848: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x299848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29984c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x29984cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299850: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x299850u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299858: 0x3e00008  jr          $ra
    ctx->pc = 0x299858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299858u;
        // 0x29985c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299860u;
}
