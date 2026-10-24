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

// Function: sceIpuInit
// Address: 0x3bad80 - 0x3bafb8
void sceIpuInit_0x3bad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceIpuInit_0x3bad80");
#endif

    switch (ctx->pc) {
        case 0x3bad90u: goto label_3bad90;
        case 0x3bada8u: goto label_3bada8;
        case 0x3badd8u: goto label_3badd8;
        case 0x3bae60u: goto label_3bae60;
        case 0x3bae98u: goto label_3bae98;
        case 0x3baef0u: goto label_3baef0;
        case 0x3baf28u: goto label_3baf28;
        case 0x3baf60u: goto label_3baf60;
        case 0x3baf90u: goto label_3baf90;
        default: break;
    }

    ctx->pc = 0x3bad80u;

    // 0x3bad80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bad84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bad88: 0xc0eeb42  jal         func_3BAD08
    ctx->pc = 0x3BAD88u;
    SET_GPR_U32(ctx, 31, 0x3BAD90u);
    ctx->pc = 0x3BAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAD88u;
    // 0x3bad8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAD08u, 0x3BAD88u, 0x3BAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAD90u;
label_3bad90:
    // 0x3bad90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bad94: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3bad94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3bad98: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x3bad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x3bad9c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bada0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3bada0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x3bada4: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x3bada4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_3bada8:
    // 0x3bada8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3badac: 0x0  nop
    ctx->pc = 0x3badacu;
    // NOP
    // 0x3badb0: 0x0  nop
    ctx->pc = 0x3badb0u;
    // NOP
    // 0x3badb4: 0x0  nop
    ctx->pc = 0x3badb4u;
    // NOP
    // 0x3badb8: 0x0  nop
    ctx->pc = 0x3badb8u;
    // NOP
    // 0x3badbc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BADBCu;
    {
        const bool branch_taken_0x3badbc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3badbc) {
            ctx->pc = 0x3BADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bada8;
        }
    }
    ctx->pc = 0x3BADC4u;
    // 0x3badc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3badc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3badc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3badc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3badcc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3badccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3badd0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3badd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3badd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3badd4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
label_3badd8:
    // 0x3badd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3badd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3baddc: 0x0  nop
    ctx->pc = 0x3baddcu;
    // NOP
    // 0x3bade0: 0x0  nop
    ctx->pc = 0x3bade0u;
    // NOP
    // 0x3bade4: 0x0  nop
    ctx->pc = 0x3bade4u;
    // NOP
    // 0x3bade8: 0x0  nop
    ctx->pc = 0x3bade8u;
    // NOP
    // 0x3badec: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BADECu;
    {
        const bool branch_taken_0x3badec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3badec) {
            ctx->pc = 0x3BADD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3badd8;
        }
    }
    ctx->pc = 0x3BADF4u;
    // 0x3badf4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3badf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3badf8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3badf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3badfc: 0x24a5c810  addiu       $a1, $a1, -0x37F0
    ctx->pc = 0x3badfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952976));
    // 0x3bae00: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x3bae00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x3bae04: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3bae04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3FC810u));
    // 0x3bae08: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3bae08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3bae0c: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x3bae0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x3bae10: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x3bae10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x3bae14: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3bae14u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x3bae18: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x3bae18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x3bae1c: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x3bae1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x3bae20: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x3bae20u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3FC820u));
    // 0x3bae24: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3bae24u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x3bae28: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x3bae28u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3FC830u));
    // 0x3bae2c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3bae2cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x3bae30: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x3bae30u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3FC840u));
    // 0x3bae34: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3bae34u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x3bae38: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x3bae38u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3FC850u));
    // 0x3bae3c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3bae3cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x3bae40: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x3bae40u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3FC850u));
    // 0x3bae44: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3bae44u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x3bae48: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x3bae48u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3FC850u));
    // 0x3bae4c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3bae4cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x3bae50: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x3bae50u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3FC850u));
    // 0x3bae54: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3bae54u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x3bae58: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3bae58u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 7));
    // 0x3bae5c: 0x0  nop
    ctx->pc = 0x3bae5cu;
    // NOP
label_3bae60:
    // 0x3bae60: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3bae64: 0x0  nop
    ctx->pc = 0x3bae64u;
    // NOP
    // 0x3bae68: 0x0  nop
    ctx->pc = 0x3bae68u;
    // NOP
    // 0x3bae6c: 0x0  nop
    ctx->pc = 0x3bae6cu;
    // NOP
    // 0x3bae70: 0x0  nop
    ctx->pc = 0x3bae70u;
    // NOP
    // 0x3bae74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAE74u;
    {
        const bool branch_taken_0x3bae74 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3bae74) {
            ctx->pc = 0x3BAE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bae60;
        }
    }
    ctx->pc = 0x3BAE7Cu;
    // 0x3bae7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bae80: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x3bae80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x3bae84: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3bae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3bae88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bae88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bae8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3bae8cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x3bae90: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x3bae90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x3bae94: 0x0  nop
    ctx->pc = 0x3bae94u;
    // NOP
label_3bae98:
    // 0x3bae98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bae9c: 0x0  nop
    ctx->pc = 0x3bae9cu;
    // NOP
    // 0x3baea0: 0x0  nop
    ctx->pc = 0x3baea0u;
    // NOP
    // 0x3baea4: 0x0  nop
    ctx->pc = 0x3baea4u;
    // NOP
    // 0x3baea8: 0x0  nop
    ctx->pc = 0x3baea8u;
    // NOP
    // 0x3baeac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAEACu;
    {
        const bool branch_taken_0x3baeac = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3baeac) {
            ctx->pc = 0x3BAE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bae98;
        }
    }
    ctx->pc = 0x3BAEB4u;
    // 0x3baeb4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3baeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3baeb8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3baeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3baebc: 0x2463c860  addiu       $v1, $v1, -0x37A0
    ctx->pc = 0x3baebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953056));
    // 0x3baec0: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x3baec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x3baec4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3baec4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3FC860u));
    // 0x3baec8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3baec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3baecc: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x3baeccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x3baed0: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x3baed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x3baed4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3baed4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x3baed8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3baed8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3baedc: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x3baedcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x3baee0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x3baee0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3FC870u));
    // 0x3baee4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3baee4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x3baee8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3baee8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 6));
    // 0x3baeec: 0x0  nop
    ctx->pc = 0x3baeecu;
    // NOP
label_3baef0:
    // 0x3baef0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3baef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3baef4: 0x0  nop
    ctx->pc = 0x3baef4u;
    // NOP
    // 0x3baef8: 0x0  nop
    ctx->pc = 0x3baef8u;
    // NOP
    // 0x3baefc: 0x0  nop
    ctx->pc = 0x3baefcu;
    // NOP
    // 0x3baf00: 0x0  nop
    ctx->pc = 0x3baf00u;
    // NOP
    // 0x3baf04: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAF04u;
    {
        const bool branch_taken_0x3baf04 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3baf04) {
            ctx->pc = 0x3BAEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3baef0;
        }
    }
    ctx->pc = 0x3BAF0Cu;
    // 0x3baf0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3baf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3baf10: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x3baf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x3baf14: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3baf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3baf18: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3baf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3baf1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3baf1cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x3baf20: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x3baf20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x3baf24: 0x0  nop
    ctx->pc = 0x3baf24u;
    // NOP
label_3baf28:
    // 0x3baf28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3baf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3baf2c: 0x0  nop
    ctx->pc = 0x3baf2cu;
    // NOP
    // 0x3baf30: 0x0  nop
    ctx->pc = 0x3baf30u;
    // NOP
    // 0x3baf34: 0x0  nop
    ctx->pc = 0x3baf34u;
    // NOP
    // 0x3baf38: 0x0  nop
    ctx->pc = 0x3baf38u;
    // NOP
    // 0x3baf3c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAF3Cu;
    {
        const bool branch_taken_0x3baf3c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3baf3c) {
            ctx->pc = 0x3BAF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3baf28;
        }
    }
    ctx->pc = 0x3BAF44u;
    // 0x3baf44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3baf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3baf48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3baf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3baf4c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x3baf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x3baf50: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3baf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3baf54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3baf54u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x3baf58: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x3baf58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x3baf5c: 0x0  nop
    ctx->pc = 0x3baf5cu;
    // NOP
label_3baf60:
    // 0x3baf60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3baf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3baf64: 0x0  nop
    ctx->pc = 0x3baf64u;
    // NOP
    // 0x3baf68: 0x0  nop
    ctx->pc = 0x3baf68u;
    // NOP
    // 0x3baf6c: 0x0  nop
    ctx->pc = 0x3baf6cu;
    // NOP
    // 0x3baf70: 0x0  nop
    ctx->pc = 0x3baf70u;
    // NOP
    // 0x3baf74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAF74u;
    {
        const bool branch_taken_0x3baf74 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3baf74) {
            ctx->pc = 0x3BAF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3baf60;
        }
    }
    ctx->pc = 0x3BAF7Cu;
    // 0x3baf7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3baf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3baf80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3baf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3baf84: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3baf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3baf88: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3baf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3baf8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3baf8cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
label_3baf90:
    // 0x3baf90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3baf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3baf94: 0x0  nop
    ctx->pc = 0x3baf94u;
    // NOP
    // 0x3baf98: 0x0  nop
    ctx->pc = 0x3baf98u;
    // NOP
    // 0x3baf9c: 0x0  nop
    ctx->pc = 0x3baf9cu;
    // NOP
    // 0x3bafa0: 0x0  nop
    ctx->pc = 0x3bafa0u;
    // NOP
    // 0x3bafa4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAFA4u;
    {
        const bool branch_taken_0x3bafa4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3bafa4) {
            ctx->pc = 0x3BAF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3baf90;
        }
    }
    ctx->pc = 0x3BAFACu;
    // 0x3bafac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bafacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bafb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAFB0u;
        // 0x3bafb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAFB8u;
}
